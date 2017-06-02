#include "mainform.h"
#include "ui_mainform.h"
#include "login.h"
#include "global_league.h"
#include "player.h"


MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    currentLeague.setRound(8);

}

void MainForm::on_myTeamButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    std::cout << currentLeague.getRound() << std::endl;

}

void MainForm::on_standingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainForm::on_scheduleButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainForm::on_transferMarketButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    std::vector<player> players = currentLeague.getTransferMarket();

    auto i = players.begin();
    auto end = players.end();

    QStringList items;

    while (i != end) {

        QString qPlayerInfo = QString::fromStdString(i->toString());
        items += qPlayerInfo;
        i++;
    }

    ui->transfer_list_widget->addItems(items);
}

void MainForm::on_buy_button_clicked()
{
    QListWidgetItem *item = ui->transfer_list_widget->takeItem(ui->transfer_list_widget->currentRow());

    QString qSelectedPlayer = item->text();

    std::string selectedPlayer = qSelectedPlayer.toStdString();

    std::cout << selectedPlayer << std::endl;

    delete item;
}
