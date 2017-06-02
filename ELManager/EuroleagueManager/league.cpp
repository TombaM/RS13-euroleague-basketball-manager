#include "league.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <algorithm>

bool is_market_separator(char c)
{
    return c == ':';
}

std::vector<std::string> playersMarketParse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();
    while(i != line.end()) {

        i = std::find_if_not(i, line.end(), is_market_separator);

       auto j = std::find_if(i, line.end(), is_market_separator);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

league::league()
    :m_myTeam(1, "", "", "", "", 1, 1), m_schedule({})
{
}

void league::setTeams(std::vector<team> t)
{
    m_teams = t;
}

std::vector<team> league::getTeams() const
{
    return m_teams;
}

void league::setRound(int round)
{
    m_round = round;
}

int league::getRound() const
{
    return m_round;
}

void league::setMyTeam(team myTeam)
{
    m_myTeam = myTeam;
}

team league::getMyTeam() const
{
    return m_myTeam;
}

void league::setSchedule(const std::vector<std::vector<team>> & schedule)
{
    m_schedule = schedule;
}

std::vector<team> league::getSchedule()
{
    int k = getRound();
    std::vector<team> result = m_schedule[k];

    setRound(k+1);
    return result;
}

void league::setTransferMarket()
{
    QFile file("transferMarket.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {

        QString qLine = in.readLine();
        std::string line = qLine.toStdString(); // line as a string

        std::vector<std::string> data = playersMarketParse(line);

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
        //p.toString();
        m_transferMarket.push_back(p);
    }

    // Stampanje igraca
//    auto i = m_transferMarket.begin();
//    while(i != m_transferMarket.end()) {

//        (*i).toString();
//        i++;
//    }
}

std::vector<player> league::getTransferMarket()
{
    return m_transferMarket;
}

