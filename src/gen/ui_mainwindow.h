/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_program;
    QAction *actionOpen_project_homepage;
    QAction *actionLoad_configuration;
    QAction *actionExport_configuration;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *applyAllButton;
    QPushButton *exitButton;
    QTabWidget *tabWidget;
    QWidget *controlTab;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_15;
    QLabel *label_4;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_2;
    QPushButton *checkDomainButton;
    QPushButton *toggleDomainButton;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *controlToggleButton;
    QPushButton *controlRestartButton;
    QPushButton *pushButton_7;
    QPushButton *checkForUpdatesButton;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_13;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLabel *osName;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_4;
    QLabel *softwareName;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_4;
    QWidget *settingsTab;
    QGridLayout *gridLayout_5;
    QToolBox *toolBox;
    QWidget *preferencesToolbox;
    QFormLayout *formLayout_7;
    QFormLayout *formLayout_6;
    QLabel *label_10;
    QGridLayout *gridLayout_16;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_18;
    QCheckBox *enableStatsUpload;
    QLabel *label_19;
    QCheckBox *checkBox_2;
    QWidget *httpToolbox;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QCheckBox *enableHttpResponder;
    QLineEdit *httpResponderStatusText;
    QLabel *httpResponderStatusCodeLabel;
    QLineEdit *httpResponderStatusCode;
    QLabel *httpResponderStatusTextLabel;
    QLabel *enableHttpResponderLabel;
    QWidget *serviceToolbox;
    QGridLayout *gridLayout_23;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QGridLayout *gridLayout_3;
    QLineEdit *serviceIPAddress;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QLineEdit *servicePort;
    QLabel *label_17;
    QGridLayout *gridLayout_22;
    QLineEdit *servicePassword;
    QCheckBox *disableServicePassword;
    QWidget *dnsProxyToolbox;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_20;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_19;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *dnsProxySoftware;
    QLabel *label_6;
    QGridLayout *gridLayout_4;
    QLineEdit *dnsServerPort;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *dnsPidfile;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *dnsProxyUser;
    QLineEdit *dnsProxyGroup;
    QLabel *label_3;
    QLineEdit *dnsProxyExecutable;
    QSpacerItem *verticalSpacer_4;
    QWidget *listsTab;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QFormLayout *formLayout_5;
    QFormLayout *formLayout_4;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QLabel *label_16;
    QLineEdit *lineEdit_8;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *domainsTab;
    QGridLayout *gridLayout_18;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_2;
    QListWidget *listWidget;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(600, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 500));
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName(QStringLiteral("actionAbout_program"));
        actionOpen_project_homepage = new QAction(MainWindow);
        actionOpen_project_homepage->setObjectName(QStringLiteral("actionOpen_project_homepage"));
        actionLoad_configuration = new QAction(MainWindow);
        actionLoad_configuration->setObjectName(QStringLiteral("actionLoad_configuration"));
        actionExport_configuration = new QAction(MainWindow);
        actionExport_configuration->setObjectName(QStringLiteral("actionExport_configuration"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        applyAllButton = new QPushButton(centralWidget);
        applyAllButton->setObjectName(QStringLiteral("applyAllButton"));

        horizontalLayout->addWidget(applyAllButton);

        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout->addWidget(exitButton);


        gridLayout_6->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(550, 400));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        controlTab = new QWidget();
        controlTab->setObjectName(QStringLiteral("controlTab"));
        gridLayout_10 = new QGridLayout(controlTab);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(controlTab);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_15 = new QGridLayout(widget);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_15->addWidget(label_4, 4, 0, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_15->addWidget(line_2, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_8->addWidget(lineEdit_2);

        checkDomainButton = new QPushButton(widget);
        checkDomainButton->setObjectName(QStringLiteral("checkDomainButton"));

        horizontalLayout_8->addWidget(checkDomainButton);

        toggleDomainButton = new QPushButton(widget);
        toggleDomainButton->setObjectName(QStringLiteral("toggleDomainButton"));

        horizontalLayout_8->addWidget(toggleDomainButton);


        gridLayout_15->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);

        verticalLayout_5->addWidget(label_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        controlToggleButton = new QPushButton(widget);
        controlToggleButton->setObjectName(QStringLiteral("controlToggleButton"));

        horizontalLayout_4->addWidget(controlToggleButton);

        controlRestartButton = new QPushButton(widget);
        controlRestartButton->setObjectName(QStringLiteral("controlRestartButton"));

        horizontalLayout_4->addWidget(controlRestartButton);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        checkForUpdatesButton = new QPushButton(widget);
        checkForUpdatesButton->setObjectName(QStringLiteral("checkForUpdatesButton"));

        horizontalLayout_5->addWidget(checkForUpdatesButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_5);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_12);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_13->addWidget(label_8, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_13->addWidget(label_5, 1, 0, 1, 1);

        osName = new QLabel(widget);
        osName->setObjectName(QStringLiteral("osName"));

        gridLayout_13->addWidget(osName, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_13);


        verticalLayout_7->addLayout(verticalLayout_6);


        gridLayout_14->addLayout(verticalLayout_7, 1, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        softwareName = new QLabel(widget);
        softwareName->setObjectName(QStringLiteral("softwareName"));
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        softwareName->setFont(font3);

        verticalLayout_4->addWidget(softwareName);

        versionLabel = new QLabel(widget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));

        verticalLayout_4->addWidget(versionLabel);


        gridLayout_11->addLayout(verticalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_2, 1, 0, 1, 1);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_15->addWidget(line_4, 2, 0, 1, 1);


        verticalLayout_3->addWidget(widget);


        gridLayout_10->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(controlTab, QString());
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        gridLayout_5 = new QGridLayout(settingsTab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        toolBox = new QToolBox(settingsTab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy2);
        preferencesToolbox = new QWidget();
        preferencesToolbox->setObjectName(QStringLiteral("preferencesToolbox"));
        preferencesToolbox->setGeometry(QRect(0, 0, 248, 99));
        formLayout_7 = new QFormLayout(preferencesToolbox);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_10 = new QLabel(preferencesToolbox);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_10);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        comboBox = new QComboBox(preferencesToolbox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_16->addWidget(comboBox, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_8, 0, 1, 1, 1);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, gridLayout_16);

        label_18 = new QLabel(preferencesToolbox);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_18);

        enableStatsUpload = new QCheckBox(preferencesToolbox);
        enableStatsUpload->setObjectName(QStringLiteral("enableStatsUpload"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, enableStatsUpload);

        label_19 = new QLabel(preferencesToolbox);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_19);

        checkBox_2 = new QCheckBox(preferencesToolbox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, checkBox_2);


        formLayout_7->setLayout(0, QFormLayout::LabelRole, formLayout_6);

        toolBox->addItem(preferencesToolbox, QStringLiteral("Preferences"));
        httpToolbox = new QWidget();
        httpToolbox->setObjectName(QStringLiteral("httpToolbox"));
        httpToolbox->setGeometry(QRect(0, 0, 239, 117));
        gridLayout_2 = new QGridLayout(httpToolbox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        enableHttpResponder = new QCheckBox(httpToolbox);
        enableHttpResponder->setObjectName(QStringLiteral("enableHttpResponder"));

        formLayout->setWidget(1, QFormLayout::FieldRole, enableHttpResponder);

        httpResponderStatusText = new QLineEdit(httpToolbox);
        httpResponderStatusText->setObjectName(QStringLiteral("httpResponderStatusText"));
        httpResponderStatusText->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, httpResponderStatusText);

        httpResponderStatusCodeLabel = new QLabel(httpToolbox);
        httpResponderStatusCodeLabel->setObjectName(QStringLiteral("httpResponderStatusCodeLabel"));
        httpResponderStatusCodeLabel->setEnabled(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, httpResponderStatusCodeLabel);

        httpResponderStatusCode = new QLineEdit(httpToolbox);
        httpResponderStatusCode->setObjectName(QStringLiteral("httpResponderStatusCode"));
        httpResponderStatusCode->setEnabled(false);
        httpResponderStatusCode->setMinimumSize(QSize(50, 0));
        httpResponderStatusCode->setMaximumSize(QSize(50, 16777215));
        httpResponderStatusCode->setMaxLength(3);
        httpResponderStatusCode->setFrame(true);
        httpResponderStatusCode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        httpResponderStatusCode->setClearButtonEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, httpResponderStatusCode);

        httpResponderStatusTextLabel = new QLabel(httpToolbox);
        httpResponderStatusTextLabel->setObjectName(QStringLiteral("httpResponderStatusTextLabel"));
        httpResponderStatusTextLabel->setEnabled(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, httpResponderStatusTextLabel);

        enableHttpResponderLabel = new QLabel(httpToolbox);
        enableHttpResponderLabel->setObjectName(QStringLiteral("enableHttpResponderLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, enableHttpResponderLabel);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        toolBox->addItem(httpToolbox, QStringLiteral("HTTP Responder"));
        serviceToolbox = new QWidget();
        serviceToolbox->setObjectName(QStringLiteral("serviceToolbox"));
        serviceToolbox->setGeometry(QRect(0, 0, 560, 237));
        gridLayout_23 = new QGridLayout(serviceToolbox);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_14 = new QLabel(serviceToolbox);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_14);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        serviceIPAddress = new QLineEdit(serviceToolbox);
        serviceIPAddress->setObjectName(QStringLiteral("serviceIPAddress"));
        serviceIPAddress->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(serviceIPAddress, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 1, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, gridLayout_3);

        label = new QLabel(serviceToolbox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        servicePort = new QLineEdit(serviceToolbox);
        servicePort->setObjectName(QStringLiteral("servicePort"));
        servicePort->setMaximumSize(QSize(50, 16777215));
        servicePort->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, servicePort);

        label_17 = new QLabel(serviceToolbox);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_17);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        servicePassword = new QLineEdit(serviceToolbox);
        servicePassword->setObjectName(QStringLiteral("servicePassword"));
        servicePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_22->addWidget(servicePassword, 0, 0, 1, 1);

        disableServicePassword = new QCheckBox(serviceToolbox);
        disableServicePassword->setObjectName(QStringLiteral("disableServicePassword"));

        gridLayout_22->addWidget(disableServicePassword, 0, 1, 1, 1);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, gridLayout_22);


        gridLayout_23->addLayout(formLayout_2, 0, 0, 1, 1);

        toolBox->addItem(serviceToolbox, QStringLiteral("Service"));
        dnsProxyToolbox = new QWidget();
        dnsProxyToolbox->setObjectName(QStringLiteral("dnsProxyToolbox"));
        dnsProxyToolbox->setGeometry(QRect(0, 0, 365, 173));
        gridLayout_21 = new QGridLayout(dnsProxyToolbox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_2 = new QLabel(dnsProxyToolbox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(6);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        dnsProxySoftware = new QComboBox(dnsProxyToolbox);
        dnsProxySoftware->setObjectName(QStringLiteral("dnsProxySoftware"));

        gridLayout_19->addWidget(dnsProxySoftware, 0, 0, 1, 1);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, gridLayout_19);

        label_6 = new QLabel(dnsProxyToolbox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        dnsServerPort = new QLineEdit(dnsProxyToolbox);
        dnsServerPort->setObjectName(QStringLiteral("dnsServerPort"));
        dnsServerPort->setMaximumSize(QSize(60, 16777215));
        dnsServerPort->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(dnsServerPort, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        label_11 = new QLabel(dnsProxyToolbox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 1, 1, 1);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, gridLayout_4);

        label_12 = new QLabel(dnsProxyToolbox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        dnsPidfile = new QLineEdit(dnsProxyToolbox);
        dnsPidfile->setObjectName(QStringLiteral("dnsPidfile"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, dnsPidfile);

        label_13 = new QLabel(dnsProxyToolbox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        dnsProxyUser = new QLineEdit(dnsProxyToolbox);
        dnsProxyUser->setObjectName(QStringLiteral("dnsProxyUser"));

        horizontalLayout_7->addWidget(dnsProxyUser);

        dnsProxyGroup = new QLineEdit(dnsProxyToolbox);
        dnsProxyGroup->setObjectName(QStringLiteral("dnsProxyGroup"));

        horizontalLayout_7->addWidget(dnsProxyGroup);


        formLayout_3->setLayout(4, QFormLayout::FieldRole, horizontalLayout_7);

        label_3 = new QLabel(dnsProxyToolbox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        dnsProxyExecutable = new QLineEdit(dnsProxyToolbox);
        dnsProxyExecutable->setObjectName(QStringLiteral("dnsProxyExecutable"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dnsProxyExecutable);


        gridLayout_20->addLayout(formLayout_3, 0, 0, 2, 2);


        gridLayout_21->addLayout(gridLayout_20, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_4, 4, 0, 1, 1);

        toolBox->addItem(dnsProxyToolbox, QStringLiteral("DNS proxy (advanced)"));

        gridLayout_5->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(settingsTab, QString());
        listsTab = new QWidget();
        listsTab->setObjectName(QStringLiteral("listsTab"));
        gridLayout_9 = new QGridLayout(listsTab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableWidget = new QTableWidget(listsTab);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_8->addWidget(tableWidget, 0, 0, 1, 1);

        groupBox = new QGroupBox(listsTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_16);

        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_8);


        formLayout_5->setLayout(0, QFormLayout::SpanningRole, formLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        formLayout_5->setLayout(1, QFormLayout::FieldRole, gridLayout);


        gridLayout_7->addLayout(formLayout_5, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(listsTab, QString());
        domainsTab = new QWidget();
        domainsTab->setObjectName(QStringLiteral("domainsTab"));
        gridLayout_18 = new QGridLayout(domainsTab);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_2 = new QComboBox(domainsTab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        listWidget = new QListWidget(domainsTab);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(domainsTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_17->addWidget(pushButton_2, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_17);


        gridLayout_18->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(domainsTab, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sizePolicy1.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy1);
        statusBar->setMinimumSize(QSize(0, 0));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 20));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout_program);
        menuAbout->addAction(actionOpen_project_homepage);
        menuFile->addAction(actionLoad_configuration);
        menuFile->addAction(actionExport_configuration);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(enableHttpResponder, SIGNAL(toggled(bool)), httpResponderStatusCode, SLOT(setEnabled(bool)));
        QObject::connect(enableHttpResponder, SIGNAL(toggled(bool)), httpResponderStatusText, SLOT(setEnabled(bool)));
        QObject::connect(exitButton, SIGNAL(released()), MainWindow, SLOT(close()));
        QObject::connect(disableServicePassword, SIGNAL(toggled(bool)), servicePassword, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AdBlocker", "main"));
        actionAbout_program->setText(QApplication::translate("MainWindow", "About", 0));
        actionOpen_project_homepage->setText(QApplication::translate("MainWindow", "Open project homepage", 0));
        actionLoad_configuration->setText(QApplication::translate("MainWindow", "Load configuration", 0));
        actionExport_configuration->setText(QApplication::translate("MainWindow", "Export configuration", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Close", 0));
        applyAllButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_4->setText(QApplication::translate("MainWindow", "Resolves to:", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Enter domain or URL", 0));
        checkDomainButton->setText(QApplication::translate("MainWindow", "Check", 0));
        toggleDomainButton->setText(QApplication::translate("MainWindow", "Block/Unblock", 0));
        label_9->setText(QApplication::translate("MainWindow", "Service control", 0));
        controlToggleButton->setText(QApplication::translate("MainWindow", "Suspend blocking", 0));
        controlRestartButton->setText(QApplication::translate("MainWindow", "Restart service", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Flush dns", 0));
        checkForUpdatesButton->setText(QApplication::translate("MainWindow", "Check for updates", 0));
        label_7->setText(QApplication::translate("MainWindow", "Current status", 0));
        label_8->setText(QApplication::translate("MainWindow", "unknown", 0));
        label_5->setText(QApplication::translate("MainWindow", "Ad blocking service:", 0));
        osName->setText(QApplication::translate("MainWindow", "OS", 0));
        softwareName->setText(QApplication::translate("MainWindow", "DNSBlocker", 0));
        versionLabel->setText(QApplication::translate("MainWindow", "UI Version:", 0));
        tabWidget->setTabText(tabWidget->indexOf(controlTab), QApplication::translate("MainWindow", "Control", 0));
        label_10->setText(QApplication::translate("MainWindow", "Update blocking rules:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Never", 0)
         << QApplication::translate("MainWindow", "Daily", 0)
         << QApplication::translate("MainWindow", "Weekly", 0)
        );
        label_18->setText(QApplication::translate("MainWindow", "Domain stats upload", 0));
        enableStatsUpload->setText(QApplication::translate("MainWindow", "Enable", 0));
        label_19->setText(QApplication::translate("MainWindow", "Stats unique id", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Enable", 0));
        toolBox->setItemText(toolBox->indexOf(preferencesToolbox), QApplication::translate("MainWindow", "Preferences", 0));
        enableHttpResponder->setText(QString());
        httpResponderStatusText->setText(QApplication::translate("MainWindow", "Not found", 0));
        httpResponderStatusCodeLabel->setText(QApplication::translate("MainWindow", "HTTP response status code", 0));
        httpResponderStatusCode->setInputMask(QApplication::translate("MainWindow", "999", 0));
        httpResponderStatusCode->setText(QApplication::translate("MainWindow", "404", 0));
        httpResponderStatusTextLabel->setText(QApplication::translate("MainWindow", "HTTP response status text", 0));
        enableHttpResponderLabel->setText(QApplication::translate("MainWindow", "Enable http responder", 0));
        toolBox->setItemText(toolBox->indexOf(httpToolbox), QApplication::translate("MainWindow", "HTTP Responder", 0));
        label_14->setText(QApplication::translate("MainWindow", "Address", 0));
        serviceIPAddress->setPlaceholderText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        label->setText(QApplication::translate("MainWindow", "Service port", 0));
        servicePort->setInputMask(QApplication::translate("MainWindow", "99999", 0));
        servicePort->setText(QString());
        servicePort->setPlaceholderText(QApplication::translate("MainWindow", "7654", 0));
        label_17->setText(QApplication::translate("MainWindow", "Password", 0));
        disableServicePassword->setText(QApplication::translate("MainWindow", "Disable", 0));
        toolBox->setItemText(toolBox->indexOf(serviceToolbox), QApplication::translate("MainWindow", "Service", 0));
        label_2->setText(QApplication::translate("MainWindow", "DNS proxy software", 0));
        dnsProxySoftware->clear();
        dnsProxySoftware->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "unbound", 0)
         << QApplication::translate("MainWindow", "dnsmasq", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "DNS server port", 0));
        dnsServerPort->setInputMask(QApplication::translate("MainWindow", "99999", 0));
        dnsServerPort->setPlaceholderText(QApplication::translate("MainWindow", "53", 0));
        label_11->setText(QApplication::translate("MainWindow", "Requires redirecting traffic", 0));
        label_12->setText(QApplication::translate("MainWindow", "Pidfile", 0));
        dnsPidfile->setPlaceholderText(QApplication::translate("MainWindow", "Use default", 0));
        label_13->setText(QApplication::translate("MainWindow", "Run as", 0));
        dnsProxyUser->setPlaceholderText(QApplication::translate("MainWindow", "User", 0));
        dnsProxyGroup->setPlaceholderText(QApplication::translate("MainWindow", "Group", 0));
        label_3->setText(QApplication::translate("MainWindow", "DNS server executable", 0));
        dnsProxyExecutable->setPlaceholderText(QApplication::translate("MainWindow", "Find automatically", 0));
        toolBox->setItemText(toolBox->indexOf(dnsProxyToolbox), QApplication::translate("MainWindow", "DNS proxy (advanced)", 0));
        tabWidget->setTabText(tabWidget->indexOf(settingsTab), QApplication::translate("MainWindow", "Settings", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "URL", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Description", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Add list", 0));
        label_15->setText(QApplication::translate("MainWindow", "Name", 0));
        label_16->setText(QApplication::translate("MainWindow", "URL", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Add", 0));
        tabWidget->setTabText(tabWidget->indexOf(listsTab), QApplication::translate("MainWindow", "Lists", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "All lists", 0)
         << QApplication::translate("MainWindow", "Whitelisted", 0)
        );
        pushButton_2->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget->setTabText(tabWidget->indexOf(domainsTab), QApplication::translate("MainWindow", "Domains", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
