#include "team.h"

#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

team::team()
{

}

team::team(const team &t){
    m_position=t.get_position();
    m_name=t.get_name();
    m_state=t.get_state();
    m_town=t.get_town();
    m_coach=t.get_coach();
    m_homeEfficiency=t.get_homeEfficiency();
    m_awayEfficiency=t.get_awayEfficiency();
    m_players=t.get_players();
}

team::team(int position, std::string name, std::string state, std::string town, std::string coach, double homeEfficiency, double awayEfficiency)
        : m_position(position), m_name(name), m_state(state), m_town(town), m_coach(coach), m_homeEfficiency(homeEfficiency), m_awayEfficiency(awayEfficiency)
    {

    }

bool team::is_players_separator(char c)
{
    return c == ':';
}

std::vector<std::string> team::playersParse(std::string & line)
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

bool team::operator =(const team & t){
    m_position=t.get_position();
    m_name=t.get_name();
    m_state=t.get_state();
    m_town=t.get_town();
    m_coach=t.get_coach();
    m_homeEfficiency=t.get_homeEfficiency();
    m_awayEfficiency=t.get_awayEfficiency();
    m_players=t.get_players();
}

std::vector<player> team::get_players() const
{
  return m_players;
}

int team::get_position() const
    {
        return m_position;
    }

std::string team::get_name() const
    {
        return m_name;
    }

std::string team::get_state() const
    {
        return m_state;
    }

std::string team::get_town() const
    {
        return m_town;
    }

std::string team::get_coach() const
    {
        return m_coach;
    }

double team::get_homeEfficiency() const
    {
        return m_homeEfficiency;
    }

double team::get_awayEfficiency() const
    {
        return m_awayEfficiency;
    }

void team::toString()
    {
        std::cout << std::to_string(get_position()) + " " + get_name() + " " + get_state() +
                 " " + get_town() + " " + get_coach() + " " + std::to_string(get_homeEfficiency()) + " " + std::to_string(get_awayEfficiency()) << std::endl;
    }

void team::addPlayers(const std::string &teamName)
{
    //QString q_name = QString::fromStdString(m_name);

    //int n = team_name.size();
    //std::cout << n << std::endl;
    //std::cout << "std::string: " << team_name << std::endl;
    //std::string t_name = team_name + ".txt";
    QString qTeamName = QString::fromStdString(teamName);
    //qDebug() << "QString: " << q_team_name;

    QFile file(qTeamName);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {

        QString qLine = in.readLine();
        std::string line = qLine.toStdString(); // line as a string

        std::vector<std::string> data = playersParse(line);

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

        player p = player(number, name, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);
        m_players.push_back(p);
    }

    // Stampanje igraca
    auto i = m_players.begin();
    while(i != m_players.end()) {

        (*i).toString();
        i++;
    }
}
