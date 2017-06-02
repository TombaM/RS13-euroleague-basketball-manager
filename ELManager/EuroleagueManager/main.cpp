#include "mainwindow.h"
#include "login.h"
#include "league.h"
#include <QApplication>
#include <iostream>
#include <algorithm>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>


//league myLeague = league();
std::vector<player> t;
QString settingStyle = " QGroupBox#groupBoxSettings {\
        background-color: rgb(0,0,0);\
        border: 1px solid rgb(170, 170, 255);\
        border-radius: 3px;\
        border-color:rgb(170, 170, 255);\
}";

//bool is_1separator(char c)
//{
//    return c == ':';
//}

//std::vector<std::string> players1Parse(std::string & line)
//{
//    std::vector<std::string> res;

//    auto i = line.begin();
//    while(i != line.end()) {

//        i = std::find_if_not(i, line.end(), is_1separator);

//       auto j = std::find_if(i, line.end(), is_1separator);

//        if(i != line.end())
//              res.push_back(std::string(i, j));

//        i = j;
//    }

//    return res;
//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogIn logIn;
    logIn.setStyleSheet(settingStyle);
    logIn.show();

    a.exec();

    return 0;
}
