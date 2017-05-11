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

Player::Player(int number, std::string & name, std::string & dateOfBirth, std::string & nationality, std::string & position,
       double height, int oneP, int twoP, int threeP, int assists, int dribble, int defence, int phyicality)
: m_number(number), m_name(name), m_nationality(nationality), m_position(position), m_height(height), m_onePointer(oneP),
  m_twoPointer(twoP), m_threePointer(threeP), m_assits(assists), m_dribble(dribble), m_defence(defence), m_physicality(phyicality),
  m_injury(false)
{

}

int Player::get_number()
{
  return m_number;
}

std::string Player::get_name()
{
  return m_name;
}

std::string Player::get_dateOfBirth()
{
  return m_dateOfBirth;
}

std::string Player::get_nationality()
{
  return m_nationality;
}

std::string Player::get_position()
{
  return m_position;
}

double Player::get_height()
{
  return m_height;
}

int Player::get_onePointer()
{
  return m_onePointer;
}

int Player::get_twoPointer()
{
  return m_twoPointer;
}

int Player::get_threePointer()
{
  return m_threePointer;
}

int Player::get_assists()
{
  return m_assits;
}

int Player::get_dribble()
{
  return m_dribble;
}

int Player::get_defence()
{
  return m_defence;
}

int Player::get_physicality()
{
  return m_physicality;
}

int Player::get_injury()
{
  return m_injury;
}

int Player::attack_rating()
{
  /*if(!get_position().compare("Guard")) {
    return (get_assists() * HIGH_PRIORITY + get_dribble() * HIGH_PRIORITY
      + get_onePointer() * HIGH_PRIORITY + get_twoPointer() * HIGH_PRIORITY
      + get_threePointer() * HIGH_PRIORITY + get_physicality() * LOW_PRIORITY)/NUM;
  }
  else if(!get_position().compare("Forward")){
       return (get_assists() * MIDDLE_PRIORITY + get_dribble() * MIDDLE_PRIORITY
         +get_onePointer() * HIGH_PRIORITY + get_twoPointer() * HIGH_PRIORITY
         + get_threePointer() * HIGH_PRIORITY + get_physicality() * MIDDLE_PRIORITY)/NUM;
   }
   // Center:
   return (get_assists() * LOW_PRIORITY + get_dribble() * LOW_PRIORITY
     + get_onePointer() * HIGH_PRIORITY + get_twoPointer() * HIGH_PRIORITY
     + get_threePointer() * LOW_PRIORITY + get_physicality() * HIGH_PRIORITY)/NUM;
     */
  return (get_assists() + get_dribble() + get_onePointer() + get_twoPointer() + get_threePointer()) / 5;
}

int Player::defense_rating()
{
  return (get_defence() + get_physicality()) / 2;
}

int Player::overall_rating()
{
  return (attack_rating() + defense_rating());
}

void Player::toString()
{
  std::cout << std::to_string(get_number()) + " " + get_name() + " " + get_dateOfBirth() + " " + get_nationality() + " " +
  get_position() + " " + std::to_string(get_height()) + " " + std::to_string(get_onePointer()) + " " +
  std::to_string(get_twoPointer()) + " " + std::to_string(get_threePointer()) + " " + std::to_string(get_assists()) + " " +
  std::to_string(get_dribble()) + " " + std::to_string(get_defence()) + " " + std::to_string(get_defence()) + " " +
  std::to_string(get_physicality()) + " " + std::to_string(overall_rating()) << std::endl;
}
