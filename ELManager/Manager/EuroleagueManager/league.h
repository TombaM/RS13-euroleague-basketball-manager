#ifndef LEAGUE_H
#define LEAGUE_H

#include "team.h"
#include <vector>
#include "player.h"

class league
{
public:
    league();
    league(std::vector<team> teams, team myTeam);

    void setTeams(std::vector<team> t);
    std::vector<team> getTeams()const;

    void setMyTeam(team myTeam);
    team getMyTeam();

    std::vector<player> getTransferMarket();
    void setTransferMarket();

    void set_schedule(std::vector<std::vector<team>> t);
    std::vector<std::vector<team>> get_schedule()const;


    unsigned int getRound() const;

    std::vector<team> getNextRound();

private:
    std::vector<team> m_teams;
    team m_myTeam;
    std::vector<player> m_transferMarket;
    std::vector<std::vector<team>> m_schedule;
    unsigned int m_round;
};

#endif // LEAGUE_H
