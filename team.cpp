#include "team.h"

#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

team::team(int position, std::string name, std::string state, std::string town, std::string coach, double home_efficiency, double away_efficiency)
        : m_position(position), m_name(name), m_state(state), m_town(town), m_coach(coach), m_home_efficiency(home_efficiency), m_away_efficiency(away_efficiency)
    {

    }

bool team::is_players_separator(char c)
{
    return c == ':';
}

std::vector<std::string> team::players_parse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();
    while(i != line.end()) {

        i = std::find_if_not(i, line.end(), is_players_separator);

       auto j = std::find_if(i, line.end(), is_players_separator);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

std::vector<player> team::get_players()
{
  return m_players;
}

// Getters
int team::get_position()
    {
        return m_position;
    }

std::string team::get_name()
    {
        return m_name;
    }

std::string team::get_state()
    {
        return m_state;
    }

std::string team::get_town()
    {
        return m_town;
    }

std::string team::get_coach()
    {
        return m_coach;
    }

double team::get_home_efficiency()
    {
        return m_home_efficiency;
    }

double team::get_away_efficiency()
    {
        return m_away_efficiency;
    }

void team::to_string()
    {
        std::cout << std::to_string(get_position()) + " " + get_name() + " " + get_state() +
                 " " + get_town() + " " + get_coach() + " " + std::to_string(get_home_efficiency()) + " " + std::to_string(get_away_efficiency()) << std::endl;
    }

void team::add_players(const std::string &team_name)
{
    //QString q_name = QString::fromStdString(m_name);

    //int n = team_name.size();
    //std::cout << n << std::endl;
    //std::cout << "std::string: " << team_name << std::endl;
    //std::string t_name = team_name + ".txt";
    QString q_team_name = QString::fromStdString(team_name);
    //qDebug() << "QString: " << q_team_name;

    QFile file("//home//slobodan//"  + q_team_name); // NOTE: WHEN I PUT team_name IT DOESNT WORK!

    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {

        QString q_line = in.readLine();
        std::string line = q_line.toStdString(); // line as a string

        std::vector<std::string> data = players_parse(line);

        int number = std::stoi(data[0]);
        std::string name = data[1];
        std::string date_of_birth = data[2];
        std::string nationality = data[3];
        std::string position = data[4];
        double height = std::stof(data[5]);
        int one_pointer = std::stoi(data[6]);
        int two_pointer = std::stoi(data[7]);
        int three_pointer = std::stoi(data[8]);
        int assits = std::stoi(data[9]);
        int dribble = std::stoi(data[10]);
        int defence = std::stoi(data[11]);
        int physicality = std::stoi(data[12]);

        player p = player(number, name, date_of_birth, nationality, position, height, one_pointer, two_pointer, three_pointer, assits, dribble, defence, physicality);
        m_players.push_back(p);
    }

    // Stampanje igraca
    auto i = m_players.begin();
    while(i != m_players.end()) {

        (*i).to_string();
        i++;
    }
}
