#include "player.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

#define HIGH_PRIORITY 20
#define MIDDLE_PRIORITY 10
#define LOW_PRIORITY 5
#define NUM 6
#define PARAMETER 2.7
#define VALUE 500

player::player(int number, std::string &name, std::string &dateOfBirth, std::string &nationality, std::string &position,
            double height, int onePoint, int twoPoints, int threePoints, int assists, int dribble, int defence, int phyicality)
        : m_number(number), m_name(name), m_dateOfBirth(dateOfBirth),m_nationality(nationality), m_position(position), m_height(height), m_onePointer(onePoint),
        m_twoPointer(twoPoints), m_threePointer(threePoints), m_assits(assists), m_dribble(dribble), m_defence(defence), m_physicality(phyicality),
        m_injury(false)
{
    m_price = overallRating()*VALUE;
}

int player::getNumber() const
{
    return m_number;
}

std::string player::getName() const
{
    return m_name;
}

std::string player::getDateOfBirth() const
{
    return m_dateOfBirth;
}

std::string player::getNationality() const
{
    return m_nationality;
}

std::string player::getPosition() const
{
    return m_position;
}

double player::getHeight() const
{
    return m_height;
}

int player::getOnePointer() const
{
    return m_onePointer;
}

int player::getTwoPointer() const
{
    return m_twoPointer;
}

int player::getThreePointer() const
{
    return m_threePointer;
}

int player::getAssists() const
{
    return m_assits;
}

int player::getDribble() const
{
    return m_dribble;
}

int player::getDefence() const
{
    return m_defence;
}

int player::getPhysicality() const
{
    return m_physicality;
}

int player::getInjury() const
{
    return m_injury;
}

int player::getPrice() const
{
    return m_price;
}

int player::attackRating() const
{
    return (getAssists() + getDribble() + getOnePointer() + getTwoPointer() + getThreePointer()) / 5;
}

int player::defenseRating() const
{
    return (getDefence() + getPhysicality()) / 2;
}

int player::overallRating() const
{
    return (attackRating() + defenseRating());
}


std::string player::toString()
{
  return std::to_string(getNumber()) + " " + getName() + "   " + getDateOfBirth() + "   " + getNationality() + " " +
  getPosition() + "   " + std::to_string(getHeight()) + "   " + std::to_string(getOnePointer()) + " " +
  std::to_string(getTwoPointer()) + " " + std::to_string(getThreePointer()) + " " + std::to_string(getAssists()) + " " +
  std::to_string(getDribble()) + " " + std::to_string(getDefence()) + " " + std::to_string(getDefence()) + " " +
  std::to_string(getPhysicality()) + "   " + "RATING: " + std::to_string(overallRating()) + "   " + "PRICE: " + std::to_string(m_price)+"$";

  /*
  return std::to_string(get_number()) + " "
         + get_name() + "   "
         + get_dateOfBirth() + "   "
         + get_nationality() + "   "
         + get_position() + "   "
         + "HEIGHT: " + std::to_string(get_height()) + " "
         + "RATING: " + std::to_string(overallRating()) + "   "
         + "PRICE: " + std::to_string(m_price) + "$"; */
}
