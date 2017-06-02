#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>

namespace Ui {
class MainForm;
}

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

private slots:
    void on_homeButton_clicked();

    void on_myTeamButton_clicked();

    void on_standingsButton_clicked();

    void on_scheduleButton_clicked();

    void on_transferMarketButton_clicked();

private:
    Ui::MainForm *ui;
};

#endif // MAINFORM_H
