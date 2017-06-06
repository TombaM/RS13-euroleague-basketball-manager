#-------------------------------------------------
#
# Project created by QtCreator 2017-06-02T17:01:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EuroleagueManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    team.cpp \
    player.cpp \
    league.cpp \
    functions.cpp

HEADERS  += mainwindow.h \
    team.h \
    player.h \
    league.h \
    functions.h

FORMS    += mainwindow.ui
