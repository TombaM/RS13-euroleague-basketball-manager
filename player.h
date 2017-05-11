#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

class Player
{
public:
  Player(int number, std::string & name, std::string & dateOfBirth, std::string & nationality, std::string & position,
         double height, int oneP, int twoP, int threeP, int assists, int dribble, int defence, int phyicality);

  int get_number();
  std::string get_name();
  std::string get_dateOfBirth();
  std::string get_nationality();
  std::string get_position();
  double get_height();
  int get_onePointer();
  int get_twoPointer();
  int get_threePointer();
  int get_assists();
  int get_dribble();
  int get_defence();
  int get_physicality();
  int get_injury();
  void toString();
  int attack_rating();
  int defense_rating();
  int overall_rating();

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

#endif // PLAYER_H
