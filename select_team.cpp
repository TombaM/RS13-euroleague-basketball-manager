#include "select_team.h"
#include "ui_select_team.h"
#include "team.h"

Select_team::Select_team(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Select_team)
{
    ui->setupUi(this);
}

Select_team::~Select_team()
{
    delete ui;
}

bool is_separator(char c)
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

void Select_team::on_pushButton_clicked()
{
    const QString& q_selected_team = ui->teams_list->currentItem()->text();
    std::string selected_team = q_selected_team.toStdString();

    c.set_team(selected_team);

    std::vector<Team> teams;

    std::ifstream in("teams.txt", std::ifstream::in);
    std::string line;

    while (std::getline(in, line)) {

        std::vector<std::string> data = parse(line);

        int position = std::stoi(data[0]);
        std::string name = data[1];
        std::string state = data[2];
        std::string town = data[3];
        std::string coach = data[4];
        double home_eff = std::stof(data[5]);
        double away_eff = std::stof(data[4]);

        Team t = Team(position, name, state, town, coach, home_eff, away_eff);
        teams.push_back(t);
    }


    int j = 0;

    while(j < 8) {

        std::cout << std::endl << std::endl << teams[j].get_name() << std::endl;
        teams[j++].addPlayers();
    }
}
