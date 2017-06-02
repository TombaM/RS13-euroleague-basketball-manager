/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QPushButton *myTeamButton;
    QPushButton *leagueButton;
    QPushButton *tacticsButton;
    QPushButton *marketplaceButton;
    QPushButton *homeButton;
    QPushButton *standingsButton;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QWidget *myTeamPage;
    QWidget *standingsPage;
    QWidget *schedulePage;
    QWidget *tacticsPage;
    QWidget *marketplacePage;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(744, 383);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(\"wallpaper.jpg\");"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(170, 16777215));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        myTeamButton = new QPushButton(frame_2);
        myTeamButton->setObjectName(QStringLiteral("myTeamButton"));
        myTeamButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(myTeamButton, 1, 0, 1, 1);

        leagueButton = new QPushButton(frame_2);
        leagueButton->setObjectName(QStringLiteral("leagueButton"));
        leagueButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(leagueButton, 3, 0, 1, 1);

        tacticsButton = new QPushButton(frame_2);
        tacticsButton->setObjectName(QStringLiteral("tacticsButton"));
        tacticsButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(tacticsButton, 4, 0, 1, 1);

        marketplaceButton = new QPushButton(frame_2);
        marketplaceButton->setObjectName(QStringLiteral("marketplaceButton"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        marketplaceButton->setFont(font);
        marketplaceButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(marketplaceButton, 5, 0, 1, 1);

        homeButton = new QPushButton(frame_2);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(homeButton, 0, 0, 1, 1);

        standingsButton = new QPushButton(frame_2);
        standingsButton->setObjectName(QStringLiteral("standingsButton"));
        standingsButton->setStyleSheet(QLatin1String("background-color: rgb(255, 153, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(standingsButton, 2, 0, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        stackedWidget->addWidget(homePage);
        myTeamPage = new QWidget();
        myTeamPage->setObjectName(QStringLiteral("myTeamPage"));
        stackedWidget->addWidget(myTeamPage);
        standingsPage = new QWidget();
        standingsPage->setObjectName(QStringLiteral("standingsPage"));
        stackedWidget->addWidget(standingsPage);
        schedulePage = new QWidget();
        schedulePage->setObjectName(QStringLiteral("schedulePage"));
        stackedWidget->addWidget(schedulePage);
        tacticsPage = new QWidget();
        tacticsPage->setObjectName(QStringLiteral("tacticsPage"));
        stackedWidget->addWidget(tacticsPage);
        marketplacePage = new QWidget();
        marketplacePage->setObjectName(QStringLiteral("marketplacePage"));
        stackedWidget->addWidget(marketplacePage);

        gridLayout_3->addWidget(stackedWidget, 0, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Eurolague Basketball Manager", Q_NULLPTR));
        myTeamButton->setText(QApplication::translate("MainWindow", "MY TEAM", Q_NULLPTR));
        leagueButton->setText(QApplication::translate("MainWindow", "SCHEDULE", Q_NULLPTR));
        tacticsButton->setText(QApplication::translate("MainWindow", "TACTICS", Q_NULLPTR));
        marketplaceButton->setText(QApplication::translate("MainWindow", "TRANSFER MARKET", Q_NULLPTR));
        homeButton->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        standingsButton->setText(QApplication::translate("MainWindow", "STANDINGS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
