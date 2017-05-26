#include "select_team_form.h"
#include "ui_select_team_form.h"
#include "coach_global.h"

#include <iostream>
#include <QListWidget>
#include <string>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

#define NO_OF_TEAMS 8

select_team_form::select_team_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::select_team_form)
{
    ui->setupUi(this);
}

select_team_form::~select_team_form()
{
    delete ui;
}

static bool is_separator(char c)
{
    return c == ':';
}

std::vector<std::string> parse(std::string & line)
{
    std::vector<std::string> res;

    auto i = line.begin();
    while(i != line.end()) {

        i = std::find_if_not(i, line.end(), is_separator);

       auto j = std::find_if(i, line.end(), is_separator);

        if(i != line.end())
              res.push_back(std::string(i, j));

        i = j;
    }

    return res;
}

void select_team_form::on_pushButton_2_clicked()
{
    QFile file("//home//slobodan//teams.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    std::vector<team> teams;
    //QListWidget teams_list;
    QStringList items;

    while(!in.atEnd()) {

        QString q_line = in.readLine();
        std::string line = q_line.toStdString();

        std::vector<std::string> data = parse(line);

        int position = std::stoi(data[0]); //std::cout << position << std::endl;
        std::string name = data[1]; //std::cout << name << std::endl;
        std::string state = data[2]; //std::cout << state << std::endl;
        std::string town = data[3]; //std::cout << town << std::endl;
        std::string coach = data[4]; //std::cout << coach << std::endl;
        std::string string_home_eff = data[5];
        std::string string_away_eff = data[4];
        QString q_home_eff = QString::fromStdString(string_home_eff);
        QString q_away_eff = QString::fromStdString(string_away_eff);
        double home_eff = q_home_eff.toDouble(); //std::cout << home_eff << std::endl;
        double away_eff = q_away_eff.toDouble(); //std::cout << away_eff << std::endl;

        team t = team(position, name, state, town, coach, home_eff, away_eff);
        teams.push_back(t);

        QString q_name = QString::fromStdString(name);

        items += q_name; // adding team names to QStringList
    }

    items.sort();
    ui->teams_list->addItems(items); // Adding all team names to QListWidget

    // Adding players into the teams.
    int j = 0;

    while(j < NO_OF_TEAMS) {

        std::string team_name = teams[j].get_name();
        std::cout << std::endl << std::endl << team_name << std::endl;
        teams[j++].add_players(team_name);
    }
}


void select_team_form::on_pushButton_clicked()
{
    const QString& q_selected_team = ui->teams_list->currentItem()->text();
    std::string selected_team = q_selected_team.toStdString();

    c.set_team(selected_team);

    std::cout << "COACH NAME: " << c.get_name() << std::endl;
    std::cout << "COACH SURNAME: " << c.get_surname() << std::endl;
    std::cout << "COACH NATIONALITY: " << c.get_nationality() << std::endl;
    std::cout << "SELECTED TEAM: " << c.get_team() << std::endl;

    main_form.show();
    this->hide();
}
