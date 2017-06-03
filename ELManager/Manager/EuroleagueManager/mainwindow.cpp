#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTimer>
#include <iostream>
#include <QListWidget>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QSize>

#include "team.h"
#include "league.h"
#include <cstdlib>
#include <random>
#include <ctime>

#include <QTime>

league currentLeague;
std::vector<team> teams;
team myTeam;


unsigned int k = rand();

#define NUM_OF_TEAMS 8
bool is_separator(char c)
{
    return c == ':';
}

bool is_separatorSpace(char c)
{
    return c == ' ';
}


std::vector<std::string> parse(std::string &line)
{        //setName(qName.toStdString());
    //setSurname(qSurname.toStdString());
    //setNationality(qNationality.toStdString());
    //setTeam(qTeam.toStdString());
    std::vector<std::string> res;

    auto i = line.begin();
    while (i != line.end()) {

        i = std::find_if_not(i, line.end(), is_separator);
        auto j = std::find_if(i, line.end(), is_separator);

        if (i != line.end())
            res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

std::vector<std::string> transferMarketParse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();
    while(i != line.end()) {

        i = std::find_if_not(i, line.end(), is_separatorSpace);

       auto j = std::find_if(i, line.end(), is_separatorSpace);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->gamePlayStackedWidget->setCurrentIndex(0);

    /* Reading the database */
    QFile file("teams.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    QStringList items;

    while(!in.atEnd()) {

        QString qLine = in.readLine();
        std::string line = qLine.toStdString();

        std::vector<std::string> data = parse(line);

        int position = std::stoi(data[0]); //std::cout << position << std::endl;
        std::string name = data[1]; //std::cout << name << std::endl;
        std::string state = data[2]; //std::cout << state << std::endl;
        std::string town = data[3]; //std::cout << town << std::endl;
        std::string coach = data[4]; //std::cout << coach << std::endl;
        std::string sHomeEff = data[5];
        std::string sAwayEff = data[6];
        QString qHomeEff = QString::fromStdString(sHomeEff);
        QString qAwayEff = QString::fromStdString(sAwayEff);
        double homeEff = qHomeEff.toDouble(); //std::cout << home_eff << std::endl;
        double awayEff = qAwayEff.toDouble(); //std::cout << away_eff << std::endl;
        team t = team(position, name, state, town, coach, homeEff, awayEff);
        teams.push_back(t);
        //t.toString();
    }

    int j = 0;

    while(j < NUM_OF_TEAMS) {

        std::string team_name = teams[j].get_name();
        teams[j++].addPlayers(team_name);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{

    QString qName = ui->nameEdit->text();
    QString qSurname = ui->surnameEdit->text();
    QString qNationality = ui->nationalityBox->currentText();
    QString qTeam = ui->teamBox->currentText();

    std::vector<team> result;
    std::string myTeamName = qTeam.toStdString();
    for (unsigned int i=0;i<teams.size();i++){
        if(myTeamName!=teams[i].get_name())
            result.push_back(teams[i]);
        else
            myTeam=teams[i];
    }

    currentLeague.setTeams(result);
    std::cout<<myTeam.m_maxBudget<<std::endl;
    currentLeague.setMyTeam(myTeam);
    //std::cout<<myTeam.get_players().size()<<std::endl;
    std::vector<team> teams_for_print=currentLeague.getTeams();
   /* for (unsigned int i=0;i<teams_for_print.size();i++)
        std::cout<<teams_for_print[i].get_name()<<std::endl;*/

  //  std::cout << currentLeague.getMyTeam().get_players().size()<< std::endl;

    currentLeague.setTransferMarket();
    std::vector<std::vector<team>> tm{
        {result[0], myTeam,
        result[1], result[6],
        result[2], result[5],
        result[3], result[4]},
       /* Round 1 */
       {result[6], result[0],
        result[5], myTeam,
        result[4], result[1],
        result[3], result[2]},
       /* Round 2 */
       {result[0], result[5],
        result[6], result[4],
        myTeam,   result[3],
        result[1], result[2]},
       /* Round 3 */
       {result[4], result[0],
        result[5], result[3],
        result[2], result[6],
        myTeam,   result[1]},
       /* Round 4 */
       {result[0], result[3],
        result[4], result[2],
        result[5], result[1],
        result[6], myTeam},
       /* Round 5 */
       {result[2], result[0],
        result[1], result[3],
        myTeam,   result[4],
        result[6], result[5]},
       /* Round 6 */
       {result[0], result[1],
        result[2], myTeam,
        result[3], result[6],
        result[4], result[5]}
       };

    currentLeague.set_schedule(tm);


    /* Entering gameplay mode */
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->setFixedSize(QSize(1000, 500));
}

void MainWindow::on_homeButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(0);
}

void MainWindow::on_myTeamButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(1);


    std::vector<player> players = currentLeague.getMyTeam().get_players();
    auto i = players.begin();
    auto end = players.end();

    QStringList items;

    while (i != end) {

        QString qPlayerInfo = QString::fromStdString(i->toString());
        items += qPlayerInfo;
        i++;
    }
    team tomba=currentLeague.getMyTeam();
    std::cout<<tomba.m_maxBudget<<std::endl;
    ui->myTeamList->addItems(items);
}

void MainWindow::on_standingsButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(2);
}

void MainWindow::on_scheduleButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(3);
}

void MainWindow::on_transferMarketButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(4);

    std::vector<player> players = currentLeague.getTransferMarket();
    auto i = players.begin();
    auto end = players.end();

    QStringList items;

    while (i != end) {

        QString qPlayerInfo = QString::fromStdString(i->toString());
        items += qPlayerInfo;
        i++;
    }

    std::cout << currentLeague.getMyTeam().getCurrentBudget() << std::endl;

    ui->transferMarketListWidget->addItems(items);
}


bool homeVictory(team & homeTeam, team & awayTeam, int parameter)
{
  //  std::cout<<k<<std::endl;
    int sumHomePlayers = 0;
    int sumAwayPlayers = 0;
    std::vector<player> homePlayers = homeTeam.get_players();
    std::vector<player> awayPlayers = awayTeam.get_players();

    int length = homePlayers.size();

    for(int i = 0; i < length; i++){
        sumHomePlayers += homePlayers[i].overallRating();
        sumAwayPlayers += awayPlayers[i].overallRating();
    }

    sumHomePlayers = sumHomePlayers * homeTeam.get_homeEfficiency();
    sumAwayPlayers = sumAwayPlayers * awayTeam.get_awayEfficiency();

    int overallSum = sumAwayPlayers + sumHomePlayers;


    srand(time(NULL) * parameter);

    int random = rand() % (overallSum + 1);


    return sumHomePlayers >= random;
}

std::string getResultOthers(team & homeTeam, team & awayTeam,int parameter){
    bool homeWin = homeVictory(homeTeam, awayTeam, parameter);


    int homePoints;
    int awayPoints;

    srand(time(NULL) * parameter);
    if(homeWin)
    {
         homePoints = rand( ) % 40 + 60;
         awayPoints = homePoints - rand() % 15-1;
    }
    else
    {
        awayPoints = rand() % 50 + 50;
        homePoints = awayPoints - rand() % 15-1;
    }

    return std::to_string(homePoints)+ " : " + std::to_string(awayPoints);
}

void MainWindow::on_nextGameButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(5);
    std::vector<team> nextRound = currentLeague.getNextRound();

    for(unsigned int i = 0; i < nextRound.size() - 1; i = i+2)
    {
        std::string result = nextRound[i].get_name() + " " + getResultOthers(nextRound[i], nextRound[i+1], k++) + " " + nextRound[i+1].get_name();
        //std::cout << nextRound[i].get_name() << " ";
        //std::cout << getResultOthers(nextRound[i], nextRound[i+1], k++) << " ";
        //std::cout << nextRound[i+1].get_name() << std::endl;

        /* Updating the round counter label */
        std::string roundLabelText = "Round " + std::to_string(currentLeague.getRound());
        ui->roundLabel->setText(QString::fromStdString(roundLabelText));

        /* Showing the result of the games */
        if(i == 0)
            ui->firstResultLabel->setText(QString::fromStdString(result));
        else if(i == 2)
            ui->secondResultLabel->setText(QString::fromStdString(result));
        else if(i == 4)
                ui->thirdResultLabel->setText(QString::fromStdString(result));
        else if(i == 6)
            ui->fourthResultLabel->setText(QString::fromStdString(result));
    }
}

void MainWindow::on_buyButton_clicked()
{
    QListWidgetItem *item = ui->transferMarketListWidget->takeItem(ui->transferMarketListWidget->currentRow());

    QString qSelectedPlayer = item->text();

    std::string selectedPlayer = qSelectedPlayer.toStdString();

    std::vector<std::string> data = transferMarketParse(selectedPlayer);

    int number = std::stoi(data[0]);
    std::string name = data[1];
    std::string sur = data[2];
    int assits = std::stoi(data[10]);
    int dribble = std::stoi(data[11]);
    int defence = std::stoi(data[12]);
    int physicality = std::stoi(data[13]);
    std::string dateOfBirth = data[3];
    std::string nationality = data[4];
    std::string position = data[5];
    double height = std::stof(data[6]);
    int onePointer = std::stoi(data[7]);
    int twoPointer = std::stoi(data[8]);
    int threePointer = std::stoi(data[9]);

    player p = player(number, name, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);

    team t1 = currentLeague.getMyTeam();
    t1.buyPlayer(p);
    currentLeague.setMyTeam(t1);

    std::vector<player> k = currentLeague.getMyTeam().get_players();
    //k.push_back(p);
    auto j = k.begin();
    while(j != k.end())
    {
        std::cout << j->toString() << std::endl;
        j++;
    }
//    team t1 = currentLeague.getMyTeam();
//    t1.set_players(k);
//    currentLeague.setMyTeam(t1);

    delete item;
}
