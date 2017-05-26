#ifndef COACH_INFO_FORM_H
#define COACH_INFO_FORM_H

#include "select_team_form.h"

#include <QWidget>
#include <QMessageBox>
#include <iostream>
#include <ctime>

namespace Ui {
class coach_info_form;
}

class coach_info_form : public QWidget
{
    Q_OBJECT

public:
    explicit coach_info_form(QWidget *parent = 0);
    ~coach_info_form();

private slots:
    void on_create_coach_button_clicked();

private:
    Ui::coach_info_form *ui;
    select_team_form team_select;
};

#endif // COACH_INFO_FORM_H
