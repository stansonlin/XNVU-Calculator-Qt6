/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QLineEdit *lineEditRSBNFile;
    QLabel *label_4;
    QToolButton *toolButton_4;
    QLineEdit *lineEditXPlaneDirectory;
    QLabel *label_6;
    QToolButton *toolButton_6;
    QCheckBox *checkBoxXP11;
    QFrame *frame;
    QLabel *label_7;
    QLineEdit *lineEditAirwaysFile;
    QLineEdit *lineEditWaypointsFile;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lineEditEarthnavFile;
    QLineEdit *lineEditAirportsFiles;
    QLineEdit *lineEditNavaidsFile;
    QLabel *label_5;
    QLabel *label_2;
    QCheckBox *checkBoxManual;
    QFrame *frame_2;
    QCheckBox *checkBoxAPTOverride;
    QLabel *label_9;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditDefaultLoadSaveDir;
    QLabel *label_10;
    QToolButton *toolButton_5;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName("DialogSettings");
        DialogSettings->resize(969, 816);
        DialogSettings->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"#frame, #frame_2\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QPushButton, QToolButton\n"
"{\n"
"	background-color: rgb(73, 163, 0);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"	selection-background-color: rgb(107, 239, 0);\n"
"    selection-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QS"
                        "pinBox\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QDoubleSpinBox\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QCheckBox::indicator::checked\n"
"{\n"
"	background-color: rgb(107, 239, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked\n"
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
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"	backgro"
                        "und-color: rgb(0, 15, 0);\n"
"	color: rgb(27, 159, 0);;\n"
"}\n"
""));
        lineEditRSBNFile = new QLineEdit(DialogSettings);
        lineEditRSBNFile->setObjectName("lineEditRSBNFile");
        lineEditRSBNFile->setGeometry(QRect(20, 140, 761, 26));
        label_4 = new QLabel(DialogSettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 191, 18));
        QFont font;
        font.setBold(true);
        label_4->setFont(font);
        toolButton_4 = new QToolButton(DialogSettings);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setGeometry(QRect(800, 140, 33, 25));
        lineEditXPlaneDirectory = new QLineEdit(DialogSettings);
        lineEditXPlaneDirectory->setObjectName("lineEditXPlaneDirectory");
        lineEditXPlaneDirectory->setGeometry(QRect(20, 80, 761, 26));
        label_6 = new QLabel(DialogSettings);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 60, 511, 18));
        label_6->setFont(font);
        toolButton_6 = new QToolButton(DialogSettings);
        toolButton_6->setObjectName("toolButton_6");
        toolButton_6->setGeometry(QRect(800, 80, 33, 25));
        checkBoxXP11 = new QCheckBox(DialogSettings);
        checkBoxXP11->setObjectName("checkBoxXP11");
        checkBoxXP11->setGeometry(QRect(20, 20, 401, 24));
        checkBoxXP11->setFont(font);
        frame = new QFrame(DialogSettings);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 370, 861, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 401, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_7->setFont(font1);
        lineEditAirwaysFile = new QLineEdit(frame);
        lineEditAirwaysFile->setObjectName("lineEditAirwaysFile");
        lineEditAirwaysFile->setGeometry(QRect(10, 300, 761, 26));
        lineEditWaypointsFile = new QLineEdit(frame);
        lineEditWaypointsFile->setObjectName("lineEditWaypointsFile");
        lineEditWaypointsFile->setGeometry(QRect(10, 240, 761, 26));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 181, 18));
        label_3->setFont(font);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 151, 18));
        label->setFont(font);
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 270, 181, 18));
        label_8->setFont(font);
        lineEditEarthnavFile = new QLineEdit(frame);
        lineEditEarthnavFile->setObjectName("lineEditEarthnavFile");
        lineEditEarthnavFile->setGeometry(QRect(10, 350, 761, 26));
        lineEditAirportsFiles = new QLineEdit(frame);
        lineEditAirportsFiles->setObjectName("lineEditAirportsFiles");
        lineEditAirportsFiles->setGeometry(QRect(10, 120, 761, 26));
        lineEditNavaidsFile = new QLineEdit(frame);
        lineEditNavaidsFile->setObjectName("lineEditNavaidsFile");
        lineEditNavaidsFile->setGeometry(QRect(10, 180, 761, 26));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 330, 181, 18));
        label_5->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 150, 151, 18));
        label_2->setFont(font);
        checkBoxManual = new QCheckBox(frame);
        checkBoxManual->setObjectName("checkBoxManual");
        checkBoxManual->setGeometry(QRect(10, 50, 751, 31));
        checkBoxManual->setFont(font);
        frame_2 = new QFrame(DialogSettings);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 260, 861, 101));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        checkBoxAPTOverride = new QCheckBox(frame_2);
        checkBoxAPTOverride->setObjectName("checkBoxAPTOverride");
        checkBoxAPTOverride->setGeometry(QRect(10, 40, 781, 31));
        checkBoxAPTOverride->setFont(font);
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 0, 401, 51));
        label_9->setFont(font1);
        buttonBox = new QDialogButtonBox(DialogSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 770, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEditDefaultLoadSaveDir = new QLineEdit(DialogSettings);
        lineEditDefaultLoadSaveDir->setObjectName("lineEditDefaultLoadSaveDir");
        lineEditDefaultLoadSaveDir->setGeometry(QRect(20, 200, 761, 26));
        label_10 = new QLabel(DialogSettings);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 180, 761, 18));
        label_10->setFont(font);
        toolButton_5 = new QToolButton(DialogSettings);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setGeometry(QRect(800, 200, 33, 25));

        retranslateUi(DialogSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QCoreApplication::translate("DialogSettings", "Settings", nullptr));
        label_4->setText(QCoreApplication::translate("DialogSettings", "Felis TU154 rsbn.dat", nullptr));
        toolButton_4->setText(QCoreApplication::translate("DialogSettings", "...", nullptr));
        label_6->setText(QCoreApplication::translate("DialogSettings", "X-Plane Folder (automagically searches for X-Plane files)", nullptr));
        toolButton_6->setText(QCoreApplication::translate("DialogSettings", "...", nullptr));
        checkBoxXP11->setText(QCoreApplication::translate("DialogSettings", "Set if data is loaded from X-Plane 11", nullptr));
        label_7->setText(QCoreApplication::translate("DialogSettings", "X-Plane 10 settings", nullptr));
        label_3->setText(QCoreApplication::translate("DialogSettings", "waypoints.txt", nullptr));
        label->setText(QCoreApplication::translate("DialogSettings", "airports.txt", nullptr));
        label_8->setText(QCoreApplication::translate("DialogSettings", "ats.txt", nullptr));
        label_5->setText(QCoreApplication::translate("DialogSettings", "earth_nav.dat", nullptr));
        label_2->setText(QCoreApplication::translate("DialogSettings", "navaids.txt", nullptr));
        checkBoxManual->setText(QCoreApplication::translate("DialogSettings", "Manually set X-Plane files to load (only for X-Plane 10)", nullptr));
        checkBoxAPTOverride->setText(QCoreApplication::translate("DialogSettings", "Let data from custom installed airports override gateway and default airports", nullptr));
        label_9->setText(QCoreApplication::translate("DialogSettings", "X-Plane 11 settings", nullptr));
        label_10->setText(QCoreApplication::translate("DialogSettings", "Default folder for saving and loading flightplans aswell as saving PDF:s.", nullptr));
        toolButton_5->setText(QCoreApplication::translate("DialogSettings", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
