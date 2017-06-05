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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *nextGameButton;
    QPushButton *tacticsButton;
    QPushButton *homeButton;
    QPushButton *myTeamButton;
    QPushButton *standingsButton;
    QPushButton *scheduleButton;
    QPushButton *transferMarketButton;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QStackedWidget *gamePlayStackedWidget;
    QWidget *homePage;
    QLabel *label;
    QFrame *logoHome;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_26;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_32;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel_2;
    QLabel *surnameLabel_2;
    QLabel *nationalityLabel;
    QLabel *teamNameLabel;
    QLabel *currentBudgetLabel;
    QWidget *myTeamPage;
    QGridLayout *gridLayout_8;
    QLabel *label_2;
    QListWidget *myTeamList;
    QPushButton *sellPlayerButton;
    QWidget *standingsPage;
    QGridLayout *gridLayout_13;
    QLabel *label_42;
    QLabel *label_31;
    QLabel *label_27;
    QLabel *label_3;
    QLabel *firstPlaceName;
    QLabel *firstPlacePoints;
    QLabel *label_4;
    QLabel *secondPlaceName;
    QLabel *secondPlacePoints;
    QLabel *label_17;
    QLabel *thirdPlaceName;
    QLabel *thirdPlacePoints;
    QLabel *label_18;
    QLabel *fourthPlaceName;
    QLabel *fourthPlacePoints;
    QLabel *label_22;
    QLabel *fifthPlaceName;
    QLabel *fifthPlacePoints;
    QLabel *label_23;
    QLabel *sixthPlaceName;
    QLabel *sixthPlacePoints;
    QLabel *label_24;
    QLabel *seventhPlaceName;
    QLabel *seventhPlacePoints;
    QLabel *label_25;
    QLabel *eighthPlaceName;
    QLabel *eighthPlacePoints;
    QWidget *schedulePage;
    QGridLayout *gridLayout_7;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *firstScheduleLabel;
    QLabel *label_16;
    QLabel *secondScheduleLabel;
    QLabel *label_15;
    QLabel *thirdScheduleLabel;
    QLabel *label_14;
    QLabel *fourthScheduleLabel;
    QLabel *roundScheduleLabel;
    QLabel *label_12;
    QPushButton *nextRoundButton;
    QPushButton *previousRoundButton;
    QWidget *transferMarketPage;
    QGridLayout *gridLayout_6;
    QListWidget *transferMarketListWidget;
    QLabel *label_5;
    QPushButton *buyButton;
    QWidget *tacticsPage;
    QGridLayout *gridLayout_10;
    QLabel *label_19;
    QFrame *frame_3;
    QGridLayout *gridLayout_11;
    QRadioButton *runAndGunButton;
    QRadioButton *positionAttackButton;
    QLabel *label_20;
    QFrame *frame_4;
    QGridLayout *gridLayout_12;
    QRadioButton *manToManButton;
    QRadioButton *zoneButton;
    QWidget *nextGamePage;
    QGridLayout *gridLayout_9;
    QLabel *roundLabel;
    QLabel *label_6;
    QLabel *label_21;
    QLabel *label_7;
    QLabel *firstResultLabel;
    QLabel *label_8;
    QLabel *secondResultLabel;
    QLabel *label_9;
    QLabel *thirdResultLabel;
    QLabel *label_10;
    QLabel *fourthResultLabel;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 464);
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
        nextGameButton = new QPushButton(frame);
        nextGameButton->setObjectName(QStringLiteral("nextGameButton"));
        nextGameButton->setMinimumSize(QSize(0, 50));
        nextGameButton->setStyleSheet(QLatin1String("background-color:rgb(178, 0, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(nextGameButton, 6, 0, 1, 1);

        tacticsButton = new QPushButton(frame);
        tacticsButton->setObjectName(QStringLiteral("tacticsButton"));
        tacticsButton->setMinimumSize(QSize(0, 50));
        tacticsButton->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";"));

        gridLayout_5->addWidget(tacticsButton, 5, 0, 1, 1);

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
        label->setGeometry(QRect(160, 0, 141, 41));
        logoHome = new QFrame(homePage);
        logoHome->setObjectName(QStringLiteral("logoHome"));
        logoHome->setGeometry(QRect(10, 60, 191, 191));
        logoHome->setStyleSheet(QStringLiteral("background-color: rgb(233, 185, 110);"));
        logoHome->setFrameShape(QFrame::StyledPanel);
        logoHome->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(homePage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(230, 60, 131, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(verticalLayoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout->addWidget(label_26);

        label_28 = new QLabel(verticalLayoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout->addWidget(label_28);

        label_29 = new QLabel(verticalLayoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout->addWidget(label_29);

        label_30 = new QLabel(verticalLayoutWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout->addWidget(label_30);

        label_32 = new QLabel(verticalLayoutWidget);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout->addWidget(label_32);

        verticalLayoutWidget_2 = new QWidget(homePage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(370, 60, 131, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel_2 = new QLabel(verticalLayoutWidget_2);
        nameLabel_2->setObjectName(QStringLiteral("nameLabel_2"));

        verticalLayout_2->addWidget(nameLabel_2);

        surnameLabel_2 = new QLabel(verticalLayoutWidget_2);
        surnameLabel_2->setObjectName(QStringLiteral("surnameLabel_2"));

        verticalLayout_2->addWidget(surnameLabel_2);

        nationalityLabel = new QLabel(verticalLayoutWidget_2);
        nationalityLabel->setObjectName(QStringLiteral("nationalityLabel"));

        verticalLayout_2->addWidget(nationalityLabel);

        teamNameLabel = new QLabel(verticalLayoutWidget_2);
        teamNameLabel->setObjectName(QStringLiteral("teamNameLabel"));

        verticalLayout_2->addWidget(teamNameLabel);

        currentBudgetLabel = new QLabel(verticalLayoutWidget_2);
        currentBudgetLabel->setObjectName(QStringLiteral("currentBudgetLabel"));

        verticalLayout_2->addWidget(currentBudgetLabel);

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

        sellPlayerButton = new QPushButton(myTeamPage);
        sellPlayerButton->setObjectName(QStringLiteral("sellPlayerButton"));
        sellPlayerButton->setStyleSheet(QStringLiteral("background-color:rgb(52, 101, 164)"));

        gridLayout_8->addWidget(sellPlayerButton, 2, 0, 1, 1);

        gamePlayStackedWidget->addWidget(myTeamPage);
        standingsPage = new QWidget();
        standingsPage->setObjectName(QStringLiteral("standingsPage"));
        gridLayout_13 = new QGridLayout(standingsPage);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_42 = new QLabel(standingsPage);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMaximumSize(QSize(50, 16777215));
        label_42->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_42, 0, 0, 1, 1);

        label_31 = new QLabel(standingsPage);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(label_31, 0, 1, 1, 1);

        label_27 = new QLabel(standingsPage);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMaximumSize(QSize(70, 16777215));
        label_27->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_27, 0, 2, 1, 1);

        label_3 = new QLabel(standingsPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_3, 1, 0, 1, 1);

        firstPlaceName = new QLabel(standingsPage);
        firstPlaceName->setObjectName(QStringLiteral("firstPlaceName"));
        firstPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(firstPlaceName, 1, 1, 1, 1);

        firstPlacePoints = new QLabel(standingsPage);
        firstPlacePoints->setObjectName(QStringLiteral("firstPlacePoints"));
        firstPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        firstPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(firstPlacePoints, 1, 2, 1, 1);

        label_4 = new QLabel(standingsPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_4, 2, 0, 1, 1);

        secondPlaceName = new QLabel(standingsPage);
        secondPlaceName->setObjectName(QStringLiteral("secondPlaceName"));
        secondPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(secondPlaceName, 2, 1, 1, 1);

        secondPlacePoints = new QLabel(standingsPage);
        secondPlacePoints->setObjectName(QStringLiteral("secondPlacePoints"));
        secondPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        secondPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(secondPlacePoints, 2, 2, 1, 1);

        label_17 = new QLabel(standingsPage);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_17, 3, 0, 1, 1);

        thirdPlaceName = new QLabel(standingsPage);
        thirdPlaceName->setObjectName(QStringLiteral("thirdPlaceName"));
        thirdPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;white;"));

        gridLayout_13->addWidget(thirdPlaceName, 3, 1, 1, 1);

        thirdPlacePoints = new QLabel(standingsPage);
        thirdPlacePoints->setObjectName(QStringLiteral("thirdPlacePoints"));
        thirdPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        thirdPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(thirdPlacePoints, 3, 2, 1, 1);

        label_18 = new QLabel(standingsPage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_18, 4, 0, 1, 1);

        fourthPlaceName = new QLabel(standingsPage);
        fourthPlaceName->setObjectName(QStringLiteral("fourthPlaceName"));
        fourthPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(fourthPlaceName, 4, 1, 1, 1);

        fourthPlacePoints = new QLabel(standingsPage);
        fourthPlacePoints->setObjectName(QStringLiteral("fourthPlacePoints"));
        fourthPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        fourthPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(fourthPlacePoints, 4, 2, 1, 1);

        label_22 = new QLabel(standingsPage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_22, 5, 0, 1, 1);

        fifthPlaceName = new QLabel(standingsPage);
        fifthPlaceName->setObjectName(QStringLiteral("fifthPlaceName"));
        fifthPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(fifthPlaceName, 5, 1, 1, 1);

        fifthPlacePoints = new QLabel(standingsPage);
        fifthPlacePoints->setObjectName(QStringLiteral("fifthPlacePoints"));
        fifthPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        fifthPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(fifthPlacePoints, 5, 2, 1, 1);

        label_23 = new QLabel(standingsPage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_23, 6, 0, 1, 1);

        sixthPlaceName = new QLabel(standingsPage);
        sixthPlaceName->setObjectName(QStringLiteral("sixthPlaceName"));
        sixthPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(sixthPlaceName, 6, 1, 1, 1);

        sixthPlacePoints = new QLabel(standingsPage);
        sixthPlacePoints->setObjectName(QStringLiteral("sixthPlacePoints"));
        sixthPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        sixthPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(sixthPlacePoints, 6, 2, 1, 1);

        label_24 = new QLabel(standingsPage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_24, 7, 0, 1, 1);

        seventhPlaceName = new QLabel(standingsPage);
        seventhPlaceName->setObjectName(QStringLiteral("seventhPlaceName"));
        seventhPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(seventhPlaceName, 7, 1, 1, 1);

        seventhPlacePoints = new QLabel(standingsPage);
        seventhPlacePoints->setObjectName(QStringLiteral("seventhPlacePoints"));
        seventhPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        seventhPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(seventhPlacePoints, 7, 2, 1, 1);

        label_25 = new QLabel(standingsPage);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_25, 8, 0, 1, 1);

        eighthPlaceName = new QLabel(standingsPage);
        eighthPlaceName->setObjectName(QStringLiteral("eighthPlaceName"));
        eighthPlaceName->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));

        gridLayout_13->addWidget(eighthPlaceName, 8, 1, 1, 1);

        eighthPlacePoints = new QLabel(standingsPage);
        eighthPlacePoints->setObjectName(QStringLiteral("eighthPlacePoints"));
        eighthPlacePoints->setStyleSheet(QLatin1String("background-color:rgb(140, 60, 0);\n"
"font: 25 11pt \"Ubuntu\";\n"
"color: white;"));
        eighthPlacePoints->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(eighthPlacePoints, 8, 2, 1, 1);

        gamePlayStackedWidget->addWidget(standingsPage);
        schedulePage = new QWidget();
        schedulePage->setObjectName(QStringLiteral("schedulePage"));
        gridLayout_7 = new QGridLayout(schedulePage);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_11 = new QLabel(schedulePage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_11, 1, 3, 1, 1);

        label_13 = new QLabel(schedulePage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(label_13, 2, 0, 1, 1);

        firstScheduleLabel = new QLabel(schedulePage);
        firstScheduleLabel->setObjectName(QStringLiteral("firstScheduleLabel"));
        firstScheduleLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        firstScheduleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(firstScheduleLabel, 2, 1, 1, 3);

        label_16 = new QLabel(schedulePage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(label_16, 3, 0, 1, 1);

        secondScheduleLabel = new QLabel(schedulePage);
        secondScheduleLabel->setObjectName(QStringLiteral("secondScheduleLabel"));
        secondScheduleLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        secondScheduleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(secondScheduleLabel, 3, 1, 1, 3);

        label_15 = new QLabel(schedulePage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(label_15, 4, 0, 1, 1);

        thirdScheduleLabel = new QLabel(schedulePage);
        thirdScheduleLabel->setObjectName(QStringLiteral("thirdScheduleLabel"));
        thirdScheduleLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        thirdScheduleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(thirdScheduleLabel, 4, 1, 1, 3);

        label_14 = new QLabel(schedulePage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(label_14, 5, 0, 1, 1);

        fourthScheduleLabel = new QLabel(schedulePage);
        fourthScheduleLabel->setObjectName(QStringLiteral("fourthScheduleLabel"));
        fourthScheduleLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        fourthScheduleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(fourthScheduleLabel, 5, 1, 1, 3);

        roundScheduleLabel = new QLabel(schedulePage);
        roundScheduleLabel->setObjectName(QStringLiteral("roundScheduleLabel"));
        roundScheduleLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        roundScheduleLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(roundScheduleLabel, 0, 1, 1, 3);

        label_12 = new QLabel(schedulePage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_12, 1, 1, 1, 1);

        nextRoundButton = new QPushButton(schedulePage);
        nextRoundButton->setObjectName(QStringLiteral("nextRoundButton"));
        nextRoundButton->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(nextRoundButton, 6, 3, 1, 1);

        previousRoundButton = new QPushButton(schedulePage);
        previousRoundButton->setObjectName(QStringLiteral("previousRoundButton"));
        previousRoundButton->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_7->addWidget(previousRoundButton, 6, 1, 1, 1);

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
        tacticsPage = new QWidget();
        tacticsPage->setObjectName(QStringLiteral("tacticsPage"));
        gridLayout_10 = new QGridLayout(tacticsPage);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_19 = new QLabel(tacticsPage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QStringLiteral("color:white;"));
        label_19->setTextFormat(Qt::RichText);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_19, 0, 0, 1, 1);

        frame_3 = new QFrame(tacticsPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        runAndGunButton = new QRadioButton(frame_3);
        runAndGunButton->setObjectName(QStringLiteral("runAndGunButton"));
        runAndGunButton->setStyleSheet(QStringLiteral("color:white;"));
        runAndGunButton->setChecked(false);

        gridLayout_11->addWidget(runAndGunButton, 0, 0, 1, 1);

        positionAttackButton = new QRadioButton(frame_3);
        positionAttackButton->setObjectName(QStringLiteral("positionAttackButton"));
        positionAttackButton->setStyleSheet(QStringLiteral("color:white;"));
        positionAttackButton->setChecked(true);

        gridLayout_11->addWidget(positionAttackButton, 0, 1, 1, 1);


        gridLayout_10->addWidget(frame_3, 1, 0, 1, 1);

        label_20 = new QLabel(tacticsPage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("color:white;"));
        label_20->setTextFormat(Qt::RichText);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_20, 2, 0, 1, 1);

        frame_4 = new QFrame(tacticsPage);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_4);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        manToManButton = new QRadioButton(frame_4);
        manToManButton->setObjectName(QStringLiteral("manToManButton"));
        manToManButton->setStyleSheet(QStringLiteral("color:white;"));
        manToManButton->setChecked(true);

        gridLayout_12->addWidget(manToManButton, 0, 0, 1, 1);

        zoneButton = new QRadioButton(frame_4);
        zoneButton->setObjectName(QStringLiteral("zoneButton"));
        zoneButton->setStyleSheet(QStringLiteral("color:white;"));

        gridLayout_12->addWidget(zoneButton, 0, 1, 1, 1);


        gridLayout_10->addWidget(frame_4, 3, 0, 1, 1);

        gamePlayStackedWidget->addWidget(tacticsPage);
        nextGamePage = new QWidget();
        nextGamePage->setObjectName(QStringLiteral("nextGamePage"));
        gridLayout_9 = new QGridLayout(nextGamePage);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        roundLabel = new QLabel(nextGamePage);
        roundLabel->setObjectName(QStringLiteral("roundLabel"));
        roundLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Ubuntu\";\n"
"\n"
"background-color:rgb(239, 173, 124)"));
        roundLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(roundLabel, 0, 1, 1, 2);

        label_6 = new QLabel(nextGamePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_6, 1, 1, 1, 1);

        label_21 = new QLabel(nextGamePage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_21, 1, 2, 1, 1);

        label_7 = new QLabel(nextGamePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_9->addWidget(label_7, 2, 0, 1, 1);

        firstResultLabel = new QLabel(nextGamePage);
        firstResultLabel->setObjectName(QStringLiteral("firstResultLabel"));
        firstResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        firstResultLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(firstResultLabel, 2, 1, 1, 2);

        label_8 = new QLabel(nextGamePage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_9->addWidget(label_8, 3, 0, 1, 1);

        secondResultLabel = new QLabel(nextGamePage);
        secondResultLabel->setObjectName(QStringLiteral("secondResultLabel"));
        secondResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        secondResultLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(secondResultLabel, 3, 1, 1, 2);

        label_9 = new QLabel(nextGamePage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_9->addWidget(label_9, 4, 0, 1, 1);

        thirdResultLabel = new QLabel(nextGamePage);
        thirdResultLabel->setObjectName(QStringLiteral("thirdResultLabel"));
        thirdResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        thirdResultLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(thirdResultLabel, 4, 1, 1, 2);

        label_10 = new QLabel(nextGamePage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));

        gridLayout_9->addWidget(label_10, 5, 0, 1, 1);

        fourthResultLabel = new QLabel(nextGamePage);
        fourthResultLabel->setObjectName(QStringLiteral("fourthResultLabel"));
        fourthResultLabel->setStyleSheet(QStringLiteral("background-color:rgb(239, 173, 124)"));
        fourthResultLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(fourthResultLabel, 5, 1, 1, 2);

        gamePlayStackedWidget->addWidget(nextGamePage);

        gridLayout_4->addWidget(gamePlayStackedWidget, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        stackedWidget->addWidget(gamePlay);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        gamePlayStackedWidget->setCurrentIndex(6);


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
        nextGameButton->setText(QApplication::translate("MainWindow", "NEXT GAME", Q_NULLPTR));
        tacticsButton->setText(QApplication::translate("MainWindow", "TACTICS", Q_NULLPTR));
        homeButton->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        myTeamButton->setText(QApplication::translate("MainWindow", "MY TEAM", Q_NULLPTR));
        standingsButton->setText(QApplication::translate("MainWindow", "STANDINGS", Q_NULLPTR));
        scheduleButton->setText(QApplication::translate("MainWindow", "SCHEDULE", Q_NULLPTR));
        transferMarketButton->setText(QApplication::translate("MainWindow", "TRANSFER MARKET", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "HOME PAGE", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "NAME", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "SURNAME", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "NATIONALITY", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "TEAM NAME", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "CURRENT BUDGET", Q_NULLPTR));
        nameLabel_2->setText(QString());
        surnameLabel_2->setText(QString());
        nationalityLabel->setText(QString());
        teamNameLabel->setText(QString());
        currentBudgetLabel->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "MY TEAM PAGE", Q_NULLPTR));
        sellPlayerButton->setText(QApplication::translate("MainWindow", "SELL PLAYER", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "PO", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "NAME", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "POINTS", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        firstPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        firstPlacePoints->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        secondPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        secondPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        thirdPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        thirdPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        fourthPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        fourthPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        fifthPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        fifthPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        sixthPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        sixthPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        seventhPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        seventhPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        eighthPlaceName->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        eighthPlacePoints->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "AWAY", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "GAME 1", Q_NULLPTR));
        firstScheduleLabel->setText(QApplication::translate("MainWindow", "GAME 1 SCHEDULE", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "GAME 2", Q_NULLPTR));
        secondScheduleLabel->setText(QApplication::translate("MainWindow", "GAME 2 SCHEDULE", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "GAME 3", Q_NULLPTR));
        thirdScheduleLabel->setText(QApplication::translate("MainWindow", "GAME 3 SCHEDULE", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "GAME 4", Q_NULLPTR));
        fourthScheduleLabel->setText(QApplication::translate("MainWindow", "GAME 4 SCHEDULE", Q_NULLPTR));
        roundScheduleLabel->setText(QApplication::translate("MainWindow", "ROUND COUNTER", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        nextRoundButton->setText(QApplication::translate("MainWindow", "NEXT", Q_NULLPTR));
        previousRoundButton->setText(QApplication::translate("MainWindow", "PREVIOUS", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TRANSFER MARKET", Q_NULLPTR));
        buyButton->setText(QApplication::translate("MainWindow", "BUY", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">ATTACK</span></p></body></html>", Q_NULLPTR));
        runAndGunButton->setText(QApplication::translate("MainWindow", "RUN AND GUN", Q_NULLPTR));
        positionAttackButton->setText(QApplication::translate("MainWindow", "POSITION", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">DEFENCE</span></p></body></html>", Q_NULLPTR));
        manToManButton->setText(QApplication::translate("MainWindow", "MAN TO MAN", Q_NULLPTR));
        zoneButton->setText(QApplication::translate("MainWindow", "ZONE", Q_NULLPTR));
        roundLabel->setText(QApplication::translate("MainWindow", "ROUND", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "HOME", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "AWAY", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "GAME 1", Q_NULLPTR));
        firstResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "GAME 2", Q_NULLPTR));
        secondResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "GAME 3", Q_NULLPTR));
        thirdResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "GAME 4", Q_NULLPTR));
        fourthResultLabel->setText(QApplication::translate("MainWindow", "GAME 1 RESULT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
