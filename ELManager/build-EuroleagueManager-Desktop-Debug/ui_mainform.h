/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *myTeamButton;
    QPushButton *standingsButton;
    QPushButton *scheduleButton;
    QPushButton *transferMarketButton;
    QPushButton *homeButton_2;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *label;
    QWidget *myTeamPage;
    QLabel *label_2;
    QWidget *standingsPage;
    QLabel *label_3;
    QWidget *schedulePage;
    QLabel *label_4;
    QWidget *transferMarketPage;
    QLabel *label_5;
    QTableView *tableView;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(750, 448);
        MainForm->setStyleSheet(QStringLiteral("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.00995025 rgba(84, 46, 11, 255), stop:1 rgba(235, 134, 33, 255));"));
        gridLayout = new QGridLayout(MainForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(MainForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(170, 0));
        widget->setMaximumSize(QSize(150, 16777215));
        widget->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        homeButton = new QPushButton(widget);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setMinimumSize(QSize(0, 50));
        homeButton->setStyleSheet(QLatin1String("background-color: rgb(245, 121, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(homeButton);

        myTeamButton = new QPushButton(widget);
        myTeamButton->setObjectName(QStringLiteral("myTeamButton"));
        myTeamButton->setMinimumSize(QSize(0, 50));
        myTeamButton->setStyleSheet(QLatin1String("background-color: rgb(245, 121, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(myTeamButton);

        standingsButton = new QPushButton(widget);
        standingsButton->setObjectName(QStringLiteral("standingsButton"));
        standingsButton->setMinimumSize(QSize(0, 50));
        standingsButton->setStyleSheet(QLatin1String("background-color: rgb(245, 121, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(standingsButton);

        scheduleButton = new QPushButton(widget);
        scheduleButton->setObjectName(QStringLiteral("scheduleButton"));
        scheduleButton->setMinimumSize(QSize(0, 50));
        scheduleButton->setStyleSheet(QLatin1String("background-color: rgb(245, 121, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(scheduleButton);

        transferMarketButton = new QPushButton(widget);
        transferMarketButton->setObjectName(QStringLiteral("transferMarketButton"));
        transferMarketButton->setMinimumSize(QSize(0, 50));
        transferMarketButton->setStyleSheet(QLatin1String("background-color: rgb(245, 121, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(transferMarketButton);

        homeButton_2 = new QPushButton(widget);
        homeButton_2->setObjectName(QStringLiteral("homeButton_2"));
        homeButton_2->setMinimumSize(QSize(0, 50));
        homeButton_2->setMaximumSize(QSize(200, 16777215));
        homeButton_2->setStyleSheet(QLatin1String("background-color: rgb(239, 10, 10);\n"
"font: 25 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(homeButton_2);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(MainForm);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background:transparent;"));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        label = new QLabel(homePage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 130, 67, 17));
        stackedWidget->addWidget(homePage);
        myTeamPage = new QWidget();
        myTeamPage->setObjectName(QStringLiteral("myTeamPage"));
        label_2 = new QLabel(myTeamPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 40, 67, 17));
        stackedWidget->addWidget(myTeamPage);
        standingsPage = new QWidget();
        standingsPage->setObjectName(QStringLiteral("standingsPage"));
        label_3 = new QLabel(standingsPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 110, 67, 17));
        stackedWidget->addWidget(standingsPage);
        schedulePage = new QWidget();
        schedulePage->setObjectName(QStringLiteral("schedulePage"));
        label_4 = new QLabel(schedulePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 140, 67, 17));
        stackedWidget->addWidget(schedulePage);
        transferMarketPage = new QWidget();
        transferMarketPage->setObjectName(QStringLiteral("transferMarketPage"));
        label_5 = new QLabel(transferMarketPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 531, 21));
        tableView = new QTableView(transferMarketPage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 541, 361));
        stackedWidget->addWidget(transferMarketPage);

        gridLayout->addWidget(stackedWidget, 2, 1, 1, 1);


        retranslateUi(MainForm);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Form", Q_NULLPTR));
        homeButton->setText(QApplication::translate("MainForm", "HOME", Q_NULLPTR));
        myTeamButton->setText(QApplication::translate("MainForm", "MY TEAM", Q_NULLPTR));
        standingsButton->setText(QApplication::translate("MainForm", "STANDINGS", Q_NULLPTR));
        scheduleButton->setText(QApplication::translate("MainForm", "SCHEDULE", Q_NULLPTR));
        transferMarketButton->setText(QApplication::translate("MainForm", "TRANSFER MARKET", Q_NULLPTR));
        homeButton_2->setText(QApplication::translate("MainForm", "NEXT GAME", Q_NULLPTR));
        label->setText(QApplication::translate("MainForm", "page home", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainForm", "my team", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainForm", "standings", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainForm", "schedule", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainForm", "transfer market", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
