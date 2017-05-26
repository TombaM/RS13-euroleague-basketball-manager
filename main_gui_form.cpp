#include "main_gui_form.h"
#include "ui_main_gui_form.h"
#include "coach_global.h"
#include "player.h"

#include <QDebug>

#define MAX_NUMBER_OF_ELEMS_IN_LIST 4

main_gui_form::main_gui_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_gui_form)
{
    ui->setupUi(this);
    this->setWindowTitle("anything");
}

main_gui_form::~main_gui_form()
{
    delete ui;
}

void main_gui_form::on_main_gui_form_windowTitleChanged(const QString &title)
{
    this->setWindowTitle("anything");
    ui->team_info->hide();

    QString coach_name = QString::fromStdString(c.get_name());
    QString coach_surname = QString::fromStdString(c.get_surname());
    QString coach_nationality = QString::fromStdString(c.get_nationality());
    QString coach_team = QString::fromStdString(c.get_team());

    qDebug() << coach_name << "\n" << coach_surname << coach_nationality << coach_team;

    QStringList items;
    items += coach_name;
    items += coach_surname;
    items += coach_nationality;
    items += coach_team;
    int current_number_of_elems = 4;

    if(current_number_of_elems <= MAX_NUMBER_OF_ELEMS_IN_LIST)
        ui->info_list->addItems(items); //EVERY TIME I CLICK HOME BUTTON IT ADDS ALL ITEMS!!!!
}

void main_gui_form::on_team_button_clicked()
{
    ui->team_info->show();
    ui->info_list->hide();
    ui->calendar_widget->hide();

    /*
    std::string my_team_name = c.get_team();
    team t(); //WE NEED TO MAKE A COPY CONSTRUCTOR AND A DEFFAULT CONSTRUCTOR>

    int teams_size = teams.size();
    for (int i = 0; i < teams_size; i++) {
        if (my_team_name == teams[i].get_name())
            t = teams[i]; // NOTE: COPY CONSTRUCTOR NEEDED!
    }

    std::vector<player> players = t.get_players();
    int players_size = players.size();

    QStringList items;

    for (int i = 0; i < players_size; i++) {
        QString q_name = QString::fromStdString(players[i].get_name());
        items += q_name;
    }

    ui->team_info->addItems(items);
    */
    ui->info_list->clear();
}

void main_gui_form::on_home_button_clicked()
{
    ui->info_list->show();
    ui->calendar_widget->show();
    ui->team_info->hide();

    QString coach_name = "NAME: " + QString::fromStdString(c.get_name());
    QString coach_surname = "SURNAME: " + QString::fromStdString(c.get_surname());
    QString coach_nationality = "NATIONALITY: " + QString::fromStdString(c.get_nationality());
    QString coach_team = "TEAM: " + QString::fromStdString(c.get_team());

    qDebug() << coach_name << "\n" << coach_surname << coach_nationality << coach_team;

    QStringList items;
    items += coach_name;
    items += coach_surname;
    items += coach_nationality;
    items += coach_team;
    int current_number_of_elems = 4;

    if(current_number_of_elems <= MAX_NUMBER_OF_ELEMS_IN_LIST)
        ui->info_list->addItems(items); //EVERY TIME I CLICK HOME BUTTON IT ADDS ALL ITEMS!!!!
}
