#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>
#include "player.h"

bool is_separator(char c)
{
    return c == ':';
}


std::vector<std::string> parse(std::string & line)
{
  std::vector<std::string> res;

  auto i = line.begin();
  while(i != line.end())
  {
    i = std::find_if_not(i, line.end(), is_separator);

    auto j = std::find_if(i, line.end(), is_separator);

    if(i != line.end())
      res.push_back(std::string(i, j));

    i = j;
  }
  return res;
}


class Team
{
public:
  Team(int position, std::string name, std::string state, std::string town, std::string coach,
       double homeEfficiency, double awayEfficiency)
  : m_position(position), m_name(name), m_state(state), m_town(town), m_coach(coach),
    m_homeEfficiency(homeEfficiency), m_awayEfficiency(awayEfficiency)
  {

  }
  // Getters
  int get_position()
  {
    return m_position;
  }

  std::string get_name()
  {
    return m_name;
  }

  std::string get_state()
  {
    return m_state;
  }

  std::string get_town()
  {
    return m_town;
  }

  std::string get_coach()
  {
    return m_coach;
  }


  double get_homeEfficiency()
  {
    return m_homeEfficiency;
  }

  double get_awayEfficiency()
  {
    return m_awayEfficiency;
  }

  void toString()
  {
    std::cout << std::to_string(get_position()) + " " + get_name() + " " + get_state() +
                 " " + get_town() + " " + get_coach() + " " + std::to_string(get_homeEfficiency()) + " " + std::to_string(get_awayEfficiency()) << std::endl;
  }

  void addPlayers()
  {
    std::ifstream in(m_name, std::ifstream::in);
    std::string line;

    while(std::getline(in, line))
    {
      std::vector<std::string> data = parse(line);

      int number = std::stoi(data[0]);
      std::string name = data[1];
      std::string dateOfBirth = data[2];
      std::string nationality = data[3];
      std::string position = data[4];
      double height = std::stof(data[5]);
      int onePointer = std::stoi(data[6]);
      int twoPointer = std::stoi(data[7]);
      int threePointer = std::stoi(data[8]);
      int assits = std::stoi(data[9]);
      int dribble = std::stoi(data[10]);
      int defence = std::stoi(data[11]);
      int physicality = std::stoi(data[12]);

      Player p = Player(number, name, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);
      m_players.push_back(p);
    }

    // Stampanje igraca
    auto i = m_players.begin();
    while(i != m_players.end())
    {
      (*i).toString();
      i++;
    }
  }

  std::vector<Player> get_players()
  {
    return m_players;
  }

private:
  int m_position;
  std::string m_name;
  std::string m_state;
  std::string m_town;
  std::string m_coach;
  double m_homeEfficiency;
  double m_awayEfficiency;
  std::vector<Player> m_players;
};

int main(int arch, char** argv)
{
  std::vector<Team> teams;

  std::ifstream in("teams.txt", std::ifstream::in);
  std::string line;

  while(std::getline(in, line))
  {
    std::vector<std::string> data = parse(line);

    int position = std::stoi(data[0]);
    std::string name = data[1];
    std::string state = data[2];
    std::string town = data[3];
    std::string coach = data[4];
    double homeEff = std::stof(data[5]);
    double awayEff = std::stof(data[6]);

    Team t = Team(position, name, state, town, coach, homeEff, awayEff);
    teams.push_back(t);
  }

  // Stampanje timova
  // auto i = teams.begin();
  // while(i != teams.end())
  // {
  //   (*i).toString();
  //   i++;
  // }

  int j = 0;
  while(j < 8)
  {
    std::cout << std::endl << std::endl << teams[j].get_name() << std::endl;
    teams[j++].addPlayers();
  }
  return 0;
}
