/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QGridLayout *gridLayout_16;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
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
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *dnsResolverToolbox;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_20;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_19;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *comboBox_4;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *runAsUser;
    QLineEdit *runAsGroup;
    QSpacerItem *verticalSpacer_4;
    QWidget *officialListsTab;
    QGridLayout *gridLayout;
    QListWidget *officialListsList;
    QWidget *manageDomainTab;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QWidget *importExportTab;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_18;
    QVBoxLayout *verticalLayout_10;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QStatusBar *statusBar;

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
        tabWidget->setMinimumSize(QSize(550, 430));
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
        preferencesToolbox->setGeometry(QRect(0, 0, 560, 267));
        gridLayout_16 = new QGridLayout(preferencesToolbox);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(preferencesToolbox);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        comboBox = new QComboBox(preferencesToolbox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_9->addWidget(comboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_8->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        gridLayout_16->addLayout(verticalLayout_8, 0, 0, 1, 1);

        toolBox->addItem(preferencesToolbox, QStringLiteral("Preferences"));
        httpToolbox = new QWidget();
        httpToolbox->setObjectName(QStringLiteral("httpToolbox"));
        httpToolbox->setGeometry(QRect(0, 0, 560, 296));
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
        httpResponderStatusCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        gridLayout_3 = new QGridLayout(serviceToolbox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(serviceToolbox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(serviceToolbox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(50, 16777215));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);


        gridLayout_3->addLayout(formLayout_2, 0, 0, 1, 1);

        toolBox->addItem(serviceToolbox, QStringLiteral("Service"));
        dnsResolverToolbox = new QWidget();
        dnsResolverToolbox->setObjectName(QStringLiteral("dnsResolverToolbox"));
        gridLayout_21 = new QGridLayout(dnsResolverToolbox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_2 = new QLabel(dnsResolverToolbox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(6);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        comboBox_4 = new QComboBox(dnsResolverToolbox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout_19->addWidget(comboBox_4, 0, 0, 1, 1);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, gridLayout_19);

        label_3 = new QLabel(dnsResolverToolbox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_4 = new QLineEdit(dnsResolverToolbox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_6 = new QLabel(dnsResolverToolbox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lineEdit_5 = new QLineEdit(dnsResolverToolbox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(60, 16777215));
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(lineEdit_5, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        label_11 = new QLabel(dnsResolverToolbox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 1, 1, 1);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, gridLayout_4);

        label_12 = new QLabel(dnsResolverToolbox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        lineEdit_6 = new QLineEdit(dnsResolverToolbox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_13 = new QLabel(dnsResolverToolbox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        runAsUser = new QLineEdit(dnsResolverToolbox);
        runAsUser->setObjectName(QStringLiteral("runAsUser"));

        horizontalLayout_7->addWidget(runAsUser);

        runAsGroup = new QLineEdit(dnsResolverToolbox);
        runAsGroup->setObjectName(QStringLiteral("runAsGroup"));

        horizontalLayout_7->addWidget(runAsGroup);


        formLayout_3->setLayout(4, QFormLayout::FieldRole, horizontalLayout_7);


        gridLayout_20->addLayout(formLayout_3, 0, 0, 2, 2);


        gridLayout_21->addLayout(gridLayout_20, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_21->addItem(verticalSpacer_4, 4, 0, 1, 1);

        toolBox->addItem(dnsResolverToolbox, QStringLiteral("DNS resolver (advanced)"));

        gridLayout_5->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(settingsTab, QString());
        officialListsTab = new QWidget();
        officialListsTab->setObjectName(QStringLiteral("officialListsTab"));
        gridLayout = new QGridLayout(officialListsTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        officialListsList = new QListWidget(officialListsTab);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        new QListWidgetItem(officialListsList);
        officialListsList->setObjectName(QStringLiteral("officialListsList"));
        officialListsList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(officialListsList, 0, 0, 1, 1);

        tabWidget->addTab(officialListsTab, QString());
        manageDomainTab = new QWidget();
        manageDomainTab->setObjectName(QStringLiteral("manageDomainTab"));
        gridLayout_9 = new QGridLayout(manageDomainTab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(manageDomainTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setAcceptDrops(true);
        listView->setAutoFillBackground(false);

        verticalLayout->addWidget(listView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_7->addLayout(verticalLayout, 2, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_9->addWidget(comboBox_2);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_9->addWidget(lineEdit_3);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout_9->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(manageDomainTab, QString());
        importExportTab = new QWidget();
        importExportTab->setObjectName(QStringLiteral("importExportTab"));
        gridLayout_17 = new QGridLayout(importExportTab);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        groupBox_3 = new QGroupBox(importExportTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        gridLayout_8->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_3, 0, 0, 1, 2);

        groupBox_4 = new QGroupBox(importExportTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_18 = new QGridLayout(groupBox_4);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        comboBox_3 = new QComboBox(groupBox_4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout_10->addWidget(comboBox_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_10->addLayout(horizontalLayout_3);


        gridLayout_18->addLayout(verticalLayout_10, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_4, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_3, 2, 0, 1, 1);

        tabWidget->addTab(importExportTab, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sizePolicy1.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy1);
        statusBar->setMinimumSize(QSize(0, 0));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(exitButton, SIGNAL(released()), MainWindow, SLOT(close()));
        QObject::connect(enableHttpResponder, SIGNAL(toggled(bool)), httpResponderStatusCode, SLOT(setEnabled(bool)));
        QObject::connect(enableHttpResponder, SIGNAL(toggled(bool)), httpResponderStatusText, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AdBlocker", "main"));
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
        versionLabel->setText(QApplication::translate("MainWindow", "Version:", 0));
        tabWidget->setTabText(tabWidget->indexOf(controlTab), QApplication::translate("MainWindow", "Control", 0));
        label_10->setText(QApplication::translate("MainWindow", "Update blocking rules:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Never", 0)
         << QApplication::translate("MainWindow", "Daily", 0)
         << QApplication::translate("MainWindow", "Weekly", 0)
        );
        toolBox->setItemText(toolBox->indexOf(preferencesToolbox), QApplication::translate("MainWindow", "Preferences", 0));
        enableHttpResponder->setText(QString());
        httpResponderStatusText->setText(QApplication::translate("MainWindow", "Not found", 0));
        httpResponderStatusCodeLabel->setText(QApplication::translate("MainWindow", "HTTP response status code", 0));
        httpResponderStatusCode->setInputMask(QApplication::translate("MainWindow", "999", 0));
        httpResponderStatusCode->setText(QApplication::translate("MainWindow", "404", 0));
        httpResponderStatusTextLabel->setText(QApplication::translate("MainWindow", "HTTP response status text", 0));
        enableHttpResponderLabel->setText(QApplication::translate("MainWindow", "Enable http responder", 0));
        toolBox->setItemText(toolBox->indexOf(httpToolbox), QApplication::translate("MainWindow", "HTTP Responder", 0));
        label->setText(QApplication::translate("MainWindow", "Service port", 0));
        lineEdit->setInputMask(QApplication::translate("MainWindow", "99999", 0));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "7654", 0));
        toolBox->setItemText(toolBox->indexOf(serviceToolbox), QApplication::translate("MainWindow", "Service", 0));
        label_2->setText(QApplication::translate("MainWindow", "DNS proxy software", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "unbound", 0)
         << QApplication::translate("MainWindow", "dnsmasq", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Executable", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "Find automatically", 0));
        label_6->setText(QApplication::translate("MainWindow", "DNS server port", 0));
        lineEdit_5->setInputMask(QApplication::translate("MainWindow", "99999", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "53", 0));
        label_11->setText(QApplication::translate("MainWindow", "Requires redirecting traffic", 0));
        label_12->setText(QApplication::translate("MainWindow", "Pidfile", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "Use default", 0));
        label_13->setText(QApplication::translate("MainWindow", "Run as", 0));
        runAsUser->setPlaceholderText(QApplication::translate("MainWindow", "User", 0));
        runAsGroup->setPlaceholderText(QApplication::translate("MainWindow", "Group", 0));
        toolBox->setItemText(toolBox->indexOf(dnsResolverToolbox), QApplication::translate("MainWindow", "DNS resolver (advanced)", 0));
        tabWidget->setTabText(tabWidget->indexOf(settingsTab), QApplication::translate("MainWindow", "Settings", 0));

        const bool __sortingEnabled = officialListsList->isSortingEnabled();
        officialListsList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = officialListsList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Minimal ad blocking list", 0));
        QListWidgetItem *___qlistwidgetitem1 = officialListsList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Standard ad blocking list", 0));
        QListWidgetItem *___qlistwidgetitem2 = officialListsList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Extended ad blocking list", 0));
        QListWidgetItem *___qlistwidgetitem3 = officialListsList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Polish", 0));
        QListWidgetItem *___qlistwidgetitem4 = officialListsList->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "English", 0));
        QListWidgetItem *___qlistwidgetitem5 = officialListsList->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "German", 0));
        QListWidgetItem *___qlistwidgetitem6 = officialListsList->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Google block", 0));
        QListWidgetItem *___qlistwidgetitem7 = officialListsList->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "Facebook block", 0));
        QListWidgetItem *___qlistwidgetitem8 = officialListsList->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "Social block", 0));
        officialListsList->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(officialListsTab), QApplication::translate("MainWindow", "Official lists", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Currently blocked domains", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "Create custom list", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Remove selected", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Filter", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "-- All lists --", 0)
        );
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "Domain name", 0));
        tabWidget->setTabText(tabWidget->indexOf(manageDomainTab), QApplication::translate("MainWindow", "Edit domains", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Full configuration (including lists)", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Import", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Export", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Lists only", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Export", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Import from file", 0));
        tabWidget->setTabText(tabWidget->indexOf(importExportTab), QApplication::translate("MainWindow", "Import/Export", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
