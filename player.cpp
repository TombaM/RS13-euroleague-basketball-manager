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

player::player(int number, std::string &name, std::string &date_of_birth, std::string &nationality, std::string &position,
            double height, int one_point, int two_points, int three_points, int assists, int dribble, int defence, int phyicality)
        : m_number(number), m_name(name), m_nationality(nationality), m_position(position), m_height(height), m_one_pointer(one_point),
        m_two_pointer(two_points), m_three_pointer(three_points), m_assits(assists), m_dribble(dribble), m_defence(defence), m_physicality(phyicality),
        m_injury(false)
{

}

int player::get_number()
{
  return m_number;
}

std::string player::get_name()
{
  return m_name;
}

std::string player::get_date_of_birth()
{
  return m_date_of_birth;
}

std::string player::get_nationality()
{
  return m_nationality;
}

std::string player::get_position()
{
  return m_position;
}

double player::get_height()
{
  return m_height;
}

int player::get_one_pointer()
{
  return m_one_pointer;
}

int player::get_two_pointer()
{
  return m_two_pointer;
}

int player::get_three_pointer()
{
  return m_three_pointer;
}

int player::get_assists()
{
  return m_assits;
}

int player::get_dribble()
{
  return m_dribble;
}

int player::get_defence()
{
  return m_defence;
}

int player::get_physicality()
{
  return m_physicality;
}

int player::get_injury()
{
  return m_injury;
}

int player::attack_rating()
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
  return (get_assists() + get_dribble() + get_one_pointer() + get_two_pointer() + get_three_pointer()) / 5;
}

int player::defense_rating()
{
  return (get_defence() + get_physicality()) / 2;
}

int player::overall_rating()
{
  return (attack_rating() + defense_rating());
}

void player::to_string()
{
  std::cout << std::to_string(get_number()) + " " + get_name() + " " + get_date_of_birth() + " " + get_nationality() + " " +
  get_position() + " " + std::to_string(get_height()) + " " + std::to_string(get_one_pointer()) + " " +
  std::to_string(get_two_pointer()) + " " + std::to_string(get_three_pointer()) + " " + std::to_string(get_assists()) + " " +
  std::to_string(get_dribble()) + " " + std::to_string(get_defence()) + " " + std::to_string(get_defence()) + " " +
  std::to_string(get_physicality()) + " " + std::to_string(overall_rating()) << std::endl;
}
