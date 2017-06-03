#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include <iostream>
#include "player.h"


class team
{
public:
    team ();
    team (const team & t);
    team(int position, std::string name, std::string state, std::string town, std::string coach,
       double homeEfficiency, double awayEfficiency);

    // Getters
    int get_position() const;
    std::string get_name() const;
    std::string get_state() const;
    std::string get_town() const;
    std::string get_coach() const;
    double get_homeEfficiency() const;
    double get_awayEfficiency() const;
    // int get_cur_budget()const;

    // Setters
    void set_coach(const std::string &coachName);

    void toString();
    void addPlayers(const std::string &team_name);
    std::vector<player> get_players() const;
    static bool is_players_separator(char c);
    std::vector<std::string> playersParse(std::string & line);
    team & operator =(const team &t);
    //int m_max_budget;

private:
    int m_position;
    std::string m_name;
    std::string m_state;
    std::string m_town;
    std::string m_coach;
    double m_homeEfficiency;
    double m_awayEfficiency;
    std::vector<player> m_players;
  //  int m_cur_budget;


};

#endif // TEAM_H
