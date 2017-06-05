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
#include <map>
#include <QTime>


#define AVG_THREE_POINTER 12

league currentLeague;
std::vector<team> teams;
team myTeam;
bool offenseTactic = true;
bool deffenceTactic = true;
std::vector<player> transfermarket;


std::map<std::string, int> standings;

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

bool is_market_separator(char c)
{
    return c == ':';
}

std::vector<std::string> playersMarketParse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();
    while(i != line.end()) {

        i = std::find_if_not(i, line.end(), is_market_separator);

       auto j = std::find_if(i, line.end(), is_market_separator);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
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
    this->setGeometry(425, 200, 200, 200);
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
        standings[name] = 0;
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
    QFile file("transferMarket.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {

        QString qLine = in.readLine();
        std::string line = qLine.toStdString(); // line as a string

        std::vector<std::string> data = playersMarketParse(line);

        int number = std::stoi(data[0]);
        std::string name = data[1];
        std::string dateOfBirth = data[2];
        std::string nationality = data[3];
        std::string position = data[4];
        double height = std::stof(data[5]);
        int onePointer = std::stoi(data[6]);
        int twoPointer = std::stoi(data[7]);
        int threePointer = std::stoi(data[8]);
        int assits = std::stoi(data[9]);
        int dribble = std::stoi(data[10]);
        int defence = std::stoi(data[11]);
        int physicality = std::stoi(data[12]);

        player p = player(number, name, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);
        //p.toString();
        transfermarket.push_back(p);
    }

    // Stampanje igraca
    auto i = transfermarket.begin();
    while(i != transfermarket.end()) {

        (*i).toString();
        i++;
    }

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

    //currentLeague.setTransferMarket();
    std::vector<std::vector<team>> tm{
       /* Round 1*/
       {result[0], myTeam,
        result[1], result[6],
        result[2], result[5],
        result[3], result[4]},
       /* Round 2*/
       {result[6], result[0],
        result[5], myTeam,
        result[4], result[1],
        result[3], result[2]},
       /* Round 3 */
       {result[0], result[5],
        result[6], result[4],
        myTeam,    result[3],
        result[1], result[2]},
       /* Round 4 */
       {result[4], result[0],
        result[5], result[3],
        result[2], result[6],
        myTeam,    result[1]},
       /* Round 5 */
       {result[0], result[3],
        result[4], result[2],
        result[5], result[1],
        result[6], myTeam},
       /* Round 6 */
       {result[2], result[0],
        result[1], result[3],
        myTeam,    result[4],
        result[6], result[5]},
       /* Round 7 */
       {result[0], result[1],
        result[2], myTeam,
        result[3], result[6],
        result[4], result[5]},
        /* Round 8 */
       {myTeam,    result[0],
        result[6], result[1],
        result[5], result[2],
        result[4], result[3]},
        /* Round 9 */
       {result[0], result[6],
        myTeam,    result[5],
        result[1], result[4],
        result[2], result[3]},
        /* Round 10 */
       {result[5], result[0],
        result[4], result[6],
        result[3],  myTeam,
        result[2], result[1]},
        /* Round 11 */
       {result[0], result[4],
        result[3], result[5],
        result[6], result[2],
        result[1], myTeam},
        /* Round 12 */
       {result[3], result[0],
        result[2], result[4],
        result[1], result[5],
        myTeam,    result[6]},
        /* Round 13 */
       {result[0], result[2],
        result[3], result[1],
        result[4], myTeam,
        result[5], result[6]},
        /* Round 14 */
       {result[1], result[0],
        myTeam,    result[2],
        result[6], result[3],
        result[5], result[4]}};

    currentLeague.set_schedule(tm);


    /* Entering gameplay mode */
    ui->stackedWidget->setCurrentIndex(1);
    this->setGeometry(0, 0, 1100, 600);
    if(currentLeague.getMyTeam().get_name() == "Anadolu Efes")
        ui->logoHome->setStyleSheet("background-image:url(\"efes.png\")");
    else if(currentLeague.getMyTeam().get_name() == "CSKA")
        ui->logoHome->setStyleSheet("background-image:url(\"cska.png\")");
    else if(currentLeague.getMyTeam().get_name() == "Crvena Zvezda")
        ui->logoHome->setStyleSheet("background-image:url(\"zvezda.png\")");
    else if(currentLeague.getMyTeam().get_name() == "Maccabi")
        ui->logoHome->setStyleSheet("background-image:url(\"maccabi.png\")");
    else if(currentLeague.getMyTeam().get_name() == "Real Madrid")
        ui->logoHome->setStyleSheet("background-image:url(\"real.png\")");
    else if(currentLeague.getMyTeam().get_name() == "Panathinaikos")
        ui->logoHome->setStyleSheet("background-image:url(\"panathinaikos.png\")");
    else if(currentLeague.getMyTeam().get_name() == "Zalgiris")
        ui->logoHome->setStyleSheet("background-image:url(\"zalgiris.png\")");
    else if(currentLeague.getMyTeam().get_name() == "EA7 Emporio Armani")
        ui->logoHome->setStyleSheet("background-image:url(\"armani.png\")");
}

void MainWindow::on_homeButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(0);

}

void MainWindow::on_myTeamButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(1);

    ui->myTeamList->clear();

    std::vector<player> players = currentLeague.getMyTeam().get_players();
    auto i = players.begin();
    auto end = players.end();

    QStringList items;

    while (i != end) {

        QString qPlayerInfo = QString::fromStdString(i->toString());
        items += qPlayerInfo;
        i++;
    }
    //team tomba=currentLeague.getMyTeam();
    //std::cout << tomba.m_maxBudget << std::endl;
    ui->myTeamList->addItems(items);
}

void MainWindow::on_standingsButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(2);

    std::vector<std::pair<std::string, int>> sortedStandings;

    for(auto i = standings.begin(); i != standings.end(); ++i)
    {
        sortedStandings.push_back(*i);
    }

    sort(sortedStandings.begin(), sortedStandings.end(),
         [=](std::pair<std::string, int> & a, std::pair<std::string, int> & b)
         {
            return a.second > b.second;
         });

    /* First Place */
    ui->firstPlaceName->setText(QString::fromStdString(sortedStandings[0].first));
    ui->firstPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[0].second)));
    /* Second Place */
    ui->secondPlaceName->setText(QString::fromStdString(sortedStandings[1].first));
    ui->secondPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[1].second)));
    /* Third Place */
    ui->thirdPlaceName->setText(QString::fromStdString(sortedStandings[2].first));
    ui->thirdPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[2].second)));
    /* Fourth Place */
    ui->fourthPlaceName->setText(QString::fromStdString(sortedStandings[3].first));
    ui->fourthPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[3].second)));
    /* Fifth Place */
    ui->fifthPlaceName->setText(QString::fromStdString(sortedStandings[4].first));
    ui->fifthPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[4].second)));
    /* Sixth Place */
    ui->sixthPlaceName->setText(QString::fromStdString(sortedStandings[5].first));
    ui->sixthPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[5].second)));
    /* Seventh Place */
    ui->seventhPlaceName->setText(QString::fromStdString(sortedStandings[6].first));
    ui->seventhPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[6].second)));
    /* Eighth Place */
    ui->eighthPlaceName->setText(QString::fromStdString(sortedStandings[7].first));
    ui->eighthPlacePoints->setText(QString::fromStdString(std::to_string(sortedStandings[7].second)));


}

void MainWindow::on_scheduleButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(3);

    std::vector<team> t = currentLeague.getCurrentRound();

    /* Round schedule label */
    int round = currentLeague.getRound();
    currentLeague.scheduleCounter = round;
    ui->roundScheduleLabel->setText(QString::fromStdString("ROUND " + std::to_string(round+1)));

    /* Game 1 label */
    ui->firstScheduleLabel->setText(QString::fromStdString(t[0].get_name() + " - " + t[1].get_name()));
    /* Game 2 label */
    ui->secondScheduleLabel->setText(QString::fromStdString(t[2].get_name() + " - " + t[3].get_name()));
    /* Game 3 label */
    ui->thirdScheduleLabel->setText(QString::fromStdString(t[4].get_name() + " - " + t[5].get_name()));
    /* Game 4 label */
    ui->fourthScheduleLabel->setText(QString::fromStdString(t[6].get_name() + " - " + t[7].get_name()));
}

void MainWindow::on_nextRoundButton_clicked()
{
    if(currentLeague.scheduleCounter < 13)
    {
        currentLeague.scheduleCounter++;

        std::vector<team> t = currentLeague.getKRound(currentLeague.scheduleCounter);

        ui->roundScheduleLabel->setText(QString::fromStdString("ROUND " + std::to_string(currentLeague.scheduleCounter+1)));

        /* Game 1 label */
        ui->firstScheduleLabel->setText(QString::fromStdString(t[0].get_name() + " - " + t[1].get_name()));
        /* Game 2 label */
        ui->secondScheduleLabel->setText(QString::fromStdString(t[2].get_name() + " - " + t[3].get_name()));
        /* Game 3 label */
        ui->thirdScheduleLabel->setText(QString::fromStdString(t[4].get_name() + " - " + t[5].get_name()));
        /* Game 4 label */
        ui->fourthScheduleLabel->setText(QString::fromStdString(t[6].get_name() + " - " + t[7].get_name()));
    }
}

void MainWindow::on_previousRoundButton_clicked()
{
    if(currentLeague.scheduleCounter > 0)
    {
        currentLeague.scheduleCounter--;

        std::vector<team> t = currentLeague.getKRound(currentLeague.scheduleCounter);

        ui->roundScheduleLabel->setText(QString::fromStdString("ROUND " + std::to_string(currentLeague.scheduleCounter+1)));


        /* Game 1 label */
        ui->firstScheduleLabel->setText(QString::fromStdString(t[0].get_name() + " - " + t[1].get_name()));
        /* Game 2 label */
        ui->secondScheduleLabel->setText(QString::fromStdString(t[2].get_name() + " - " + t[3].get_name()));
        /* Game 3 label */
        ui->thirdScheduleLabel->setText(QString::fromStdString(t[4].get_name() + " - " + t[5].get_name()));
        /* Game 4 label */
        ui->fourthScheduleLabel->setText(QString::fromStdString(t[6].get_name() + " - " + t[7].get_name()));
    }

}

void MainWindow::on_transferMarketButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(4);

    ui->transferMarketListWidget->clear();

    //std::vector<player> players = currentLeague.getTransferMarket();
    auto i = transfermarket.begin();
    auto end = transfermarket.end();

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
    if(homeWin){
        standings[homeTeam.get_name()] += 2;
        standings[awayTeam.get_name()] += 1;
    }
    else{
        standings[homeTeam.get_name()] += 1;
        standings[awayTeam.get_name()] += 2;
    }


    int homePoints;
    int awayPoints;

    srand(time(NULL) * parameter);
    if(homeWin)
    {
         homePoints = rand( )%40 + 60;
         awayPoints = homePoints - rand() % 15-1;
    }
    else
    {
        awayPoints = rand()%40 + 60;
        homePoints = awayPoints - rand() % 15-1;
    }

    return std::to_string(homePoints)+ " : " + std::to_string(awayPoints);
}

bool myTeamVictory(team &myTeam, team &oppTeam, bool isHomeCourt, int parameter)
{
    int sumMyTeamPlayers = 0;
    int sumOppTeamPlayers = 0;
    int sumMyTeamThreePointShoot = 0;
    int sumOppTeamThreePointShoot = 0;
    std::vector<player> myTeamPlayers = myTeam.get_players();
    std::vector<player> oppTeamPlayers = oppTeam.get_players();

    int len = myTeamPlayers.size();
    for (int i = 0; i < len; i++) {

        sumMyTeamThreePointShoot += myTeamPlayers[i].get_threePointer();
        sumOppTeamThreePointShoot += oppTeamPlayers[i].get_threePointer();
        sumMyTeamPlayers += myTeamPlayers[i].overallRating();
        sumOppTeamPlayers += oppTeamPlayers[i].overallRating();
    }

    int myTeamThreePointAvg = sumMyTeamThreePointShoot / myTeam.get_players().size();
    int oppTeamThreePointAvg = sumOppTeamThreePointShoot / oppTeam.get_players().size();

    if (isHomeCourt) {

        sumMyTeamPlayers = sumMyTeamPlayers * myTeam.get_homeEfficiency();
        sumOppTeamPlayers = sumOppTeamPlayers * oppTeam.get_awayEfficiency();
    } else {

        sumMyTeamPlayers = sumMyTeamPlayers * myTeam.get_awayEfficiency();
        sumOppTeamPlayers = sumOppTeamPlayers * oppTeam.get_homeEfficiency();
    }

    if (offenseTactic)
        sumMyTeamPlayers += (myTeamThreePointAvg - AVG_THREE_POINTER)*10;

    if (deffenceTactic)
         sumOppTeamPlayers += (oppTeamThreePointAvg-AVG_THREE_POINTER)*10;

    int overallSum = sumOppTeamPlayers + sumMyTeamPlayers;
    srand(time(NULL) * parameter);
    int random = rand() % (overallSum + 1);

    return sumMyTeamPlayers >= random;

}

std::string getResultMyTeam(team &myTeam, team &oppTeam, bool isHomeCourt, int parameter)
{
    bool myTeamWin = myTeamVictory(myTeam, oppTeam, isHomeCourt, parameter);
    if(myTeamWin){
        standings[myTeam.get_name()] += 2;
        standings[oppTeam.get_name()] += 1;
    }
    else{
        standings[myTeam.get_name()]+= 1;
        standings[oppTeam.get_name()]+= 2;
    }
    int homePoints;
    int awayPoints;
    srand(time(NULL) * parameter);

    if(myTeamWin) {

         homePoints = rand()%40 + 60;
         awayPoints = homePoints - rand()%15 - 1;
    } else {

        awayPoints = rand()%40 + 60;
        homePoints = awayPoints - rand()%15 - 1;
    }

    return std::to_string(homePoints) + " : " + std::to_string(awayPoints);
}

void MainWindow::on_nextGameButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(6);

    std::vector<team> nextRound = currentLeague.getNextRound();

    for(unsigned int i = 0; i < nextRound.size() - 1; i += 2)
    {
        std::string result;

        if(nextRound[i].get_name() == currentLeague.getMyTeam().get_name())
            result = nextRound[i].get_name() + " " + getResultMyTeam(nextRound[i], nextRound[i+1], true, k++) + " " + nextRound[i+1].get_name();
        else if(nextRound[i+1].get_name() == currentLeague.getMyTeam().get_name())
            result = nextRound[i].get_name() + " " + getResultMyTeam(nextRound[i+1], nextRound[i], false, k++) + " " + nextRound[i+1].get_name();
        else
            result = nextRound[i].get_name() + " " + getResultOthers(nextRound[i], nextRound[i+1], k++) + " " + nextRound[i+1].get_name();

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
    auto i=standings.begin();
    while(i!=standings.end()){
        std::cout<<i->first<<" "<<i->second<<std::endl;
        i++;
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
    std::string fullname=name +" "+sur;

    player p = player(number, fullname, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);
    auto i=transfermarket.begin();
    std::vector<player> new_transfermarket;
    while (i!=transfermarket.end()){
        if(i->get_name()!=p.get_name())
            new_transfermarket.push_back(*i);
        i++;
    }
    transfermarket=new_transfermarket;
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

void MainWindow::on_sellPlayerButton_clicked()
{
    QListWidgetItem *item = ui->myTeamList->takeItem(ui->myTeamList->currentRow());

    QString qSelectedPlayer = item->text();

    std::string selectedPlayer = qSelectedPlayer.toStdString();
   //std::cout<<selectedPlayer<<std::endl;
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
    std::string fullname=name + " " + sur;

    player p = player(number, fullname, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);
    std::string name1=data[1] + " " + data[2];
    team t = currentLeague.getMyTeam();
    std::vector<player> pl = t.sellPlayer(name1);
    t.set_players(pl);
    currentLeague.setMyTeam(t);
    transfermarket.push_back(p);

    std::cout << currentLeague.getMyTeam().getCurrentBudget() << std::endl;
}

void MainWindow::on_pushButton_clicked()
{
    ui->gamePlayStackedWidget->setCurrentIndex(5);
}

void MainWindow::on_runAndGunButton_clicked(bool checked)
{
    if(checked)
        offenseTactic = true;
}

void MainWindow::on_positionAttackButton_clicked(bool checked)
{
    if(checked)
        offenseTactic = false;
}

void MainWindow::on_zoneButton_clicked(bool checked)
{
    if(checked)
        deffenceTactic = true;
}

void MainWindow::on_manToManButton_clicked(bool checked)
{
    if(checked)
        deffenceTactic = false;
}


