#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "league.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void addToTransferMarket();

private slots:
    void on_startButton_clicked();
    void on_homeButton_clicked();
    void on_myTeamButton_clicked();
    void on_standingsButton_clicked();
    void on_scheduleButton_clicked();
    void on_transferMarketButton_clicked();
    void on_nextGameButton_clicked();
    void on_buyButton_clicked();
    void on_sellPlayerButton_clicked();
    void on_tacticsButton_clicked();
    void on_runAndGunButton_clicked(bool checked);
    void on_positionAttackButton_clicked(bool checked);
    void on_manToManButton_clicked(bool checked);
    void on_zoneButton_clicked(bool checked);
    void on_nextRoundButton_clicked();
    void on_previousRoundButton_clicked();

    void on_firstPlaceName_linkHovered(const QString &link);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
