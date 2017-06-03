#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

    void on_homeButton_clicked();

    void on_myTeamButton_clicked();

    void on_standingsButton_clicked();

    void on_scheduleButton_clicked();

    void on_transferMarketButton_clicked();

    void on_nextGameButton_clicked();

    void on_buyButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
