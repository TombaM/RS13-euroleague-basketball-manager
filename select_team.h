#ifndef SELECT_TEAM_H
#define SELECT_TEAM_H

#include <QWidget>
#include "coach_info_form.h"

namespace Ui {
class Select_team;
}

class Select_team : public QWidget
{
    Q_OBJECT

public:
    explicit Select_team(QWidget *parent = 0);
    ~Select_team();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Select_team *ui;
};

#endif // SELECT_TEAM_H
