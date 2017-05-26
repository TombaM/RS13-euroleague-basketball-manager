#include "coach_info_form.h"
#include "ui_coach_info_form.h"
#include "Coach.h"
#include "coach_global.h"

#include <iostream>
#include <ctime>
#include <QMessageBox>
#include <QTimer>


Coach c(" ", " ", " ", " ");

coach_info_form::coach_info_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coach_info_form)
{
    ui->setupUi(this);
}

coach_info_form::~coach_info_form()
{
    delete ui;
}


void coach_info_form::on_create_coach_button_clicked()
{
    QString q_name = ui->name_edit->text();
    QString q_surname = ui->surname_edit->text();
    QString q_nationality = ui->nationalities_combo->currentText();

    if(q_name.length() > 15) {
        QMessageBox::information(this, "Coach creation", "Name si inncorect.");
        QTimer::singleShot(0, ui->name_edit, SLOT(setFocus()));
    }
    else if(q_surname.length() > 15){
        QMessageBox::information(this, "Coach creation", "Surname is inncorect.");
        QTimer::singleShot(0, ui->surname_edit, SLOT(setFocus()));
    }
    else {
        QMessageBox::information(this, "Coach creation", "WELCOME " + q_name + " " + q_surname);


    std::string name = q_name.toStdString();
    std::string surname = q_surname.toStdString();
    std::string nationality = q_nationality.toStdString();

    c.set_name(name);
    c.set_surname(surname);
    c.set_nationality(nationality);

    std::cout << name << surname << nationality << std::endl;

    team_select.show();
    this->hide();
    }
}
