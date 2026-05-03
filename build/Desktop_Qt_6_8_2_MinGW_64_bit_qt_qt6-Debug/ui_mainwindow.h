/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qlineeditwp.h>
#include "qflightplantable.h"
#include "qframeclickable.h"
#include "qlabelclick.h"
#include "qsearchlist.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImport_X_Plane_FMS;
    QAction *actionExit;
    QAction *actionX_Plane_folder;
    QAction *actionPrint;
    QAction *actionExport_X_Plane_FMS;
    QAction *actionSave_XNVU_flightplan;
    QAction *actionLoad_XNVU_flightplan;
    QAction *actionOptions;
    QAction *actionXNVU_library;
    QAction *actionShow_feet;
    QAction *actionColumn;
    QAction *actionShow_waypoint_number;
    QAction *actionShow_identifier;
    QAction *actionShow_type;
    QAction *actionShow_Altitude;
    QAction *actionShow_Latitude;
    QAction *actionShow_Longitude;
    QAction *actionShow_MD;
    QAction *actionShow_OZMPUv;
    QAction *actionShow_OZMPUp;
    QAction *actionShow_Pv;
    QAction *actionShow_Pp;
    QAction *actionShow_MPU;
    QAction *actionShow_IPU;
    QAction *actionShow_S;
    QAction *actionShow_Spas;
    QAction *actionShow_Srem;
    QAction *actionShow_Sm;
    QAction *actionShow_Zm;
    QAction *actionShow_Map_angle;
    QAction *actionShow_A_targ;
    QAction *actionShow_D_targ;
    QAction *actionColumns_2;
    QAction *actionExport_to_PDF;
    QAction *actionNightmode_print_export;
    QAction *actionFMS;
    QAction *actionDistance_as_NM;
    QAction *actionImport_X_Plane_FMS_2;
    QAction *actionKLN_90B;
    QAction *actionPrint_2;
    QAction *actionPrint_to_PDF;
    QAction *actionExport_to_FMS;
    QAction *actionExport_to_KLN90B;
    QAction *actionNightmode;
    QAction *actionAltitude_in_feet;
    QAction *actionDistance_in_NM;
    QAction *actionPrint_settings;
    QAction *actionAutogenerate_correction_beacons;
    QAction *actionAt_last_page;
    QAction *actionAt_every_page;
    QAction *actionDo_not_show;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelDirectTo;
    QLineEditWP *lineEdit_DTTo;
    QLabel *labelFromCourse;
    QLineEditWP *lineEdit_DTCourseFrom;
    QLineEditWP *lineEdit_DTCourseTo;
    QDoubleSpinBox *doubleSpinBox_DTCourseDistRem;
    QPushButton *pushButtonDTInsert;
    QSpacerItem *horizontalSpacer_2;
    QFlightplanTable *tableWidget;
    QLineEdit *lineEditRoute;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonRouteInsertBefore;
    QPushButton *pushButtonRouteReplace;
    QPushButton *pushButtonRouteInsertAfter;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonDeleteWaypoint;
    QPushButton *pushButton_ClearFlightplan;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_alignWPS;
    QLabel *label_alignFMS;
    QFrameClickable *frameDescription;
    QLabel *labelWPType;
    QLabel *labelIWPName2;
    QLabel *labelWPLatlon;
    QLabel *labelWPNote;
    QLabel *labelWPMagVar;
    QLabel *labelWPType2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_showAirports;
    QPushButton *pushButton_showFix;
    QPushButton *pushButton_showVORDME;
    QPushButton *pushButton_showVOR;
    QPushButton *pushButton_showRSBN;
    QPushButton *pushButton_showAIRAC_Airways;
    QPushButton *pushButton_showNDB;
    QPushButton *pushButton_showDME;
    QPushButton *pushButton_showXNVU;
    QSearchList *listWidget;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonInsertBefore;
    QPushButton *pushButtonReplace;
    QPushButton *pushButtonInsertAfter;
    QGridLayout *gridLayout_2;
    QLabelClick *labelTWC;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateEdit;
    QDoubleSpinBox *doubleSpinBox_MACH;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_TWC;
    QLabelClick *labelCruise;
    QDoubleSpinBox *doubleSpinBox_ISA;
    QLabelClick *labelFlightLevel;
    QDoubleSpinBox *doubleSpinBox_VS;
    QLabelClick *labelVS;
    QLabel *labelFork;
    QLabel *labelDate;
    QPushButton *pushButtonSetDate;
    QLabelClick *labelTOD;
    QDoubleSpinBox *doubleSpinBoxFL;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuView;
    QMenu *menuImport;
    QMenu *menuExport_Print;
    QMenu *menuShow_summary;
    QMenu *menuUtils;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2013, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"#centralWidget, #labelCruise, #labelVS, #label_3, #labelTWC, #labelInsertRoute, #menuBar, #mainToolBar, #statusBar, #menuFile, #menuImport, #menuExport_Print, #menuSettings, #menuView\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"	background: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"	background: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"	background: rgb(200, 200, 0);\n"
"}\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"	background: rgb(200, 200, 0);\n"
"}\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"	background: rgb(200, 200, 0);\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"	background: rgb(200, 200, 0);\n"
"}\n"
"\n"
"#frameDescription, #labelFork, #labelAltitude, #labelTOD\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"#labelIWPName2, "
                        "#labelWPLatlon, #labelWPMagVar, #labelWPNote, #labelWPType, #labelWPType2, #labelFlightLevel, #labelDate, #labelDirectTo, #labelFromCourse\n"
"{\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"#label_alignATS, #label_alignEarthNav, #label_alignWPS, #label_alignFMS\n"
"{\n"
"	background-color: rgb(100, 100, 0);\n"
"	color: rgb(200, 200, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(200, 200, 0);\n"
"}\n"
"\n"
"#tableWidget, #listWidget\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"#listWidget::item:selected, #menuBar::item:selected, #tableWidget::item:selected\n"
"{\n"
"	background-color: rgb(107, 239, 0);\n"
"	color: rgb(0, 30, 0);\n"
"}\n"
"\n"
"#pushButtonInsertAfter, #pushButtonInsertBefore, #pushButtonReplace, #pushButtonRouteInsertAfter, #pushButtonRouteReplace, #pushButtonRouteInsertBefore, #pushButton_ClearFlightplan, #pushButton_showAIRAC_Airports, #pushButton_showAIRAC_Airways, #pushButton_sho"
                        "wAIRAC_Navaids, #pushButton_showAIRAC_Fixes, #pushButton_showAirports, #pushButton_showDME, #pushButton_showEarthNav, #pushButton_showFix, #pushButton_showNDB, #pushButton_showRSBN, #pushButton_showVOR, #pushButton_showVORDME, #pushButton_showXNVU, #pushButtonSetFL, #pushButtonSetDate, #pushButtonDeleteWaypoint, #pushButtonDirectTo, #pushButtonDTInsert\n"
"{\n"
"	background-color: rgb(73, 163, 0);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"#lineEdit, #lineEditRoute, #lineEdit_FlightLevel, #doubleSpinBoxFL, #dateEdit, #lineEdit_DTCourseFrom, #lineEdit_DTCourseTo, #lineEdit_DTTo, #doubleSpinBox_DTCourseDistRem, #doubleSpinBox_MACH, #doubleSpinBox_VS, #doubleSpinBox_ISA, #doubleSpinBox_TWC\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"	background-color: rgb(107, 239, 0);\n"
"	color: rgb(0, "
                        "0, 0);\n"
"}\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"	background-color: rgb(0, 15, 0);\n"
"	color: rgb(27, 159, 0);;\n"
"}\n"
""));
        actionImport_X_Plane_FMS = new QAction(MainWindow);
        actionImport_X_Plane_FMS->setObjectName("actionImport_X_Plane_FMS");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionX_Plane_folder = new QAction(MainWindow);
        actionX_Plane_folder->setObjectName("actionX_Plane_folder");
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        actionExport_X_Plane_FMS = new QAction(MainWindow);
        actionExport_X_Plane_FMS->setObjectName("actionExport_X_Plane_FMS");
        actionSave_XNVU_flightplan = new QAction(MainWindow);
        actionSave_XNVU_flightplan->setObjectName("actionSave_XNVU_flightplan");
        actionLoad_XNVU_flightplan = new QAction(MainWindow);
        actionLoad_XNVU_flightplan->setObjectName("actionLoad_XNVU_flightplan");
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName("actionOptions");
        actionXNVU_library = new QAction(MainWindow);
        actionXNVU_library->setObjectName("actionXNVU_library");
        actionShow_feet = new QAction(MainWindow);
        actionShow_feet->setObjectName("actionShow_feet");
        actionShow_feet->setCheckable(true);
        actionColumn = new QAction(MainWindow);
        actionColumn->setObjectName("actionColumn");
        actionShow_waypoint_number = new QAction(MainWindow);
        actionShow_waypoint_number->setObjectName("actionShow_waypoint_number");
        actionShow_waypoint_number->setCheckable(true);
        actionShow_identifier = new QAction(MainWindow);
        actionShow_identifier->setObjectName("actionShow_identifier");
        actionShow_identifier->setCheckable(true);
        actionShow_type = new QAction(MainWindow);
        actionShow_type->setObjectName("actionShow_type");
        actionShow_type->setCheckable(true);
        actionShow_Altitude = new QAction(MainWindow);
        actionShow_Altitude->setObjectName("actionShow_Altitude");
        actionShow_Altitude->setCheckable(true);
        actionShow_Latitude = new QAction(MainWindow);
        actionShow_Latitude->setObjectName("actionShow_Latitude");
        actionShow_Latitude->setCheckable(true);
        actionShow_Longitude = new QAction(MainWindow);
        actionShow_Longitude->setObjectName("actionShow_Longitude");
        actionShow_Longitude->setCheckable(true);
        actionShow_MD = new QAction(MainWindow);
        actionShow_MD->setObjectName("actionShow_MD");
        actionShow_MD->setCheckable(true);
        actionShow_OZMPUv = new QAction(MainWindow);
        actionShow_OZMPUv->setObjectName("actionShow_OZMPUv");
        actionShow_OZMPUv->setCheckable(true);
        actionShow_OZMPUp = new QAction(MainWindow);
        actionShow_OZMPUp->setObjectName("actionShow_OZMPUp");
        actionShow_OZMPUp->setCheckable(true);
        actionShow_Pv = new QAction(MainWindow);
        actionShow_Pv->setObjectName("actionShow_Pv");
        actionShow_Pv->setCheckable(true);
        actionShow_Pp = new QAction(MainWindow);
        actionShow_Pp->setObjectName("actionShow_Pp");
        actionShow_Pp->setCheckable(true);
        actionShow_MPU = new QAction(MainWindow);
        actionShow_MPU->setObjectName("actionShow_MPU");
        actionShow_MPU->setCheckable(true);
        actionShow_IPU = new QAction(MainWindow);
        actionShow_IPU->setObjectName("actionShow_IPU");
        actionShow_IPU->setCheckable(true);
        actionShow_S = new QAction(MainWindow);
        actionShow_S->setObjectName("actionShow_S");
        actionShow_S->setCheckable(true);
        actionShow_Spas = new QAction(MainWindow);
        actionShow_Spas->setObjectName("actionShow_Spas");
        actionShow_Spas->setCheckable(true);
        actionShow_Srem = new QAction(MainWindow);
        actionShow_Srem->setObjectName("actionShow_Srem");
        actionShow_Srem->setCheckable(true);
        actionShow_Sm = new QAction(MainWindow);
        actionShow_Sm->setObjectName("actionShow_Sm");
        actionShow_Sm->setCheckable(true);
        actionShow_Zm = new QAction(MainWindow);
        actionShow_Zm->setObjectName("actionShow_Zm");
        actionShow_Zm->setCheckable(true);
        actionShow_Map_angle = new QAction(MainWindow);
        actionShow_Map_angle->setObjectName("actionShow_Map_angle");
        actionShow_Map_angle->setCheckable(true);
        actionShow_A_targ = new QAction(MainWindow);
        actionShow_A_targ->setObjectName("actionShow_A_targ");
        actionShow_A_targ->setCheckable(true);
        actionShow_D_targ = new QAction(MainWindow);
        actionShow_D_targ->setObjectName("actionShow_D_targ");
        actionShow_D_targ->setCheckable(true);
        actionColumns_2 = new QAction(MainWindow);
        actionColumns_2->setObjectName("actionColumns_2");
        actionExport_to_PDF = new QAction(MainWindow);
        actionExport_to_PDF->setObjectName("actionExport_to_PDF");
        actionNightmode_print_export = new QAction(MainWindow);
        actionNightmode_print_export->setObjectName("actionNightmode_print_export");
        actionNightmode_print_export->setCheckable(true);
        actionFMS = new QAction(MainWindow);
        actionFMS->setObjectName("actionFMS");
        actionDistance_as_NM = new QAction(MainWindow);
        actionDistance_as_NM->setObjectName("actionDistance_as_NM");
        actionImport_X_Plane_FMS_2 = new QAction(MainWindow);
        actionImport_X_Plane_FMS_2->setObjectName("actionImport_X_Plane_FMS_2");
        actionKLN_90B = new QAction(MainWindow);
        actionKLN_90B->setObjectName("actionKLN_90B");
        actionPrint_2 = new QAction(MainWindow);
        actionPrint_2->setObjectName("actionPrint_2");
        actionPrint_to_PDF = new QAction(MainWindow);
        actionPrint_to_PDF->setObjectName("actionPrint_to_PDF");
        actionExport_to_FMS = new QAction(MainWindow);
        actionExport_to_FMS->setObjectName("actionExport_to_FMS");
        actionExport_to_KLN90B = new QAction(MainWindow);
        actionExport_to_KLN90B->setObjectName("actionExport_to_KLN90B");
        actionNightmode = new QAction(MainWindow);
        actionNightmode->setObjectName("actionNightmode");
        actionNightmode->setCheckable(true);
        actionAltitude_in_feet = new QAction(MainWindow);
        actionAltitude_in_feet->setObjectName("actionAltitude_in_feet");
        actionAltitude_in_feet->setCheckable(true);
        actionDistance_in_NM = new QAction(MainWindow);
        actionDistance_in_NM->setObjectName("actionDistance_in_NM");
        actionDistance_in_NM->setCheckable(true);
        actionPrint_settings = new QAction(MainWindow);
        actionPrint_settings->setObjectName("actionPrint_settings");
        actionPrint_settings->setEnabled(false);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        actionPrint_settings->setFont(font1);
        actionAutogenerate_correction_beacons = new QAction(MainWindow);
        actionAutogenerate_correction_beacons->setObjectName("actionAutogenerate_correction_beacons");
        actionAt_last_page = new QAction(MainWindow);
        actionAt_last_page->setObjectName("actionAt_last_page");
        actionAt_last_page->setCheckable(true);
        actionAt_every_page = new QAction(MainWindow);
        actionAt_every_page->setObjectName("actionAt_every_page");
        actionAt_every_page->setCheckable(true);
        actionDo_not_show = new QAction(MainWindow);
        actionDo_not_show->setObjectName("actionDo_not_show");
        actionDo_not_show->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelDirectTo = new QLabel(centralWidget);
        labelDirectTo->setObjectName("labelDirectTo");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDirectTo->sizePolicy().hasHeightForWidth());
        labelDirectTo->setSizePolicy(sizePolicy1);
        labelDirectTo->setMinimumSize(QSize(0, 30));
        labelDirectTo->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_8->addWidget(labelDirectTo);

        lineEdit_DTTo = new QLineEditWP(centralWidget);
        lineEdit_DTTo->setObjectName("lineEdit_DTTo");
        sizePolicy1.setHeightForWidth(lineEdit_DTTo->sizePolicy().hasHeightForWidth());
        lineEdit_DTTo->setSizePolicy(sizePolicy1);
        lineEdit_DTTo->setMinimumSize(QSize(0, 30));
        lineEdit_DTTo->setMaximumSize(QSize(150, 16777215));
        lineEdit_DTTo->setLayoutDirection(Qt::LeftToRight);
        lineEdit_DTTo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_DTTo->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_DTTo);

        labelFromCourse = new QLabel(centralWidget);
        labelFromCourse->setObjectName("labelFromCourse");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFromCourse->sizePolicy().hasHeightForWidth());
        labelFromCourse->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(labelFromCourse);

        lineEdit_DTCourseFrom = new QLineEditWP(centralWidget);
        lineEdit_DTCourseFrom->setObjectName("lineEdit_DTCourseFrom");
        lineEdit_DTCourseFrom->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_DTCourseFrom->sizePolicy().hasHeightForWidth());
        lineEdit_DTCourseFrom->setSizePolicy(sizePolicy1);
        lineEdit_DTCourseFrom->setMinimumSize(QSize(0, 30));
        lineEdit_DTCourseFrom->setMaximumSize(QSize(150, 16777215));
        lineEdit_DTCourseFrom->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_DTCourseFrom);

        lineEdit_DTCourseTo = new QLineEditWP(centralWidget);
        lineEdit_DTCourseTo->setObjectName("lineEdit_DTCourseTo");
        sizePolicy1.setHeightForWidth(lineEdit_DTCourseTo->sizePolicy().hasHeightForWidth());
        lineEdit_DTCourseTo->setSizePolicy(sizePolicy1);
        lineEdit_DTCourseTo->setMinimumSize(QSize(0, 30));
        lineEdit_DTCourseTo->setMaximumSize(QSize(150, 16777215));
        lineEdit_DTCourseTo->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_DTCourseTo);

        doubleSpinBox_DTCourseDistRem = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_DTCourseDistRem->setObjectName("doubleSpinBox_DTCourseDistRem");
        sizePolicy1.setHeightForWidth(doubleSpinBox_DTCourseDistRem->sizePolicy().hasHeightForWidth());
        doubleSpinBox_DTCourseDistRem->setSizePolicy(sizePolicy1);
        doubleSpinBox_DTCourseDistRem->setMinimumSize(QSize(100, 30));
        doubleSpinBox_DTCourseDistRem->setMaximumSize(QSize(150, 16777215));
        doubleSpinBox_DTCourseDistRem->setDecimals(1);
        doubleSpinBox_DTCourseDistRem->setMinimum(-10000.000000000000000);
        doubleSpinBox_DTCourseDistRem->setMaximum(10000.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBox_DTCourseDistRem);

        pushButtonDTInsert = new QPushButton(centralWidget);
        pushButtonDTInsert->setObjectName("pushButtonDTInsert");

        horizontalLayout_8->addWidget(pushButtonDTInsert);

        horizontalSpacer_2 = new QSpacerItem(999999999, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        tableWidget = new QFlightplanTable(centralWidget);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setAutoFillBackground(false);
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragEnabled(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        lineEditRoute = new QLineEdit(centralWidget);
        lineEditRoute->setObjectName("lineEditRoute");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditRoute->sizePolicy().hasHeightForWidth());
        lineEditRoute->setSizePolicy(sizePolicy4);
        lineEditRoute->setMinimumSize(QSize(0, 30));
        lineEditRoute->setInputMethodHints(Qt::ImhNone);
        lineEditRoute->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEditRoute->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEditRoute);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButtonRouteInsertBefore = new QPushButton(centralWidget);
        pushButtonRouteInsertBefore->setObjectName("pushButtonRouteInsertBefore");
        sizePolicy4.setHeightForWidth(pushButtonRouteInsertBefore->sizePolicy().hasHeightForWidth());
        pushButtonRouteInsertBefore->setSizePolicy(sizePolicy4);
        pushButtonRouteInsertBefore->setMinimumSize(QSize(150, 0));
        pushButtonRouteInsertBefore->setMaximumSize(QSize(150, 16777215));
        pushButtonRouteInsertBefore->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(pushButtonRouteInsertBefore);

        pushButtonRouteReplace = new QPushButton(centralWidget);
        pushButtonRouteReplace->setObjectName("pushButtonRouteReplace");
        sizePolicy4.setHeightForWidth(pushButtonRouteReplace->sizePolicy().hasHeightForWidth());
        pushButtonRouteReplace->setSizePolicy(sizePolicy4);
        pushButtonRouteReplace->setMinimumSize(QSize(150, 0));
        pushButtonRouteReplace->setMaximumSize(QSize(150, 16777215));
        pushButtonRouteReplace->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(pushButtonRouteReplace);

        pushButtonRouteInsertAfter = new QPushButton(centralWidget);
        pushButtonRouteInsertAfter->setObjectName("pushButtonRouteInsertAfter");
        sizePolicy4.setHeightForWidth(pushButtonRouteInsertAfter->sizePolicy().hasHeightForWidth());
        pushButtonRouteInsertAfter->setSizePolicy(sizePolicy4);
        pushButtonRouteInsertAfter->setMinimumSize(QSize(150, 0));
        pushButtonRouteInsertAfter->setMaximumSize(QSize(150, 16777215));
        pushButtonRouteInsertAfter->setLayoutDirection(Qt::LeftToRight);
        pushButtonRouteInsertAfter->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(pushButtonRouteInsertAfter, 0, Qt::AlignLeft);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButtonDeleteWaypoint = new QPushButton(centralWidget);
        pushButtonDeleteWaypoint->setObjectName("pushButtonDeleteWaypoint");
        sizePolicy4.setHeightForWidth(pushButtonDeleteWaypoint->sizePolicy().hasHeightForWidth());
        pushButtonDeleteWaypoint->setSizePolicy(sizePolicy4);
        pushButtonDeleteWaypoint->setMinimumSize(QSize(150, 0));
        pushButtonDeleteWaypoint->setMaximumSize(QSize(150, 16777215));
        pushButtonDeleteWaypoint->setLayoutDirection(Qt::LeftToRight);
        pushButtonDeleteWaypoint->setAutoFillBackground(false);

        horizontalLayout_7->addWidget(pushButtonDeleteWaypoint, 0, Qt::AlignRight);

        pushButton_ClearFlightplan = new QPushButton(centralWidget);
        pushButton_ClearFlightplan->setObjectName("pushButton_ClearFlightplan");
        sizePolicy4.setHeightForWidth(pushButton_ClearFlightplan->sizePolicy().hasHeightForWidth());
        pushButton_ClearFlightplan->setSizePolicy(sizePolicy4);
        pushButton_ClearFlightplan->setMinimumSize(QSize(150, 0));
        pushButton_ClearFlightplan->setMaximumSize(QSize(150, 16777215));
        pushButton_ClearFlightplan->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(pushButton_ClearFlightplan);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 1, 0, 7, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label_alignWPS = new QLabel(centralWidget);
        label_alignWPS->setObjectName("label_alignWPS");

        horizontalLayout_4->addWidget(label_alignWPS);

        label_alignFMS = new QLabel(centralWidget);
        label_alignFMS->setObjectName("label_alignFMS");

        horizontalLayout_4->addWidget(label_alignFMS);


        verticalLayout_2->addLayout(horizontalLayout_4);

        frameDescription = new QFrameClickable(centralWidget);
        frameDescription->setObjectName("frameDescription");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frameDescription->sizePolicy().hasHeightForWidth());
        frameDescription->setSizePolicy(sizePolicy5);
        frameDescription->setMinimumSize(QSize(500, 200));
        frameDescription->setMaximumSize(QSize(500, 200));
        frameDescription->setFrameShape(QFrame::StyledPanel);
        frameDescription->setFrameShadow(QFrame::Raised);
        labelWPType = new QLabel(frameDescription);
        labelWPType->setObjectName("labelWPType");
        labelWPType->setGeometry(QRect(0, 40, 501, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setUnderline(false);
        labelWPType->setFont(font2);
        labelWPType->setStyleSheet(QString::fromUtf8(""));
        labelWPType->setAlignment(Qt::AlignCenter);
        labelIWPName2 = new QLabel(frameDescription);
        labelIWPName2->setObjectName("labelIWPName2");
        labelIWPName2->setGeometry(QRect(0, 70, 501, 31));
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelIWPName2->sizePolicy().hasHeightForWidth());
        labelIWPName2->setSizePolicy(sizePolicy6);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setUnderline(false);
        labelIWPName2->setFont(font3);
        labelIWPName2->setStyleSheet(QString::fromUtf8(""));
        labelIWPName2->setAlignment(Qt::AlignCenter);
        labelWPLatlon = new QLabel(frameDescription);
        labelWPLatlon->setObjectName("labelWPLatlon");
        labelWPLatlon->setGeometry(QRect(0, 100, 501, 31));
        sizePolicy6.setHeightForWidth(labelWPLatlon->sizePolicy().hasHeightForWidth());
        labelWPLatlon->setSizePolicy(sizePolicy6);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setUnderline(false);
        labelWPLatlon->setFont(font4);
        labelWPLatlon->setStyleSheet(QString::fromUtf8(""));
        labelWPLatlon->setAlignment(Qt::AlignCenter);
        labelWPNote = new QLabel(frameDescription);
        labelWPNote->setObjectName("labelWPNote");
        labelWPNote->setGeometry(QRect(0, 170, 501, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setItalic(true);
        font5.setUnderline(false);
        labelWPNote->setFont(font5);
        labelWPMagVar = new QLabel(frameDescription);
        labelWPMagVar->setObjectName("labelWPMagVar");
        labelWPMagVar->setGeometry(QRect(0, 140, 502, 27));
        sizePolicy.setHeightForWidth(labelWPMagVar->sizePolicy().hasHeightForWidth());
        labelWPMagVar->setSizePolicy(sizePolicy);
        labelWPMagVar->setFont(font4);
        labelWPMagVar->setStyleSheet(QString::fromUtf8(""));
        labelWPMagVar->setAlignment(Qt::AlignCenter);
        labelWPType2 = new QLabel(frameDescription);
        labelWPType2->setObjectName("labelWPType2");
        labelWPType2->setGeometry(QRect(10, 10, 491, 21));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setUnderline(true);
        labelWPType2->setFont(font6);
        labelWPType2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(frameDescription);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_showAirports = new QPushButton(centralWidget);
        pushButton_showAirports->setObjectName("pushButton_showAirports");
        pushButton_showAirports->setCheckable(true);
        pushButton_showAirports->setChecked(true);

        gridLayout_4->addWidget(pushButton_showAirports, 1, 0, 1, 1);

        pushButton_showFix = new QPushButton(centralWidget);
        pushButton_showFix->setObjectName("pushButton_showFix");
        pushButton_showFix->setCheckable(true);
        pushButton_showFix->setChecked(true);

        gridLayout_4->addWidget(pushButton_showFix, 1, 1, 1, 1);

        pushButton_showVORDME = new QPushButton(centralWidget);
        pushButton_showVORDME->setObjectName("pushButton_showVORDME");
        pushButton_showVORDME->setCheckable(true);
        pushButton_showVORDME->setChecked(true);

        gridLayout_4->addWidget(pushButton_showVORDME, 2, 0, 1, 1);

        pushButton_showVOR = new QPushButton(centralWidget);
        pushButton_showVOR->setObjectName("pushButton_showVOR");
        pushButton_showVOR->setCheckable(true);
        pushButton_showVOR->setChecked(true);

        gridLayout_4->addWidget(pushButton_showVOR, 2, 2, 1, 1);

        pushButton_showRSBN = new QPushButton(centralWidget);
        pushButton_showRSBN->setObjectName("pushButton_showRSBN");
        pushButton_showRSBN->setCheckable(true);
        pushButton_showRSBN->setChecked(true);

        gridLayout_4->addWidget(pushButton_showRSBN, 2, 1, 1, 1);

        pushButton_showAIRAC_Airways = new QPushButton(centralWidget);
        pushButton_showAIRAC_Airways->setObjectName("pushButton_showAIRAC_Airways");
        pushButton_showAIRAC_Airways->setCheckable(true);
        pushButton_showAIRAC_Airways->setChecked(true);

        gridLayout_4->addWidget(pushButton_showAIRAC_Airways, 1, 2, 1, 1);

        pushButton_showNDB = new QPushButton(centralWidget);
        pushButton_showNDB->setObjectName("pushButton_showNDB");
        pushButton_showNDB->setCheckable(true);
        pushButton_showNDB->setChecked(true);

        gridLayout_4->addWidget(pushButton_showNDB, 3, 0, 1, 1);

        pushButton_showDME = new QPushButton(centralWidget);
        pushButton_showDME->setObjectName("pushButton_showDME");
        pushButton_showDME->setCheckable(true);
        pushButton_showDME->setChecked(true);

        gridLayout_4->addWidget(pushButton_showDME, 3, 1, 1, 1);

        pushButton_showXNVU = new QPushButton(centralWidget);
        pushButton_showXNVU->setObjectName("pushButton_showXNVU");
        pushButton_showXNVU->setCheckable(true);
        pushButton_showXNVU->setChecked(true);

        gridLayout_4->addWidget(pushButton_showXNVU, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        listWidget = new QSearchList(centralWidget);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy7);
        listWidget->setMinimumSize(QSize(500, 30));
        listWidget->setMaximumSize(QSize(500, 16777215));
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setViewMode(QListView::ListMode);

        verticalLayout_2->addWidget(listWidget);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);
        lineEdit->setMinimumSize(QSize(500, 30));
        lineEdit->setMaximumSize(QSize(500, 30));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        pushButtonInsertBefore = new QPushButton(centralWidget);
        pushButtonInsertBefore->setObjectName("pushButtonInsertBefore");
        pushButtonInsertBefore->setMaximumSize(QSize(150, 16777215));
        pushButtonInsertBefore->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(pushButtonInsertBefore);

        pushButtonReplace = new QPushButton(centralWidget);
        pushButtonReplace->setObjectName("pushButtonReplace");
        pushButtonReplace->setMaximumSize(QSize(150, 16777215));
        pushButtonReplace->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(pushButtonReplace);

        pushButtonInsertAfter = new QPushButton(centralWidget);
        pushButtonInsertAfter->setObjectName("pushButtonInsertAfter");
        pushButtonInsertAfter->setMaximumSize(QSize(150, 16777215));
        pushButtonInsertAfter->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(pushButtonInsertAfter);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 8, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        labelTWC = new QLabelClick(centralWidget);
        labelTWC->setObjectName("labelTWC");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Gentium Basic")});
        font7.setPointSize(13);
        font7.setBold(true);
        labelTWC->setFont(font7);

        gridLayout_2->addWidget(labelTWC, 5, 13, 1, 1, Qt::AlignRight);

        horizontalSpacer = new QSpacerItem(999999999, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 6, 1, 1);

        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setMinimumSize(QSize(170, 30));
        dateEdit->setMaximumSize(QSize(170, 30));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Sans Serif")});
        font8.setPointSize(13);
        font8.setBold(false);
        dateEdit->setFont(font8);
        dateEdit->setCalendarPopup(false);

        gridLayout_2->addWidget(dateEdit, 5, 16, 1, 1);

        doubleSpinBox_MACH = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_MACH->setObjectName("doubleSpinBox_MACH");
        sizePolicy1.setHeightForWidth(doubleSpinBox_MACH->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MACH->setSizePolicy(sizePolicy1);
        doubleSpinBox_MACH->setMinimumSize(QSize(170, 30));
        doubleSpinBox_MACH->setMaximumSize(QSize(170, 16777215));
        QFont font9;
        font9.setPointSize(13);
        doubleSpinBox_MACH->setFont(font9);
        doubleSpinBox_MACH->setDecimals(2);
        doubleSpinBox_MACH->setMinimum(-10000.000000000000000);
        doubleSpinBox_MACH->setMaximum(10000.000000000000000);
        doubleSpinBox_MACH->setSingleStep(0.100000000000000);
        doubleSpinBox_MACH->setValue(0.800000000000000);

        gridLayout_2->addWidget(doubleSpinBox_MACH, 0, 14, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font7);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 15, 1, 1);

        doubleSpinBox_TWC = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_TWC->setObjectName("doubleSpinBox_TWC");
        sizePolicy1.setHeightForWidth(doubleSpinBox_TWC->sizePolicy().hasHeightForWidth());
        doubleSpinBox_TWC->setSizePolicy(sizePolicy1);
        doubleSpinBox_TWC->setMinimumSize(QSize(170, 30));
        doubleSpinBox_TWC->setMaximumSize(QSize(170, 16777215));
        doubleSpinBox_TWC->setFont(font9);
        doubleSpinBox_TWC->setDecimals(2);
        doubleSpinBox_TWC->setMinimum(-10000.000000000000000);
        doubleSpinBox_TWC->setMaximum(10000.000000000000000);
        doubleSpinBox_TWC->setSingleStep(1.000000000000000);
        doubleSpinBox_TWC->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_TWC, 5, 14, 1, 1);

        labelCruise = new QLabelClick(centralWidget);
        labelCruise->setObjectName("labelCruise");
        labelCruise->setFont(font7);

        gridLayout_2->addWidget(labelCruise, 0, 13, 1, 1, Qt::AlignRight);

        doubleSpinBox_ISA = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_ISA->setObjectName("doubleSpinBox_ISA");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(doubleSpinBox_ISA->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ISA->setSizePolicy(sizePolicy8);
        doubleSpinBox_ISA->setMinimumSize(QSize(170, 0));
        doubleSpinBox_ISA->setMaximumSize(QSize(170, 16777215));
        doubleSpinBox_ISA->setFont(font9);
        doubleSpinBox_ISA->setDecimals(1);
        doubleSpinBox_ISA->setMinimum(-10000.000000000000000);
        doubleSpinBox_ISA->setMaximum(10000.000000000000000);
        doubleSpinBox_ISA->setSingleStep(0.100000000000000);
        doubleSpinBox_ISA->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_ISA, 3, 16, 1, 1);

        labelFlightLevel = new QLabelClick(centralWidget);
        labelFlightLevel->setObjectName("labelFlightLevel");
        sizePolicy.setHeightForWidth(labelFlightLevel->sizePolicy().hasHeightForWidth());
        labelFlightLevel->setSizePolicy(sizePolicy);
        labelFlightLevel->setMaximumSize(QSize(150, 29));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Gentium Basic")});
        font10.setPointSize(13);
        font10.setBold(true);
        font10.setKerning(true);
        labelFlightLevel->setFont(font10);
        labelFlightLevel->setStyleSheet(QString::fromUtf8(""));
        labelFlightLevel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelFlightLevel, 0, 15, 1, 1);

        doubleSpinBox_VS = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_VS->setObjectName("doubleSpinBox_VS");
        sizePolicy1.setHeightForWidth(doubleSpinBox_VS->sizePolicy().hasHeightForWidth());
        doubleSpinBox_VS->setSizePolicy(sizePolicy1);
        doubleSpinBox_VS->setMinimumSize(QSize(170, 30));
        doubleSpinBox_VS->setMaximumSize(QSize(170, 16777215));
        doubleSpinBox_VS->setFont(font9);
        doubleSpinBox_VS->setDecimals(1);
        doubleSpinBox_VS->setMinimum(-10000.000000000000000);
        doubleSpinBox_VS->setMaximum(10000.000000000000000);
        doubleSpinBox_VS->setSingleStep(0.100000000000000);
        doubleSpinBox_VS->setValue(8.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_VS, 3, 14, 1, 1);

        labelVS = new QLabelClick(centralWidget);
        labelVS->setObjectName("labelVS");
        labelVS->setFont(font7);

        gridLayout_2->addWidget(labelVS, 3, 13, 1, 1, Qt::AlignRight);

        labelFork = new QLabel(centralWidget);
        labelFork->setObjectName("labelFork");
        sizePolicy.setHeightForWidth(labelFork->sizePolicy().hasHeightForWidth());
        labelFork->setSizePolicy(sizePolicy);
        labelFork->setMaximumSize(QSize(175, 16777215));
        labelFork->setBaseSize(QSize(0, 0));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Gentium Basic")});
        font11.setPointSize(16);
        font11.setBold(true);
        font11.setKerning(true);
        labelFork->setFont(font11);
        labelFork->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(labelFork, 0, 0, 1, 1);

        labelDate = new QLabel(centralWidget);
        labelDate->setObjectName("labelDate");
        labelDate->setMaximumSize(QSize(16777215, 29));
        labelDate->setFont(font7);

        gridLayout_2->addWidget(labelDate, 5, 15, 1, 1);

        pushButtonSetDate = new QPushButton(centralWidget);
        pushButtonSetDate->setObjectName("pushButtonSetDate");
        pushButtonSetDate->setMaximumSize(QSize(75, 16777215));
        QFont font12;
        font12.setBold(true);
        pushButtonSetDate->setFont(font12);

        gridLayout_2->addWidget(pushButtonSetDate, 3, 17, 1, 1);

        labelTOD = new QLabelClick(centralWidget);
        labelTOD->setObjectName("labelTOD");
        sizePolicy.setHeightForWidth(labelTOD->sizePolicy().hasHeightForWidth());
        labelTOD->setSizePolicy(sizePolicy);
        labelTOD->setMaximumSize(QSize(16777215, 16777215));
        labelTOD->setBaseSize(QSize(0, 0));
        labelTOD->setFont(font11);
        labelTOD->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(labelTOD, 3, 0, 1, 1);

        doubleSpinBoxFL = new QDoubleSpinBox(centralWidget);
        doubleSpinBoxFL->setObjectName("doubleSpinBoxFL");
        doubleSpinBoxFL->setMinimumSize(QSize(170, 0));
        doubleSpinBoxFL->setMaximumSize(QSize(170, 16777215));
        doubleSpinBoxFL->setFont(font9);
        doubleSpinBoxFL->setDecimals(0);
        doubleSpinBoxFL->setMinimum(0.000000000000000);
        doubleSpinBoxFL->setMaximum(99999.000000000000000);
        doubleSpinBoxFL->setSingleStep(100.000000000000000);

        gridLayout_2->addWidget(doubleSpinBoxFL, 0, 16, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 2013, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName("menuSettings");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuImport = new QMenu(menuBar);
        menuImport->setObjectName("menuImport");
        menuExport_Print = new QMenu(menuBar);
        menuExport_Print->setObjectName("menuExport_Print");
        menuShow_summary = new QMenu(menuExport_Print);
        menuShow_summary->setObjectName("menuShow_summary");
        menuUtils = new QMenu(menuBar);
        menuUtils->setObjectName("menuUtils");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuImport->menuAction());
        menuBar->addAction(menuExport_Print->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuUtils->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionLoad_XNVU_flightplan);
        menuFile->addAction(actionSave_XNVU_flightplan);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuSettings->addAction(actionX_Plane_folder);
        menuSettings->addAction(actionOptions);
        menuSettings->addAction(actionXNVU_library);
        menuView->addAction(actionColumns_2);
        menuView->addSeparator();
        menuImport->addAction(actionImport_X_Plane_FMS_2);
        menuImport->addAction(actionKLN_90B);
        menuExport_Print->addAction(actionPrint_2);
        menuExport_Print->addAction(actionPrint_to_PDF);
        menuExport_Print->addAction(actionExport_to_FMS);
        menuExport_Print->addAction(actionExport_to_KLN90B);
        menuExport_Print->addSeparator();
        menuExport_Print->addAction(actionPrint_settings);
        menuExport_Print->addAction(actionNightmode);
        menuExport_Print->addAction(menuShow_summary->menuAction());
        menuShow_summary->addAction(actionAt_last_page);
        menuShow_summary->addAction(actionAt_every_page);
        menuShow_summary->addAction(actionDo_not_show);
        menuUtils->addAction(actionAutogenerate_correction_beacons);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "XNVU Calculator v0.24", nullptr));
        actionImport_X_Plane_FMS->setText(QCoreApplication::translate("MainWindow", "Import X-Plane FMS...", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionX_Plane_folder->setText(QCoreApplication::translate("MainWindow", "Set X-Plane folder...", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print...", nullptr));
        actionExport_X_Plane_FMS->setText(QCoreApplication::translate("MainWindow", "Export X-Plane FMS...", nullptr));
        actionSave_XNVU_flightplan->setText(QCoreApplication::translate("MainWindow", "Save XNVU flightplan...", nullptr));
        actionLoad_XNVU_flightplan->setText(QCoreApplication::translate("MainWindow", "Load XNVU flightplan...", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options...", nullptr));
        actionXNVU_library->setText(QCoreApplication::translate("MainWindow", "XNVU library...", nullptr));
        actionShow_feet->setText(QCoreApplication::translate("MainWindow", "Altitude as feet", nullptr));
        actionColumn->setText(QCoreApplication::translate("MainWindow", "Column", nullptr));
        actionShow_waypoint_number->setText(QCoreApplication::translate("MainWindow", "Show waypoint number", nullptr));
        actionShow_identifier->setText(QCoreApplication::translate("MainWindow", "Show identifier", nullptr));
        actionShow_type->setText(QCoreApplication::translate("MainWindow", "Show type", nullptr));
        actionShow_Altitude->setText(QCoreApplication::translate("MainWindow", "Show Altitude", nullptr));
        actionShow_Latitude->setText(QCoreApplication::translate("MainWindow", "Show Latitude", nullptr));
        actionShow_Longitude->setText(QCoreApplication::translate("MainWindow", "Show Longitude", nullptr));
        actionShow_MD->setText(QCoreApplication::translate("MainWindow", "Show MD", nullptr));
        actionShow_OZMPUv->setText(QCoreApplication::translate("MainWindow", "Show OZMPUv", nullptr));
        actionShow_OZMPUp->setText(QCoreApplication::translate("MainWindow", "Show OZMPUp", nullptr));
        actionShow_Pv->setText(QCoreApplication::translate("MainWindow", "Show Pv", nullptr));
        actionShow_Pp->setText(QCoreApplication::translate("MainWindow", "Show Pp", nullptr));
        actionShow_MPU->setText(QCoreApplication::translate("MainWindow", "Show MPU", nullptr));
        actionShow_IPU->setText(QCoreApplication::translate("MainWindow", "Show IPU", nullptr));
        actionShow_S->setText(QCoreApplication::translate("MainWindow", "Show S", nullptr));
        actionShow_Spas->setText(QCoreApplication::translate("MainWindow", "Show Spas", nullptr));
        actionShow_Srem->setText(QCoreApplication::translate("MainWindow", "Show Srem", nullptr));
        actionShow_Sm->setText(QCoreApplication::translate("MainWindow", "Show Sm", nullptr));
        actionShow_Zm->setText(QCoreApplication::translate("MainWindow", "Show Zm", nullptr));
        actionShow_Map_angle->setText(QCoreApplication::translate("MainWindow", "Show Map angle", nullptr));
        actionShow_A_targ->setText(QCoreApplication::translate("MainWindow", "Show A targ", nullptr));
        actionShow_D_targ->setText(QCoreApplication::translate("MainWindow", "Show D targ", nullptr));
        actionColumns_2->setText(QCoreApplication::translate("MainWindow", "Columns...", nullptr));
        actionExport_to_PDF->setText(QCoreApplication::translate("MainWindow", "Export to PDF...", nullptr));
        actionNightmode_print_export->setText(QCoreApplication::translate("MainWindow", "Nightmode print/export", nullptr));
        actionFMS->setText(QCoreApplication::translate("MainWindow", "X-Plane FMS...", nullptr));
        actionDistance_as_NM->setText(QCoreApplication::translate("MainWindow", "Distance as NM", nullptr));
        actionImport_X_Plane_FMS_2->setText(QCoreApplication::translate("MainWindow", "Import FMS...", nullptr));
        actionKLN_90B->setText(QCoreApplication::translate("MainWindow", "Import KLN90B...", nullptr));
        actionPrint_2->setText(QCoreApplication::translate("MainWindow", "Print...", nullptr));
        actionPrint_to_PDF->setText(QCoreApplication::translate("MainWindow", "Print to PDF...", nullptr));
        actionExport_to_FMS->setText(QCoreApplication::translate("MainWindow", "Export to FMS...", nullptr));
        actionExport_to_KLN90B->setText(QCoreApplication::translate("MainWindow", "Export to KLN90B...", nullptr));
        actionNightmode->setText(QCoreApplication::translate("MainWindow", "Nightmode", nullptr));
        actionAltitude_in_feet->setText(QCoreApplication::translate("MainWindow", "Altitude in feet", nullptr));
        actionDistance_in_NM->setText(QCoreApplication::translate("MainWindow", "Distance in NM", nullptr));
        actionPrint_settings->setText(QCoreApplication::translate("MainWindow", "Print settings", nullptr));
        actionAutogenerate_correction_beacons->setText(QCoreApplication::translate("MainWindow", "Autogenerate correction beacons", nullptr));
        actionAt_last_page->setText(QCoreApplication::translate("MainWindow", "At last page", nullptr));
        actionAt_every_page->setText(QCoreApplication::translate("MainWindow", "At every page", nullptr));
        actionDo_not_show->setText(QCoreApplication::translate("MainWindow", "Do not show", nullptr));
        labelDirectTo->setText(QCoreApplication::translate("MainWindow", "Direct to:", nullptr));
        lineEdit_DTTo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Direct To", nullptr));
        labelFromCourse->setText(QCoreApplication::translate("MainWindow", "From course:", nullptr));
        lineEdit_DTCourseFrom->setPlaceholderText(QCoreApplication::translate("MainWindow", "Course From", nullptr));
        lineEdit_DTCourseTo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Course To", nullptr));
        doubleSpinBox_DTCourseDistRem->setSpecialValueText(QString());
        doubleSpinBox_DTCourseDistRem->setSuffix(QCoreApplication::translate("MainWindow", " km", nullptr));
        pushButtonDTInsert->setText(QCoreApplication::translate("MainWindow", "Insert after", nullptr));
#if QT_CONFIG(tooltip)
        lineEditRoute->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEditRoute->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineEditRoute->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineEditRoute->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineEditRoute->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        lineEditRoute->setPlaceholderText(QCoreApplication::translate("MainWindow", "Insert route", nullptr));
        pushButtonRouteInsertBefore->setText(QCoreApplication::translate("MainWindow", "Insert before", nullptr));
        pushButtonRouteReplace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
        pushButtonRouteInsertAfter->setText(QCoreApplication::translate("MainWindow", "Insert after", nullptr));
        pushButtonDeleteWaypoint->setText(QCoreApplication::translate("MainWindow", "Delete waypoint", nullptr));
        pushButton_ClearFlightplan->setText(QCoreApplication::translate("MainWindow", "Clear Flightplan", nullptr));
        label_alignWPS->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_alignFMS->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelWPType->setText(QString());
        labelIWPName2->setText(QString());
        labelWPLatlon->setText(QString());
        labelWPNote->setText(QString());
        labelWPMagVar->setText(QString());
        labelWPType2->setText(QString());
        pushButton_showAirports->setText(QCoreApplication::translate("MainWindow", "Airports", nullptr));
        pushButton_showFix->setText(QCoreApplication::translate("MainWindow", "Fixes", nullptr));
        pushButton_showVORDME->setText(QCoreApplication::translate("MainWindow", "VOR/DME", nullptr));
        pushButton_showVOR->setText(QCoreApplication::translate("MainWindow", "VOR", nullptr));
        pushButton_showRSBN->setText(QCoreApplication::translate("MainWindow", "RSBN", nullptr));
        pushButton_showAIRAC_Airways->setText(QCoreApplication::translate("MainWindow", "Airways", nullptr));
        pushButton_showNDB->setText(QCoreApplication::translate("MainWindow", "NDB", nullptr));
        pushButton_showDME->setText(QCoreApplication::translate("MainWindow", "DME", nullptr));
        pushButton_showXNVU->setText(QCoreApplication::translate("MainWindow", "XNVU", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search waypoint", nullptr));
        pushButtonInsertBefore->setText(QCoreApplication::translate("MainWindow", "Insert before", nullptr));
        pushButtonReplace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
        pushButtonInsertAfter->setText(QCoreApplication::translate("MainWindow", "Insert after", nullptr));
        labelTWC->setText(QCoreApplication::translate("MainWindow", "TWC:", nullptr));
        doubleSpinBox_MACH->setSpecialValueText(QString());
        doubleSpinBox_MACH->setSuffix(QCoreApplication::translate("MainWindow", "M", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ISA:", nullptr));
        doubleSpinBox_TWC->setSpecialValueText(QString());
        doubleSpinBox_TWC->setSuffix(QCoreApplication::translate("MainWindow", "kn", nullptr));
        labelCruise->setText(QCoreApplication::translate("MainWindow", "CRUISE:", nullptr));
        doubleSpinBox_ISA->setSpecialValueText(QString());
        doubleSpinBox_ISA->setSuffix(QCoreApplication::translate("MainWindow", "C", nullptr));
        labelFlightLevel->setText(QCoreApplication::translate("MainWindow", "FL:", nullptr));
        doubleSpinBox_VS->setSpecialValueText(QString());
        doubleSpinBox_VS->setSuffix(QCoreApplication::translate("MainWindow", "M/S", nullptr));
        labelVS->setText(QCoreApplication::translate("MainWindow", "V/S:", nullptr));
        labelFork->setText(QCoreApplication::translate("MainWindow", "Fork   0.0", nullptr));
        labelDate->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        pushButtonSetDate->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        labelTOD->setText(QCoreApplication::translate("MainWindow", "TOD: ", nullptr));
        doubleSpinBoxFL->setSpecialValueText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuImport->setTitle(QCoreApplication::translate("MainWindow", "Import", nullptr));
        menuExport_Print->setTitle(QCoreApplication::translate("MainWindow", "Export/Print", nullptr));
        menuShow_summary->setTitle(QCoreApplication::translate("MainWindow", "Show summary", nullptr));
        menuUtils->setTitle(QCoreApplication::translate("MainWindow", "Utils", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
