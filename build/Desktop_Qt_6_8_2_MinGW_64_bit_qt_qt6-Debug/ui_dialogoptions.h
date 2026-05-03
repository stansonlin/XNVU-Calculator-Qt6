/********************************************************************************
** Form generated from reading UI file 'dialogoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPTIONS_H
#define UI_DIALOGOPTIONS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogOptions
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBoxDistance;
    QCheckBox *checkBox_FMS;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox_WPS;
    QLabel *label_3;
    QLabel *label_Meter;
    QLabel *label_5;
    QCheckBox *checkBoxCustomDate;
    QDateEdit *dateEdit;
    QLabel *label_6;

    void setupUi(QDialog *DialogOptions)
    {
        if (DialogOptions->objectName().isEmpty())
            DialogOptions->setObjectName("DialogOptions");
        DialogOptions->resize(585, 359);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogOptions->sizePolicy().hasHeightForWidth());
        DialogOptions->setSizePolicy(sizePolicy);
        DialogOptions->setMinimumSize(QSize(585, 304));
        DialogOptions->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: rgb(107, 239, 0);\n"
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
"QSpinBox, QDateEdit\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"QDoubleSpinBox\n"
""
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
"	background-color: rgb(0, 15, 0);\n"
"	color: rgb(27, 159, 0);;\n"
"}\n"
""));
        DialogOptions->setSizeGripEnabled(false);
        buttonBox = new QDialogButtonBox(DialogOptions);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBoxDistance = new QSpinBox(DialogOptions);
        spinBoxDistance->setObjectName("spinBoxDistance");
        spinBoxDistance->setGeometry(QRect(160, 260, 101, 31));
        QFont font;
        font.setPointSize(9);
        spinBoxDistance->setFont(font);
        spinBoxDistance->setMaximum(1000000);
        spinBoxDistance->setValue(500);
        checkBox_FMS = new QCheckBox(DialogOptions);
        checkBox_FMS->setObjectName("checkBox_FMS");
        checkBox_FMS->setGeometry(QRect(10, 230, 111, 31));
        checkBox_FMS->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(DialogOptions);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 120, 181, 31));
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(DialogOptions);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 150, 561, 71));
        QFont font2;
        font2.setPointSize(8);
        label_2->setFont(font2);
        checkBox_WPS = new QCheckBox(DialogOptions);
        checkBox_WPS->setObjectName("checkBox_WPS");
        checkBox_WPS->setGeometry(QRect(10, 260, 111, 31));
        checkBox_WPS->setLayoutDirection(Qt::RightToLeft);
        label_3 = new QLabel(DialogOptions);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 237, 401, 18));
        label_Meter = new QLabel(DialogOptions);
        label_Meter->setObjectName("label_Meter");
        label_Meter->setGeometry(QRect(270, 260, 301, 31));
        label_5 = new QLabel(DialogOptions);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 361, 31));
        label_5->setFont(font1);
        checkBoxCustomDate = new QCheckBox(DialogOptions);
        checkBoxCustomDate->setObjectName("checkBoxCustomDate");
        checkBoxCustomDate->setGeometry(QRect(20, 70, 261, 31));
        dateEdit = new QDateEdit(DialogOptions);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(290, 70, 141, 31));
        dateEdit->setDate(QDate(2020, 1, 1));
        label_6 = new QLabel(DialogOptions);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 30, 541, 41));
        QFont font3;
        font3.setPointSize(7);
        font3.setItalic(true);
        label_6->setFont(font3);

        retranslateUi(DialogOptions);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogOptions, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogOptions, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogOptions);
    } // setupUi

    void retranslateUi(QDialog *DialogOptions)
    {
        DialogOptions->setWindowTitle(QCoreApplication::translate("DialogOptions", "XNVU Options", nullptr));
        checkBox_FMS->setText(QCoreApplication::translate("DialogOptions", "FMS align", nullptr));
        label->setText(QCoreApplication::translate("DialogOptions", "Waypoint alignment", nullptr));
        label_2->setText(QCoreApplication::translate("DialogOptions", "Set XNVU to automatically convert waypoints in flightplan to the ones\n"
"found in X-Plane database.\n"
"Select FMS and/or XWP flightplans to convert, and which distance margin\n"
"to allow for conversion:\n"
"", nullptr));
        checkBox_WPS->setText(QCoreApplication::translate("DialogOptions", "XWP align", nullptr));
        label_3->setText(QCoreApplication::translate("DialogOptions", "Distance margin (recommended 500 m)", nullptr));
        label_Meter->setText(QCoreApplication::translate("DialogOptions", "meters", nullptr));
        label_5->setText(QCoreApplication::translate("DialogOptions", "Date settings", nullptr));
        checkBoxCustomDate->setText(QCoreApplication::translate("DialogOptions", "Enable custom date at startup", nullptr));
        label_6->setText(QCoreApplication::translate("DialogOptions", "NOTE: It seems X-Plane is running with a magnetic declination date\n"
"of 2020-01-01. Currently this is the recommend date of setting.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogOptions: public Ui_DialogOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOPTIONS_H
