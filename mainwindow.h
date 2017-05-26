#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "coach_info_form.h"

#include <QMainWindow>
#include <iostream>

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    coach_info_form coach_info;
};

#endif // MAINWINDOW_H
