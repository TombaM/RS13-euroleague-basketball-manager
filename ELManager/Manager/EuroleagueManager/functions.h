#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
#include "team.h"
#include "mainwindow.h"

std::string getResultOthers(team & homeTeam, team & awayTeam,int parameter);
bool homeVictory(team & homeTeam, team & awayTeam, int parameter);

#endif // FUNCTIONS_H
