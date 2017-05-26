#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

class player
{
public:
    player(int number, std::string &name, std::string &date_of_birth, std::string &nationality, std::string &position,
            double height, int one_point, int two_points, int three_points, int assists, int dribble, int defence, int phyicality);

    int get_number();
    std::string get_name();
    std::string get_date_of_birth();
    std::string get_nationality();
    std::string get_position();
    double get_height();
    int get_one_pointer();
    int get_two_pointer();
    int get_three_pointer();
    int get_assists();
    int get_dribble();
    int get_defence();
    int get_physicality();
    int get_injury();
    void to_string();
    int attack_rating();
    int defense_rating();
    int overall_rating();

private:
    int m_number;
    std::string m_name;
    std::string m_date_of_birth;
    std::string m_nationality;
    std::string m_position;
    double m_height;
    int m_one_pointer;
    int m_two_pointer;
    int m_three_pointer;
    int m_assits;
    int m_dribble;
    int m_defence;
    int m_physicality;
    bool m_injury;
};

#endif // PLAYER_H
