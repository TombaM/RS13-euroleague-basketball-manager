#ifndef MAIN_GUI_FORM_H
#define MAIN_GUI_FORM_H

#include <QWidget>

namespace Ui {
class main_gui_form;
}

class main_gui_form : public QWidget
{
    Q_OBJECT

public:
    explicit main_gui_form(QWidget *parent = 0);
    ~main_gui_form();

private slots:
    void on_main_gui_form_windowTitleChanged(const QString &title);

    void on_team_button_clicked();

    void on_home_button_clicked();

private:
    Ui::main_gui_form *ui;
};

#endif // MAIN_GUI_FORM_H
