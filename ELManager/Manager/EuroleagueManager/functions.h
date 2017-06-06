#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "team.h"

bool isSeparator(char c);
bool isSeparatorSpace(char c);
std::vector<std::string> parse(std::string &line);
std::vector<std::string> transferMarketParse(std::string & line);
std::vector<std::string> playersParse(std::string &line);
player makePlayerFromString(std::vector<std::string> data);
player makePlayerFromString2(std::vector<std::string> data);

#endif // FUNCTIONS_H
