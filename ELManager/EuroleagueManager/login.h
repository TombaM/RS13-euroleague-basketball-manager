#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <string>
#include "mainform.h"

namespace Ui {
class LogIn;
}

class LogIn : public QDialog
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    ~LogIn();
    /*
    std::string getName() const;
    void setName(std::string name);
    std::string getSurname() const;
    void setSurname(std::string surname);
    std::string getNationality() const;
    void setNationality(std::string nationality);
    std::string getTeam() const;
    void setTeam(std::string team);

    std::vector<team> getTeams() const;
    */

private slots:
    void on_login_button_clicked();

    void on_name_edit_editingFinished();

private:
    Ui::LogIn *ui;
    MainForm form;

    /* Atributes which are needed to be sent to main.cpp */
   // std::string m_name;
    //std::string m_surname;
    //std::string m_nationality;
    //std::string m_teamName;
    //std::vector<team> m_teams;

};

#endif // LOGIN_H
