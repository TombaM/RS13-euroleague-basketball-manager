#include "league.h"

league::league()
   // :m_myTeam(1, "", "", "", "", 1, 1), m_schedule({})
{
}

void league::setTeams(std::vector<team> t)
{
    m_teams = t;
}

std::vector<team> league::getTeams() const
{
    return m_teams;
}

void league::setRound(int round)
{
    m_round = round;
}

int league::getRound() const
{
    return m_round;
}

void league::setMyTeam(team myTeam)
{
    m_myTeam = myTeam;
}

team league::getMyTeam() const
{
    return m_myTeam;
}

void league::setSchedule(const std::vector<std::vector<team>> & schedule)
{
    m_schedule = schedule;
}

std::vector<team> league::getSchedule()
{
    int k = getRound();
    std::vector<team> result = m_schedule[k];

    setRound(k+1);
    return result;
}

