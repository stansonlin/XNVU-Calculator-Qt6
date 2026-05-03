/********************************************************************************
** Form generated from reading UI file 'dialogwaypointedit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWAYPOINTEDIT_H
#define UI_DIALOGWAYPOINTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogWaypointEdit
{
public:
    QFrame *frame;
    QLineEdit *lineEdit_Name;
    QLabel *label;
    QLineEdit *lineEdit_Identifier;
    QLabel *label_5;
    QLabel *label_10;
    QLineEdit *lineEdit_Country;
    QFrame *frame_2;
    QLabel *label_Freq_TransAlt;
    QLabel *label_RangeTransLevel;
    QLabel *label_AngleDev_LongestRwy;
    QSpinBox *spinBox_Range;
    QDoubleSpinBox *doubleSpinBox_AngleDev;
    QDoubleSpinBox *doubleSpinBox_Freq;
    QComboBox *comboBox_Type;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_Lat;
    QDoubleSpinBox *doubleSpinBox_Lon;
    QSpinBox *spinBox_Elev;
    QSpinBox *spinBox_Alt;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_SaveCurrent;
    QPushButton *pushButton_CreateNew;

    void setupUi(QDialog *DialogWaypointEdit)
    {
        if (DialogWaypointEdit->objectName().isEmpty())
            DialogWaypointEdit->setObjectName("DialogWaypointEdit");
        DialogWaypointEdit->resize(633, 524);
        DialogWaypointEdit->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"#frame, #frame_2, #frame_3\n"
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
"#listRSBN\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"#listRSBN::item:selected\n"
"{\n"
"	background-color: rgb(107, 239, 0);\n"
"	color: rgb(0, 30, 0);\n"
"}\n"
"\n"
"QPushButton\n"
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
"	background-color: rgb(0,"
                        " 30, 0);\n"
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
"QSpinBox\n"
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
"	border-color: "
                        "rgb(73, 163, 0);\n"
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
"	background-color: rgb(0, 15, 0);\n"
"	color: rgb(27, 159, 0);;\n"
"}\n"
"\n"
""));
        frame = new QFrame(DialogWaypointEdit);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 50, 611, 71));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(3);
        lineEdit_Name = new QLineEdit(frame);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setGeometry(QRect(150, 30, 301, 26));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 111, 18));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        lineEdit_Identifier = new QLineEdit(frame);
        lineEdit_Identifier->setObjectName("lineEdit_Identifier");
        lineEdit_Identifier->setGeometry(QRect(10, 30, 113, 26));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 10, 161, 18));
        label_5->setFont(font);
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(470, 10, 131, 18));
        label_10->setFont(font);
        lineEdit_Country = new QLineEdit(frame);
        lineEdit_Country->setObjectName("lineEdit_Country");
        lineEdit_Country->setGeometry(QRect(470, 30, 113, 26));
        frame_2 = new QFrame(DialogWaypointEdit);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 380, 611, 71));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(4);
        label_Freq_TransAlt = new QLabel(frame_2);
        label_Freq_TransAlt->setObjectName("label_Freq_TransAlt");
        label_Freq_TransAlt->setGeometry(QRect(140, 10, 111, 18));
        label_Freq_TransAlt->setFont(font);
        label_RangeTransLevel = new QLabel(frame_2);
        label_RangeTransLevel->setObjectName("label_RangeTransLevel");
        label_RangeTransLevel->setGeometry(QRect(270, 10, 111, 18));
        label_RangeTransLevel->setFont(font);
        label_AngleDev_LongestRwy = new QLabel(frame_2);
        label_AngleDev_LongestRwy->setObjectName("label_AngleDev_LongestRwy");
        label_AngleDev_LongestRwy->setGeometry(QRect(400, 10, 161, 18));
        label_AngleDev_LongestRwy->setFont(font);
        spinBox_Range = new QSpinBox(frame_2);
        spinBox_Range->setObjectName("spinBox_Range");
        spinBox_Range->setGeometry(QRect(270, 30, 111, 27));
        spinBox_Range->setMaximum(1000);
        doubleSpinBox_AngleDev = new QDoubleSpinBox(frame_2);
        doubleSpinBox_AngleDev->setObjectName("doubleSpinBox_AngleDev");
        doubleSpinBox_AngleDev->setGeometry(QRect(400, 30, 141, 27));
        doubleSpinBox_AngleDev->setMinimum(-180.000000000000000);
        doubleSpinBox_AngleDev->setMaximum(180.000000000000000);
        doubleSpinBox_Freq = new QDoubleSpinBox(frame_2);
        doubleSpinBox_Freq->setObjectName("doubleSpinBox_Freq");
        doubleSpinBox_Freq->setGeometry(QRect(140, 30, 111, 27));
        doubleSpinBox_Freq->setDecimals(3);
        doubleSpinBox_Freq->setMaximum(10000.000000000000000);
        comboBox_Type = new QComboBox(frame_2);
        comboBox_Type->setObjectName("comboBox_Type");
        comboBox_Type->setGeometry(QRect(10, 30, 111, 26));
        frame_3 = new QFrame(DialogWaypointEdit);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 190, 611, 131));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(4);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 161, 18));
        label_4->setFont(font);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(230, 10, 161, 18));
        label_7->setFont(font);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(450, 10, 111, 18));
        label_9->setFont(font);
        doubleSpinBox_Lat = new QDoubleSpinBox(frame_3);
        doubleSpinBox_Lat->setObjectName("doubleSpinBox_Lat");
        doubleSpinBox_Lat->setGeometry(QRect(10, 30, 201, 27));
        doubleSpinBox_Lat->setDecimals(13);
        doubleSpinBox_Lat->setMinimum(-90.000000000000000);
        doubleSpinBox_Lat->setMaximum(90.000000000000000);
        doubleSpinBox_Lon = new QDoubleSpinBox(frame_3);
        doubleSpinBox_Lon->setObjectName("doubleSpinBox_Lon");
        doubleSpinBox_Lon->setGeometry(QRect(230, 30, 201, 27));
        doubleSpinBox_Lon->setDecimals(13);
        doubleSpinBox_Lon->setMinimum(-180.000000000000000);
        doubleSpinBox_Lon->setMaximum(180.000000000000000);
        spinBox_Elev = new QSpinBox(frame_3);
        spinBox_Elev->setObjectName("spinBox_Elev");
        spinBox_Elev->setGeometry(QRect(450, 30, 141, 27));
        spinBox_Elev->setMinimum(-100000);
        spinBox_Elev->setMaximum(100000);
        spinBox_Elev->setValue(0);
        spinBox_Alt = new QSpinBox(frame_3);
        spinBox_Alt->setObjectName("spinBox_Alt");
        spinBox_Alt->setGeometry(QRect(10, 90, 141, 27));
        spinBox_Alt->setMinimum(-100000);
        spinBox_Alt->setMaximum(100000);
        spinBox_Alt->setValue(0);
        label_11 = new QLabel(frame_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 70, 111, 18));
        label_11->setFont(font);
        label_13 = new QLabel(DialogWaypointEdit);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 10, 541, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_13->setFont(font1);
        label_14 = new QLabel(DialogWaypointEdit);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 340, 541, 31));
        label_14->setFont(font1);
        label_15 = new QLabel(DialogWaypointEdit);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 150, 541, 31));
        label_15->setFont(font1);
        pushButton_Cancel = new QPushButton(DialogWaypointEdit);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(470, 480, 140, 27));
        pushButton_Cancel->setMinimumSize(QSize(140, 0));
        pushButton_Cancel->setMaximumSize(QSize(140, 16777215));
        pushButton_SaveCurrent = new QPushButton(DialogWaypointEdit);
        pushButton_SaveCurrent->setObjectName("pushButton_SaveCurrent");
        pushButton_SaveCurrent->setGeometry(QRect(320, 480, 140, 27));
        pushButton_SaveCurrent->setMinimumSize(QSize(140, 0));
        pushButton_SaveCurrent->setMaximumSize(QSize(140, 16777215));
        pushButton_CreateNew = new QPushButton(DialogWaypointEdit);
        pushButton_CreateNew->setObjectName("pushButton_CreateNew");
        pushButton_CreateNew->setGeometry(QRect(10, 480, 240, 27));
        pushButton_CreateNew->setMinimumSize(QSize(240, 0));
        pushButton_CreateNew->setMaximumSize(QSize(240, 16777215));
        QWidget::setTabOrder(lineEdit_Identifier, lineEdit_Name);
        QWidget::setTabOrder(lineEdit_Name, lineEdit_Country);
        QWidget::setTabOrder(lineEdit_Country, doubleSpinBox_Lat);
        QWidget::setTabOrder(doubleSpinBox_Lat, doubleSpinBox_Lon);
        QWidget::setTabOrder(doubleSpinBox_Lon, spinBox_Elev);
        QWidget::setTabOrder(spinBox_Elev, spinBox_Alt);
        QWidget::setTabOrder(spinBox_Alt, comboBox_Type);
        QWidget::setTabOrder(comboBox_Type, doubleSpinBox_Freq);
        QWidget::setTabOrder(doubleSpinBox_Freq, spinBox_Range);
        QWidget::setTabOrder(spinBox_Range, doubleSpinBox_AngleDev);
        QWidget::setTabOrder(doubleSpinBox_AngleDev, pushButton_SaveCurrent);
        QWidget::setTabOrder(pushButton_SaveCurrent, pushButton_CreateNew);
        QWidget::setTabOrder(pushButton_CreateNew, pushButton_Cancel);

        retranslateUi(DialogWaypointEdit);

        QMetaObject::connectSlotsByName(DialogWaypointEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogWaypointEdit)
    {
        DialogWaypointEdit->setWindowTitle(QCoreApplication::translate("DialogWaypointEdit", "Edit Waypoint", nullptr));
        label->setText(QCoreApplication::translate("DialogWaypointEdit", "Identifier", nullptr));
        label_5->setText(QCoreApplication::translate("DialogWaypointEdit", "Name", nullptr));
        label_10->setText(QCoreApplication::translate("DialogWaypointEdit", "Country (ISO)", nullptr));
        label_Freq_TransAlt->setText(QCoreApplication::translate("DialogWaypointEdit", "Frequency", nullptr));
        label_RangeTransLevel->setText(QCoreApplication::translate("DialogWaypointEdit", "Range (NM)", nullptr));
        label_AngleDev_LongestRwy->setText(QCoreApplication::translate("DialogWaypointEdit", "Angle Deviation", nullptr));
        label_4->setText(QCoreApplication::translate("DialogWaypointEdit", "Latitude", nullptr));
        label_7->setText(QCoreApplication::translate("DialogWaypointEdit", "Longitude", nullptr));
        label_9->setText(QCoreApplication::translate("DialogWaypointEdit", "Elevation (ft)", nullptr));
        label_11->setText(QCoreApplication::translate("DialogWaypointEdit", "Altitude (ft)", nullptr));
        label_13->setText(QCoreApplication::translate("DialogWaypointEdit", "Description", nullptr));
        label_14->setText(QCoreApplication::translate("DialogWaypointEdit", "Type", nullptr));
        label_15->setText(QCoreApplication::translate("DialogWaypointEdit", "Position", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("DialogWaypointEdit", "Cancel", nullptr));
        pushButton_SaveCurrent->setText(QCoreApplication::translate("DialogWaypointEdit", "Save in flightplan", nullptr));
        pushButton_CreateNew->setText(QCoreApplication::translate("DialogWaypointEdit", "Save and add to XNVU library", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWaypointEdit: public Ui_DialogWaypointEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWAYPOINTEDIT_H
