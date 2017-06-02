#include "login.h"
#include "ui_login.h"
#include "global_league.h"

#include <QMessageBox>
#include <QTimer>
#include <iostream>
#include <QListWidget>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "login.h"
#include "team.h"
#include "global_league.h"
#include "league.h"

#define NO_OF_TEAMS 8

//std::vector<team> teams;

league currentLeague;

bool is_separator(char c)
{
    return c == ':';
}

std::vector<std::string> parse(std::string &line)
{
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


LogIn::LogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);

    QFile file("teams.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    std::vector<team> teams;
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
        std::string sAwayEff = data[4];
        QString qHomeEff = QString::fromStdString(sHomeEff);
        QString qAwayEff = QString::fromStdString(sAwayEff);
        double homeEff = qHomeEff.toDouble(); //std::cout << home_eff << std::endl;
        double awayEff = qAwayEff.toDouble(); //std::cout << away_eff << std::endl;

        team t = team(position, name, state, town, coach, homeEff, awayEff);
        teams.push_back(t);

        //QString qTeamName = QString::fromStdString(name);
        //qDebug() << qTeamName;
        //items += qTeamName; // adding team names to QStringLis
    }

    // Adding to combobox
    //items.sort();
    //ui->teams_combo->addItems(items);

    int j = 0;

    while(j < NO_OF_TEAMS) {

        std::string team_name = teams[j].get_name();
        std::cout << std::endl << std::endl << team_name << std::endl;
        teams[j++].addPlayers(team_name);
    }


    currentLeague.setTeams(teams);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_login_button_clicked()
{
    QString qName = ui->name_edit->text();
    QString qSurname = ui->surname_edit->text();
    QString qNationality = ui->nationality_combo->currentText();
    QString qTeam = ui->teams_combo->currentText();

    if(qName.length() > 15) {
        QMessageBox::information(this, "LOGIN", "Name is inncorect.");
        QTimer::singleShot(0, ui->name_edit, SLOT(setFocus()));
    }
    else if(qSurname.length() > 15){
        QMessageBox::information(this, "LOGIN", "Surname is inncorect.");
        QTimer::singleShot(0, ui->surname_edit, SLOT(setFocus()));
    }
    else {
        QMessageBox::information(this, "LOGIN", "WELCOME " + qName + " " + qSurname);
        //setName(qName.toStdString());
        //setSurname(qSurname.toStdString());
        //setNationality(qNationality.toStdString());
        //setTeam(qTeam.toStdString());

    }
    this->hide();
    form.show();

    std::vector<team> l;
    std::string myTeamName = qTeam.toStdString();
    auto i = currentLeague.getTeams().begin();
    while(i != currentLeague.getTeams().end())
    {
        if(myTeamName == i->get_name())
        {
            std::cout << "pronadjeno " << std::endl;
            break;
        }
        i++;
    }

    auto j = currentLeague.getTeams().begin();
    while(j != currentLeague.getTeams().end())
    {
        if(myTeamName != j->get_name())
        {
            team temp = team(*j);
            //l.push_back(temp);
        }
        j++;
    }

    currentLeague.setMyTeam(*i);

    std::cout << currentLeague.getMyTeam().get_name() << std::endl;

    std::vector<team> t = currentLeague.getTeams();
    team mt = currentLeague.getMyTeam();
    std::vector<std::vector<team>> tm{
            {t[1], mt,
            t[2], t[7],
            t[3], t[6],
            t[4], t[5]},
           /* Round 2 */
           {t[7], t[1],
            t[6], mt,
            t[5], t[2],
            t[4], t[3]},
           /* Round 3 */
           {t[1], t[6],
            t[7], t[5],
            mt,   t[4],
            t[2], t[3]},
           /* Round 4 */
           {t[5], t[1],
            t[6], t[4],
            t[3], t[7],
            mt,   t[2]},
           /* Round 5 */
           {t[1], t[4],
            t[5], t[3],
            t[6], t[2],
            t[7], mt},
           /* Round 6 */
           {t[3], t[1],
            t[2], t[4],
            mt,   t[5],
            t[7], t[6]},
           /* Round 7 */
           {t[1], t[2],
            t[3], mt,
            t[4], t[7],
            t[5], t[6]}
       };
    currentLeague.setSchedule(tm);

    std::cout << currentLeague.getSchedule()[0].get_name() << std::endl;
}

/*
std::string LogIn::getName() const
{
    return m_name;
}

void LogIn::setName(std::string name)
{
    m_name = name;
}

std::string LogIn::getSurname() const
{
    return m_surname;
}

void LogIn::setSurname(std::string surname)
{
    m_surname = surname;
}

std::string LogIn::getNationality() const
{
    return m_nationality;
}

void LogIn::setNationality(std::string nationality)
{
    m_nationality = nationality;
}

std::string LogIn::getTeam() const
{
    return m_teamName;
}

void LogIn::setTeam(std::string team)
{
    m_teamName = team;
}


std::vector<team> LogIn::getTeams() const
{
    return m_teams;
}
*/

void LogIn::on_name_edit_editingFinished()
{
    /*QFile file("teams.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    std::vector<team> teams;
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
        std::string sAwayEff = data[4];
        QString qHomeEff = QString::fromStdString(sHomeEff);
        QString qAwayEff = QString::fromStdString(sAwayEff);
        double homeEff = qHomeEff.toDouble(); //std::cout << home_eff << std::endl;
        double awayEff = qAwayEff.toDouble(); //std::cout << away_eff << std::endl;

        team t = team(position, name, state, town, coach, homeEff, awayEff);
        teams.push_back(t);

        //QString qTeamName = QString::fromStdString(name);
        //qDebug() << qTeamName;
        //items += qTeamName; // adding team names to QStringLis
    }

    // Adding to combobox
    //items.sort();
    //ui->teams_combo->addItems(items);

    int j = 0;

    while(j < NO_OF_TEAMS) {

        std::string team_name = teams[j].get_name();
        std::cout << std::endl << std::endl << team_name << std::endl;
        teams[j++].addPlayers(team_name);
    }


    currentLeague.setTeams(teams);*/

//    auto i = currentLeague.getTeams().cbegin();
//    while(i != currentLeague.getTeams().cend())
//    {
//        std::cout<< i->get_name() << std::endl;
//        i++;
//    }


}
