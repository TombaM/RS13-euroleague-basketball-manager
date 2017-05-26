#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include <iostream>
#include "player.h"

class team
{
public:
    team(int position, std::string name, std::string state, std::string town, std::string coach,
       double home_efficiency, double away_efficiency);

    // Getters
    int get_position();
    std::string get_name();
    std::string get_state();
    std::string get_town();
    std::string get_coach();
    double get_home_efficiency();
    double get_away_efficiency();

    void to_string();
    void add_players(const std::string &team_name);
    std::vector<player> get_players();
    static bool is_players_separator(char c);
    std::vector<std::string> players_parse(std::string & line);

private:
    int m_position;
    std::string m_name;
    std::string m_state;
    std::string m_town;
    std::string m_coach;
    double m_home_efficiency;
    double m_away_efficiency;
    std::vector<player> m_players;
};

#endif // TEAM_H
