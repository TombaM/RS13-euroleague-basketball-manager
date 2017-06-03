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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *logIn;
    QGridLayout *gridLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *surnameLabel;
    QLineEdit *surnameEdit;
    QLabel *nationlityLabel;
    QComboBox *nationalityBox;
    QLabel *teamLabel;
    QComboBox *teamBox;
    QPushButton *startButton;
    QWidget *gamePlay;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QPushButton *homeButton;
    QPushButton *myTeamButton;
    QPushButton *standingsButton;
    QPushButton *scheduleButton;
    QPushButton *transferMarketButton;
    QPushButton *nextGameButton;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QStackedWidget *gamePlayStackedWidget;
    QWidget *homePage;
    QLabel *label;
    QWidget *myTeamPage;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QListWidget *myTeamList;
    QWidget *standingsPage;
    QLabel *label_3;
    QWidget *schedulePage;
    QLabel *label_4;
    QWidget *transferMarketPage;
    QGridLayout *gridLayout_6;
    QListWidget *transferMarketListWidget;
    QLabel *label_5;
    QPushButton *buyButton;
    QWidget *nextGamePage;
    QLabel *roundLabel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_21;
    QLabel *firstResultLabel;
    QLabel *secondResultLabel;
    QLabel *thirdResultLabel;
    QLabel *fourthResultLabel;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(443, 408);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(\"wallpaper1.jpg\");"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background:transparent;"));
        logIn = new QWidget();
        logIn->setObjectName(QStringLiteral("logIn"));
        gridLayout_2 = new QGridLayout(logIn);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        nameLabel = new QLabel(logIn);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setStyleSheet(QStringLiteral("color:rgb(238, 238, 236);"));

        gridLayout_2->addWidget(nameLabel, 0, 0, 1, 1);

        nameEdit = new QLineEdit(logIn);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout_2->addWidget(nameEdit, 0, 1, 1, 1);

        surnameLabel = new QLabel(logIn);
        surnameLabel->setObjectName(QStringLiteral("surnameLabel"));
        surnameLabel->setStyleSheet(QStringLiteral("color:rgb(238, 238, 236);"));

        gridLayout_2->addWidget(surnameLabel, 1, 0, 1, 1);

        surnameEdit = new QLineEdit(logIn);
        surnameEdit->setObjectName(QStringLiteral("surnameEdit"));
        surnameEdit->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout_2->addWidget(surnameEdit, 1, 1, 1, 1);

        nationlityLabel = new QLabel(logIn);
        nationlityLabel->setObjectName(QStringLiteral("nationlityLabel"));
        nationlityLabel->setStyleSheet(QStringLiteral("color:rgb(238, 238, 236);"));

        gridLayout_2->addWidget(nationlityLabel, 2, 0, 1, 1);

        nationalityBox = new QComboBox(logIn);
        nationalityBox->setObjectName(QStringLiteral("nationalityBox"));
        nationalityBox->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout_2->addWidget(nationalityBox, 2, 1, 1, 1);

        teamLabel = new QLabel(logIn);
        teamLabel->setObjectName(QStringLiteral("teamLabel"));
        teamLabel->setStyleSheet(QStringLiteral("color:rgb(238, 238, 236);"));

        gridLayout_2->addWidget(teamLabel, 3, 0, 1, 1);

        teamBox = new QComboBox(logIn);
        teamBox->setObjectName(QStringLiteral("teamBox"));
        teamBox->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));

        gridLayout_2->addWidget(teamBox, 3, 1, 1, 1);

        startButton = new QPushButton(logIn);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setStyleSheet(QStringLiteral("background-color:rgb(138, 226, 52)"));

        gridLayout_2->addWidget(startButton, 4, 2, 1, 1);

        stackedWidget->addWidget(logIn);
        gamePlay = new QWidget();
        gamePlay->setObjectName(QStringLiteral("gamePlay"));
        gridLayout_3 = new QGridLayout(gamePlay);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame = new QFrame(gamePlay);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(150, 0));
        frame->setStyleSheet(QStringLiteral("background: transparent;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        homeButton = new QPushButton(frame);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setMinimumSize(QSize(0, 50));
        homeButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(homeButton, 0, 0, 1, 1);

        myTeamButton = new QPushButton(frame);
        myTeamButton->setObjectName(QStringLiteral("myTeamButton"));
        myTeamButton->setMinimumSize(QSize(0, 50));
        myTeamButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(myTeamButton, 1, 0, 1, 1);

        standingsButton = new QPushButton(frame);
        standingsButton->setObjectName(QStringLiteral("standingsButton"));
        standingsButton->setMinimumSize(QSize(0, 50));
        standingsButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(standingsButton, 2, 0, 1, 1);

        scheduleButton = new QPushButton(frame);
        scheduleButton->setObjectName(QStringLiteral("scheduleButton"));
        scheduleButton->setMinimumSize(QSize(0, 50));
        scheduleButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(scheduleButton, 3, 0, 1, 1);

        transferMarketButton = new QPushButton(frame);
        transferMarketButton->setObjectName(QStringLiteral("transferMarketButton"));
        transferMarketButton->setMinimumSize(QSize(0, 50));
        transferMarketButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(transferMarketButton, 4, 0, 1, 1);

        nextGameButton = new QPushButton(frame);
        nextGameButton->setObjectName(QStringLiteral("nextGameButton"));
        nextGameButton->setMinimumSize(QSize(0, 50));
        nextGameButton->setStyleSheet(QLatin1String("background-color:rgb(178, 0, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(nextGameButton, 5, 0, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(gamePlay);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gamePlayStackedWidget = new QStackedWidget(frame_2);
        gamePlayStackedWidget->setObjectName(QStringLiteral("gamePlayStackedWidget"));
        gamePlayStackedWidget->setStyleSheet(QStringLiteral("background:transparent;"));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        label = new QLabel(homePage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 171, 71));
        gamePlayStackedWidget->addWidget(homePage);
        myTeamPage = new QWidget();
        myTeamPage->setObjectName(QStringLiteral("myTeamPage"));
        gridLayout_8 = new QGridLayout(myTeamPage);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_2 = new QLabel(myTeamPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);

        myTeamList = new QListWidget(myTeamPage);
        myTeamList->setObjectName(QStringLiteral("myTeamList"));
        myTeamList->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_8->addWidget(myTeamList, 1, 0, 1, 1);

        gamePlayStackedWidget->addWidget(myTeamPage);
        standingsPage = new QWidget();
        standingsPage->setObjectName(QStringLiteral("standingsPage"));
        label_3 = new QLabel(standingsPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 160, 67, 17));
        gamePlayStackedWidget->addWidget(standingsPage);
        schedulePage = new QWidget();
        schedulePage->setObjectName(QStringLiteral("schedulePage"));
        label_4 = new QLabel(schedulePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 150, 67, 17));
        gamePlayStackedWidget->addWidget(schedulePage);
        transferMarketPage = new QWidget();
        transferMarketPage->setObjectName(QStringLiteral("transferMarketPage"));
        gridLayout_6 = new QGridLayout(transferMarketPage);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        transferMarketListWidget = new QListWidget(transferMarketPage);
        transferMarketListWidget->setObjectName(QStringLiteral("transferMarketListWidget"));
        transferMarketListWidget->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_6->addWidget(transferMarketListWidget, 1, 0, 1, 1);

        label_5 = new QLabel(transferMarketPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1, Qt::AlignHCenter);

        buyButton = new QPushButton(transferMarketPage);
        buyButton->setObjectName(QStringLiteral("buyButton"));
        buyButton->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 164);"));

        gridLayout_6->addWidget(buyButton, 2, 0, 1, 1);

        gamePlayStackedWidget->addWidget(transferMarketPage);
        nextGamePage = new QWidget();
        nextGamePage->setObjectName(QStringLiteral("nextGamePage"));
        roundLabel = new QLabel(nextGamePage);
        roundLabel->setObjectName(QStringLiteral("roundLabel"));
        roundLabel->setGeometry(QRect(110, 20, 281, 20));
        roundLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Ubuntu\";\n"
"\n"
"background-color:rgb(239, 173, 124)"));
        roundLabel->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(nextGamePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 90, 67, 16));
        label_7->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_8 = new QLabel(nextGamePage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 140, 67, 17));
        label_8->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_9 = new QLabel(nextGamePage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 190, 67, 17));
        label_9->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_10 = new QLabel(nextGamePage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 250, 67, 17));
        label_10->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_6 = new QLabel(nextGamePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 60, 67, 17));
        label_6->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_6->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(nextGamePage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(320, 60, 67, 17));
        label_21->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_21->setAlignment(Qt::AlignCenter);
        firstResultLabel = new QLabel(nextGamePage);
        firstResultLabel->setObjectName(QStringLiteral("firstResultLabel"));
        firstResultLabel->setGeometry(QRect(110, 90, 291, 20));
        firstResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        firstResultLabel->setAlignment(Qt::AlignCenter);
        secondResultLabel = new QLabel(nextGamePage);
        secondResultLabel->setObjectName(QStringLiteral("secondResultLabel"));
        secondResultLabel->setGeometry(QRect(110, 140, 291, 20));
        secondResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        secondResultLabel->setAlignment(Qt::AlignCenter);
        thirdResultLabel = new QLabel(nextGamePage);
        thirdResultLabel->setObjectName(QStringLiteral("thirdResultLabel"));
        thirdResultLabel->setGeometry(QRect(110, 190, 291, 20));
        thirdResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        thirdResultLabel->setAlignment(Qt::AlignCenter);
        fourthResultLabel = new QLabel(nextGamePage);
        fourthResultLabel->setObjectName(QStringLiteral("fourthResultLabel"));
        fourthResultLabel->setGeometry(QRect(110, 250, 291, 20));
        fourthResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        fourthResultLabel->setAlignment(Qt::AlignCenter);
        gamePlayStackedWidget->addWidget(nextGamePage);

        gridLayout_4->addWidget(gamePlayStackedWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        stackedWidget->addWidget(gamePlay);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 443, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        gamePlayStackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        surnameLabel->setText(QApplication::translate("MainWindow", "Surname", Q_NULLPTR));
        nationlityLabel->setText(QApplication::translate("MainWindow", "Nationality", Q_NULLPTR));
        nationalityBox->clear();
        nationalityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Serbia", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Croatia", Q_NULLPTR)
        );
        teamLabel->setText(QApplication::translate("MainWindow", "Team", Q_NULLPTR));
        teamBox->clear();
        teamBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Anadolu Efes", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Crvena Zvezda", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CSKA", Q_NULLPTR)
         << QApplication::translate("MainWindow", "EA7 Emporio Armani", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Maccabi", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Panathinaikos", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Real Madrid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Zalgiris", Q_NULLPTR)
        );
        startButton->setText(QApplication::translate("MainWindow", "START", Q_NULLPTR));
        homeButton->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        myTeamButton->setText(QApplication::translate("MainWindow", "MY TEAM", Q_NULLPTR));
        standingsButton->setText(QApplication::translate("MainWindow", "STANDINGS", Q_NULLPTR));
        scheduleButton->setText(QApplication::translate("MainWindow", "SCHEDULE", Q_NULLPTR));
        transferMarketButton->setText(QApplication::translate("MainWindow", "TRANSFER MARKET", Q_NULLPTR));
        nextGameButton->setText(QApplication::translate("MainWindow", "NEXT GAME", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "HOME PAGE", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "MY TEAM PAGE", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "standings", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "schedule", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TRANSFER MARKET", Q_NULLPTR));
        buyButton->setText(QApplication::translate("MainWindow", "BUY", Q_NULLPTR));
        roundLabel->setText(QApplication::translate("MainWindow", "ROUND", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "GAME 1", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "GAME 2", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "GAME 3", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "GAME 4", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "AWAY", Q_NULLPTR));
        firstResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        secondResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        thirdResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        fourthResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
