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
    player(int number, std::string &name, std::string &dateOfBirth, std::string &nationality, std::string &position,
            double height, int onePoint, int twoPoints, int threePoints, int assists, int dribble, int defence, int phyicality);

    /* Getters: */
    int getNumber() const;
    std::string getName() const;
    std::string getDateOfBirth() const;
    std::string getNationality() const;
    std::string getPosition() const;
    double getHeight() const;
    int getOnePointer() const;
    int getTwoPointer() const;
    int getThreePointer() const;
    int getAssists() const;
    int getDribble() const;
    int getDefence() const;
    int getPhysicality() const;
    int getInjury() const;
    int getPrice() const;
    int attackRating() const;
    int defenseRating() const;
    int overallRating() const;

    std::string toString();

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
    int m_price;
};

#endif // PLAYER.H
