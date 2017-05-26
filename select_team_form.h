#ifndef SELECT_TEAM_FORM_H
#define SELECT_TEAM_FORM_H

#include <QWidget>
#include <iostream>
#include "main_gui_form.h"


namespace Ui {
class select_team_form;
}

class select_team_form : public QWidget
{
    Q_OBJECT

public:
    explicit select_team_form(QWidget *parent = 0);
    ~select_team_form();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::select_team_form *ui;
    main_gui_form main_form;
};

#endif // SELECT_TEAM_FORM_H
