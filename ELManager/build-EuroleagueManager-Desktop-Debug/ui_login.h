/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QGridLayout *gridLayout;
    QComboBox *teams_combo;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *name_edit;
    QLineEdit *surname_edit;
    QPushButton *login_button;
    QComboBox *nationality_combo;
    QLabel *label_5;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName(QStringLiteral("LogIn"));
        LogIn->resize(321, 293);
        LogIn->setLayoutDirection(Qt::LeftToRight);
        LogIn->setStyleSheet(QStringLiteral("background-color:qlineargradient(spread:pad, x1:0.398, y1:0.0336364, x2:0, y2:1, stop:0 rgba(226, 99, 0, 255), stop:0.641791 rgba(255, 157, 0, 255), stop:0.995025 rgba(255, 185, 73, 255))"));
        gridLayout = new QGridLayout(LogIn);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teams_combo = new QComboBox(LogIn);
        teams_combo->setObjectName(QStringLiteral("teams_combo"));
        teams_combo->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout->addWidget(teams_combo, 4, 2, 1, 1);

        label_3 = new QLabel(LogIn);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("background: transparent;"));

        gridLayout->addWidget(label_3, 3, 0, 1, 2);

        label_2 = new QLabel(LogIn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background: transparent;"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        label = new QLabel(LogIn);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background: transparent;"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(LogIn);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background: transparent;"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        name_edit = new QLineEdit(LogIn);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setMaximumSize(QSize(1000, 16777215));
        name_edit->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        name_edit->setMaxLength(213219);

        gridLayout->addWidget(name_edit, 1, 2, 1, 1);

        surname_edit = new QLineEdit(LogIn);
        surname_edit->setObjectName(QStringLiteral("surname_edit"));
        surname_edit->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout->addWidget(surname_edit, 2, 2, 1, 1);

        login_button = new QPushButton(LogIn);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setMinimumSize(QSize(210, 0));
        login_button->setMaximumSize(QSize(300, 16777215));
        login_button->setStyleSheet(QLatin1String("background-color: rgb(97, 58, 0);\n"
"color: white;"));

        gridLayout->addWidget(login_button, 5, 2, 1, 1);

        nationality_combo = new QComboBox(LogIn);
        nationality_combo->setObjectName(QStringLiteral("nationality_combo"));
        nationality_combo->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout->addWidget(nationality_combo, 3, 2, 1, 1);

        label_5 = new QLabel(LogIn);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QStringLiteral("TakaoPGothic"));
        font.setPointSize(20);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background: transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 3);


        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QApplication::translate("LogIn", "Dialog", Q_NULLPTR));
        teams_combo->clear();
        teams_combo->insertItems(0, QStringList()
         << QApplication::translate("LogIn", "Anadolu Efes", Q_NULLPTR)
         << QApplication::translate("LogIn", "Crvena Zvezda", Q_NULLPTR)
         << QApplication::translate("LogIn", "CSKA", Q_NULLPTR)
         << QApplication::translate("LogIn", "EA7 Emporio Armani", Q_NULLPTR)
         << QApplication::translate("LogIn", "Maccabi", Q_NULLPTR)
         << QApplication::translate("LogIn", "Panathinaikos", Q_NULLPTR)
         << QApplication::translate("LogIn", "Real Madrid", Q_NULLPTR)
         << QApplication::translate("LogIn", "Zalgiris", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("LogIn", "Nationality", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogIn", "Surname", Q_NULLPTR));
        label->setText(QApplication::translate("LogIn", "Name", Q_NULLPTR));
        label_4->setText(QApplication::translate("LogIn", "Team", Q_NULLPTR));
        login_button->setText(QApplication::translate("LogIn", "START GAME", Q_NULLPTR));
        nationality_combo->clear();
        nationality_combo->insertItems(0, QStringList()
         << QApplication::translate("LogIn", "Argentina", Q_NULLPTR)
         << QApplication::translate("LogIn", "Brasil", Q_NULLPTR)
         << QApplication::translate("LogIn", "Bulgaria", Q_NULLPTR)
         << QApplication::translate("LogIn", "Canada", Q_NULLPTR)
         << QApplication::translate("LogIn", "China", Q_NULLPTR)
         << QApplication::translate("LogIn", "Croatia", Q_NULLPTR)
         << QApplication::translate("LogIn", "France", Q_NULLPTR)
         << QApplication::translate("LogIn", "Hungary", Q_NULLPTR)
         << QApplication::translate("LogIn", "Germany", Q_NULLPTR)
         << QApplication::translate("LogIn", "Japan", Q_NULLPTR)
         << QApplication::translate("LogIn", "Macedonia", Q_NULLPTR)
         << QApplication::translate("LogIn", "Montenegro", Q_NULLPTR)
         << QApplication::translate("LogIn", "Russia", Q_NULLPTR)
         << QApplication::translate("LogIn", "Serbia", Q_NULLPTR)
         << QApplication::translate("LogIn", "Spain", Q_NULLPTR)
         << QApplication::translate("LogIn", "Ukraine", Q_NULLPTR)
         << QApplication::translate("LogIn", "United Kingdom", Q_NULLPTR)
         << QApplication::translate("LogIn", "United States of America", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("LogIn", "LOG IN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
