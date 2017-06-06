#include "functions.h"


bool homeVictory(team & homeTeam, team & awayTeam, int parameter)
{
    int sumHomePlayers = 0;
    int sumAwayPlayers = 0;
    std::vector<player> homePlayers = homeTeam.getPlayers();
    std::vector<player> awayPlayers = awayTeam.getPlayers();

    int length = homePlayers.size();

    for (int i = 0; i < length; i++) {

        sumHomePlayers += homePlayers[i].overallRating();
        sumAwayPlayers += awayPlayers[i].overallRating();
    }

    sumHomePlayers = sumHomePlayers * homeTeam.getHomeEfficiency();
    sumAwayPlayers = sumAwayPlayers * awayTeam.getAwayEfficiency();

    int overallSum = sumAwayPlayers + sumHomePlayers;

    srand(time(NULL) * parameter);

    int random = rand() % (overallSum + 1);

    return sumHomePlayers >= random;
}

std::string getResultOthers(team & homeTeam, team & awayTeam,int parameter)
{
    bool homeWin = homeVictory(homeTeam, awayTeam, parameter);

    if (homeWin) {

        standings[homeTeam.getName()] += 2;
        standings[awayTeam.getName()] += 1;
    } else {

        standings[homeTeam.getName()] += 1;
        standings[awayTeam.getName()] += 2;
    }

    int homePoints;
    int awayPoints;

    srand(time(NULL) * parameter);

    if (homeWin) {

        homePoints = rand( )%40 + 60;
        awayPoints = homePoints - rand() % 15-1;
    } else {

        awayPoints = rand()%40 + 60;
        homePoints = awayPoints - rand() % 15-1;
    }

    return std::to_string(homePoints)+ " : " + std::to_string(awayPoints);
}
