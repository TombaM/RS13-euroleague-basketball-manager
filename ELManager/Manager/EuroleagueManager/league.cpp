#include "league.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QIODevice>

league::league()
    :m_round(0)
{
    scheduleCounter = 0;
}

league::league(std::vector<team> teams, team myTeam)
    :m_teams(teams), m_myTeam(myTeam), m_round(0)
{

}

void league::setTeams(std::vector<team> t)
{
    m_teams = t;
}

std::vector<team> league::getTeams()const
{
    return m_teams;
}

void league::setMyTeam(team myTeam)
{
    m_myTeam = myTeam;
}

team league::getMyTeam()
{
    return m_myTeam;
}

void league::setSchedule(std::vector<std::vector<team>> t)
{
    m_schedule=t;
}

void league::setCurrentRound(int t)
{
    m_round=t;
}

std::vector<std::vector<team>> league::getSchedule()const
{
    return m_schedule;
}

unsigned int league::getRound() const
{
    return m_round;
}

std::vector<team> league::getNextRound()
{
    std::vector<team> nextRound = m_schedule[m_round];

    if(m_round < 14)
        m_round++;

    // if m_round == 6 ====> END GAME

    return nextRound;
}
 std::vector<team> league::getCurrentRound()
 {
     return m_schedule[m_round];
 }

 std::vector<team> league::getKRound(int k)
 {
     return m_schedule[k];
 }
