#ifndef LEAGUE_H
#define LEAGUE_H

#include "team.h"
#include "player.h"

#include <vector>

class league
{
public:
    league();
    league(std::vector<team> teams, team myTeam);

    /* Setters: */
    void setTeams(std::vector<team> t);
    void setMyTeam(team myTeam);
    void setSchedule(std::vector<std::vector<team>> t);
    void setCurrentRound(int t);

    /* Getters: */
    std::vector<team> getTeams()const;
    team getMyTeam();
    std::vector<std::vector<team>> getSchedule()const;
    unsigned int getRound() const;
    std::vector<team> getNextRound();
    std::vector<team> getCurrentRound();
    std::vector<team> getKRound(int k);

    unsigned int scheduleCounter;

private:
    std::vector<team> m_teams;
    team m_myTeam;
    std::vector<std::vector<team>> m_schedule;
    unsigned int m_round;
};

#endif // LEAGUE_H
