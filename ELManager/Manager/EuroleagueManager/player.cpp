#include "player.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

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
    m_price=overallRating()*VALUE;
}


int player::get_number() const
{
  return m_number;
}

std::string player::get_name() const
{
  return m_name;
}

std::string player::get_dateOfBirth() const
{
  return m_dateOfBirth;
}

std::string player::get_nationality() const
{
  return m_nationality;
}

std::string player::get_position() const
{
  return m_position;
}

double player::get_height() const
{
  return m_height;
}

int player::get_onePointer() const
{
  return m_onePointer;
}

int player::get_twoPointer() const
{
  return m_twoPointer;
}

int player::get_threePointer() const
{
  return m_threePointer;
}

int player::get_assists() const
{
  return m_assits;
}

int player::get_dribble() const
{
  return m_dribble;
}

int player::get_defence() const
{
  return m_defence;
}

int player::get_physicality() const
{
  return m_physicality;
}

int player::get_injury() const
{
  return m_injury;
}

int player::get_price() const{
    return m_price;
}

int player::attackRating()
{
  return (get_assists() + get_dribble() + get_onePointer() + get_twoPointer() + get_threePointer()) / 5;
}

int player::defenseRating()
{
  return (get_defence() + get_physicality()) / 2;
}

int player::overallRating()
{
  return (attackRating() + defenseRating());
}


std::string player::toString()
{
  return std::to_string(get_number()) + " " + get_name() + " " + get_dateOfBirth() + " " + get_nationality() + " " +
  get_position() + " " + std::to_string(get_height()) + " " + std::to_string(get_onePointer()) + " " +
  std::to_string(get_twoPointer()) + " " + std::to_string(get_threePointer()) + " " + std::to_string(get_assists()) + " " +
  std::to_string(get_dribble()) + " " + std::to_string(get_defence()) + " " + std::to_string(get_defence()) + " " +
  std::to_string(get_physicality()) + " " + std::to_string(overallRating())+" "+std::to_string(m_price)
          +"$";
}
