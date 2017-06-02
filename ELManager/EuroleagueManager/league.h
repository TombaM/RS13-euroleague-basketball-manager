#ifndef LEAGUE_H
#define LEAGUE_H
#include "team.h"

class league
{
public:
    league();

    void setTeams(std::vector<team> t);
    std::vector<team> getTeams() const;
    void setRound(int round);
    int getRound() const;
    void setMyTeam(team myTeam);
    team getMyTeam() const;
    void setSchedule(const std::vector<std::vector<team> > &schedule);
    std::vector<team> getSchedule();


private:
    std::vector<team> m_teams;
    team m_myTeam;
    int m_round;
    std::vector<std::vector<team>> m_schedule;
};

#endif // LEAGUE_H
