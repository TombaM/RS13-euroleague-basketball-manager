#include "mainwindow.h"
#include "login.h"
#include "league.h"
#include <QApplication>
#include <iostream>
#include <algorithm>

//league myLeague = league();

QString settingStyle = " QGroupBox#groupBoxSettings {\
        background-color: rgb(0,0,0);\
        border: 1px solid rgb(170, 170, 255);\
        border-radius: 3px;\
        border-color:rgb(170, 170, 255);\
}";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogIn logIn;
    logIn.setStyleSheet(settingStyle);
    logIn.show();

    //std::cout << logIn.getTeam();

    //std::string myTeamName = logIn.getTeam();
    //std::vector<team> t = logIn.getTeams();

   // auto i = std::find_if(t.begin(), t.end(),
     //                     [myTeamName](team t){return myTeamName.compare(t.get_name());});

    //std::cout <<logIn.getName() << logIn.getSurname() << logIn.getNationality() << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
    a.exec();
    /*
    auto i = t.begin();
    while (i != t.end())
    {
        if(logIn.getTeam().compare(i->get_name()))
            break;
        std::cout << i->get_name() << std::endl;
        i++;
    }
    if (t.size() == 0)
    {
        std::cout << "SIZE 0" << std::endl;
    }
    if(i == t.end())
    {
        std::cout << "jeste" << std::endl;
    }
    team mineTeam = *i;
    std::cout << mineTeam.get_name();
    if(logIn.getTeams().size() == 0)
    {
        std::cout << "SIZE 0" << std::endl;
    }
    league mainLeague = league(logIn.getTeams());
//    auto i = logIn.getTeams().begin();
//    while (i != logIn.getTeams().end())
//    {
//        std::cout << i->get_name() << std::endl;
//        i++;
//    }
*/

    return 0;
}
