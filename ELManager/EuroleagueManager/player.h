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
   // player(const player & p);
    player(int number, std::string &name, std::string &dateOfBirth, std::string &nationality, std::string &position,
            double height, int onePoint, int twoPoints, int threePoints, int assists, int dribble, int defence, int phyicality);

    int get_number() const;
    std::string get_name() const;
    std::string get_dateOfBirth() const;
    std::string get_nationality() const;
    std::string get_position() const;
 //   bool operator=(const player &p);
    double get_height() const;
    int get_onePointer() const;
    int get_twoPointer() const;
    int get_threePointer() const;
    int get_assists() const;
    int get_dribble() const;
    int get_defence() const;
    int get_physicality() const;
    int get_injury() const;
    void toString();
    int attackRating();
    int defenseRating();
    int overallRating();

private:
    int m_number;
    std::string m_name;
    std::string m_dateOfBirth;
    std::string m_nationality;
    std::string m_position;
    double m_height;
    int m_onePointer;
    int m_twoPointer;
    int m_threePointer;
    int m_assits;
    int m_dribble;
    int m_defence;
    int m_physicality;
    bool m_injury;
};

#endif // PLAYER.H
