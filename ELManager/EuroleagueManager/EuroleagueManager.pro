#-------------------------------------------------
#
# Project created by QtCreator 2017-05-31T14:37:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EuroleagueManager
TEMPLATE = app


SOURCES += main.cpp\
    login.cpp \
    team.cpp \
    player.cpp \
    mainform.cpp \
    league.cpp

HEADERS  += \
    login.h \
    team.h \
    player.h \
    mainform.h \
    league.h \
    global_league.h

FORMS    += \
    login.ui \
    mainform.ui
