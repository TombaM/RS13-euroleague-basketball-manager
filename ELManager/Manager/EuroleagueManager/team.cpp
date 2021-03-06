#include "team.h"

#include <iostream>

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include "functions.h"

#define VALUE 500

team::team()
{

}

bool comparePlayer(const player &p1,const  player &p2)
{
    return p1.overallRating() > p2.overallRating();
}

team::team(const team &t)
{
    m_position = t.getPosition();
    m_name = t.getName();
    m_state = t.getState();
    m_town = t.getTown();
    m_coach = t.getCoach();
    m_homeEfficiency = t.getHomeEfficiency();
    m_awayEfficiency = t.getAwayEfficiency();
    m_players = t.getPlayers();
    m_maxBudget=t.m_maxBudget;
    m_startingFive=t.getStartingFive();
}

team::team(int position, std::string name, std::string state, std::string town, std::string coach, double homeEfficiency, double awayEfficiency)
        : m_position(position), m_name(name), m_state(state), m_town(town), m_coach(coach),
          m_homeEfficiency(homeEfficiency), m_awayEfficiency(awayEfficiency),m_maxBudget(0)
    {

    }

team &team::operator = (const team &t)
{
    m_position = t.getPosition();
    m_name = t.getName();
    m_state = t.getState();
    m_town = t.getTown();
    m_coach = t.getCoach();
    m_homeEfficiency = t.getHomeEfficiency();
    m_awayEfficiency = t.getAwayEfficiency();
    m_players = t.getPlayers();
    m_maxBudget = t.m_maxBudget;
    m_startingFive=t.getStartingFive();

    return *this;
}

std::vector<player> team::getPlayers() const
{
  return m_players;
}

int team::getPosition() const
{
    return m_position;
}

std::string team::getName() const
{
    return m_name;
}

std::string team::getState() const
{
    return m_state;
}

std::string team::getTown() const
{
    return m_town;
}

std::string team::getCoach() const
{
    return m_coach;
}

double team::getHomeEfficiency() const
{
    return m_homeEfficiency;
}

double team::getAwayEfficiency() const
{
    return m_awayEfficiency;
}

int team::getMaxBudget() const
{
    return m_maxBudget;
}

std::vector<player> team::getStartingFive() const
{
    return m_startingFive;
}


void team::setStartingFive(std::vector<player> p)
{
    m_startingFive=p;
}

void team::addPlayers(const std::string &teamName)
{
    m_maxBudget=0;

    QString qTeamName = QString::fromStdString(teamName);
    QFile file(qTeamName);

    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "error", file.errorString());

    QTextStream in(&file);

    while (!in.atEnd()) {

        QString qLine = in.readLine();
        std::string line = qLine.toStdString(); // line as a string

        std::vector<std::string> data = playersParse(line);


        player p = makePlayerFromString2(data);
        m_maxBudget+=p.getPrice();

        m_players.push_back(p);
    }

    std::vector<player> tmp=m_players;
    std::sort(tmp.begin(),tmp.end(),comparePlayer);
    for (int i=0;i<5;i++)
        m_startingFive.push_back(tmp[i]);

    m_maxBudget+=m_maxBudget*5/100;
}

void team::setPlayers(const std::vector<player> p)
{
    m_players=p;
}

int team::getCurrentBudget() const
{
    int currB = 0;

    int n = m_players.size();

    for (int i = 0; i < n; i++)
        currB += m_players[i].getPrice();

    return currB;
}

void team::setHomeEfficiency(double x){
    m_homeEfficiency=x;
}

void team::setAwayEfficiency(double x)
{
    m_awayEfficiency=x;
}

int team::buyPlayer(player &p)
{
    int newBudget = getCurrentBudget() + p.getPrice();
    if (newBudget <= m_maxBudget) {

        m_players.push_back(p);
        return 1;
    } else
        return 0;
}


std::vector<player> team::sellPlayer(std::string name)
{
    std::vector<player> p = getPlayers();
    std::vector<player> q;
    for (unsigned int i = 0; i < p.size(); i++) {

        if (name != p[i].getName())
            q.push_back(p[i]);
    }

    return q;
}
