#include "functions.h"

bool isSeparator(char c)
{
    return c == ':';
}

bool isSeparatorSpace(char c)
{
    return c == ' ';
}


std::vector<std::string> parse(std::string &line)
{
    std::vector<std::string> res;

    auto i = line.begin();

    while (i != line.end()) {

        i = std::find_if_not(i, line.end(), isSeparator);
        auto j = std::find_if(i, line.end(), isSeparator);

        if (i != line.end())
            res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

std::vector<std::string> transferMarketParse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();

    while (i != line.end()) {

        i = std::find_if_not(i, line.end(), isSeparatorSpace);

       auto j = std::find_if(i, line.end(), isSeparatorSpace);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

std::vector<std::string> playersParse(std::string &line)
{
    std::vector<std::string> res;

    auto i = line.begin();

    while (i != line.end()) {

        i = std::find_if_not(i, line.end(), isSeparator);

        auto j = std::find_if(i, line.end(), isSeparator);

        if (i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}
player makePlayerFromString(std::vector<std::string> data)
{
    int number = std::stoi(data[0]);
    std::string name = data[1];
    std::string surname = data[2];
    int assits = std::stoi(data[10]);
    int dribble = std::stoi(data[11]);
    int defence = std::stoi(data[12]);
    int physicality = std::stoi(data[13]);
    std::string dateOfBirth = data[3];
    std::string nationality = data[4];
    std::string position = data[5];
    double height = std::stof(data[6]);
    int onePointer = std::stoi(data[7]);
    int twoPointer = std::stoi(data[8]);
    int threePointer = std::stoi(data[9]);
    std::string fullname = name +" "+surname;

    player p = player(number, fullname, dateOfBirth, nationality, position, height, onePointer, twoPointer, threePointer, assits, dribble, defence, physicality);

    return p;
}

player makePlayerFromString2(std::vector<std::string> data)
{
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
    return p;
}
