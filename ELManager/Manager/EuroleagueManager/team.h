#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include <iostream>
#include "player.h"


class team
{
public:
    team();
    team(const team &t);
    team(int position, std::string name, std::string state, std::string town, std::string coach, double homeEfficiency, double awayEfficiency);

    /* Getters: */
    int getPosition() const;
    std::string getName() const;
    std::string getState() const;
    std::string getTown() const;
    std::string getCoach() const;
    double getHomeEfficiency() const;
    double getAwayEfficiency() const;
    int getCurrentBudget() const;
    std::vector<player> getPlayers() const;
    int getMaxBudget() const;
    std::vector<player> getStartingFive() const;

    /* Setters: */
    void setCoach(const std::string &coachName);
    void setPlayers(const std::vector<player> p);
    void setStartingFive(std::vector<player> p);

    void addPlayers(const std::string &team_name);
    static bool isPlayersSeparator(char c);
    std::vector<std::string> playersParse(std::string &line);
    team &operator = (const team &t);

    int buyPlayer(player &p);
    std::vector<player> sellPlayer(std::string name);





private:
    int m_position;
    std::string m_name;
    std::string m_state;
    std::string m_town;
    std::string m_coach;
    double m_homeEfficiency;
    double m_awayEfficiency;
    std::vector<player> m_players;
    std::vector<player> m_startingFive;
    int m_maxBudget;
};

#endif // TEAM_H
