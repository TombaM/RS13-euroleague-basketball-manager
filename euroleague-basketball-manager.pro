#-------------------------------------------------
#
# Project created by QtCreator 2017-05-15T19:41:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = euroleague-basketball-manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    coach_info_form.cpp \
    Coach.cpp \
    select_team_form.cpp \
    team.cpp \
    player.cpp \
    main_gui_form.cpp

HEADERS  += mainwindow.h \
    coach_info_form.h \
    Coach.h \
    select_team_form.h \
    team.h \
    player.h \
    coach_global.h \
    main_gui_form.h

FORMS    += mainwindow.ui \
    coach_info_form.ui \
    select_team_form.ui \
    main_gui_form.ui

DISTFILES +=
