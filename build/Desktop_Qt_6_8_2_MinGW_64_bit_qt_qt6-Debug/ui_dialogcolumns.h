/********************************************************************************
** Form generated from reading UI file 'dialogcolumns.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOLUMNS_H
#define UI_DIALOGCOLUMNS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogColumns
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBoxN;
    QCheckBox *checkBoxID;
    QCheckBox *checkBoxType;
    QCheckBox *checkBoxAlt;
    QCheckBox *checkBoxLat;
    QCheckBox *checkBoxLon;
    QCheckBox *checkBoxMD;
    QCheckBox *checkBoxOZMPUv;
    QCheckBox *checkBoxOZMPUp;
    QCheckBox *checkBoxPv;
    QCheckBox *checkBoxMPU;
    QCheckBox *checkBoxIPU;
    QCheckBox *checkBoxS;
    QCheckBox *checkBoxSpas;
    QCheckBox *checkBoxSrem;
    QCheckBox *checkBoxRSBN;
    QCheckBox *checkBoxSm;
    QCheckBox *checkBoxZm;
    QCheckBox *checkBoxMapAngle;
    QCheckBox *checkBoxAtarg;
    QCheckBox *checkBoxDtarg;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBoxPp;

    void setupUi(QDialog *DialogColumns)
    {
        if (DialogColumns->objectName().isEmpty())
            DialogColumns->setObjectName("DialogColumns");
        DialogColumns->resize(880, 325);
        DialogColumns->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"	ba"
                        "ckground-color: rgb(0, 30, 0);\n"
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
        buttonBox = new QDialogButtonBox(DialogColumns);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(520, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBoxN = new QCheckBox(DialogColumns);
        checkBoxN->setObjectName("checkBoxN");
        checkBoxN->setGeometry(QRect(10, 50, 231, 24));
        checkBoxID = new QCheckBox(DialogColumns);
        checkBoxID->setObjectName("checkBoxID");
        checkBoxID->setGeometry(QRect(10, 80, 231, 24));
        checkBoxType = new QCheckBox(DialogColumns);
        checkBoxType->setObjectName("checkBoxType");
        checkBoxType->setGeometry(QRect(10, 110, 231, 24));
        checkBoxAlt = new QCheckBox(DialogColumns);
        checkBoxAlt->setObjectName("checkBoxAlt");
        checkBoxAlt->setGeometry(QRect(10, 140, 231, 24));
        checkBoxLat = new QCheckBox(DialogColumns);
        checkBoxLat->setObjectName("checkBoxLat");
        checkBoxLat->setGeometry(QRect(10, 170, 231, 24));
        checkBoxLon = new QCheckBox(DialogColumns);
        checkBoxLon->setObjectName("checkBoxLon");
        checkBoxLon->setGeometry(QRect(10, 200, 231, 24));
        checkBoxMD = new QCheckBox(DialogColumns);
        checkBoxMD->setObjectName("checkBoxMD");
        checkBoxMD->setGeometry(QRect(260, 50, 241, 24));
        checkBoxOZMPUv = new QCheckBox(DialogColumns);
        checkBoxOZMPUv->setObjectName("checkBoxOZMPUv");
        checkBoxOZMPUv->setGeometry(QRect(260, 80, 231, 24));
        checkBoxOZMPUp = new QCheckBox(DialogColumns);
        checkBoxOZMPUp->setObjectName("checkBoxOZMPUp");
        checkBoxOZMPUp->setGeometry(QRect(260, 110, 231, 24));
        checkBoxPv = new QCheckBox(DialogColumns);
        checkBoxPv->setObjectName("checkBoxPv");
        checkBoxPv->setGeometry(QRect(260, 140, 231, 24));
        checkBoxMPU = new QCheckBox(DialogColumns);
        checkBoxMPU->setObjectName("checkBoxMPU");
        checkBoxMPU->setGeometry(QRect(260, 200, 231, 24));
        checkBoxIPU = new QCheckBox(DialogColumns);
        checkBoxIPU->setObjectName("checkBoxIPU");
        checkBoxIPU->setGeometry(QRect(260, 230, 231, 24));
        checkBoxS = new QCheckBox(DialogColumns);
        checkBoxS->setObjectName("checkBoxS");
        checkBoxS->setGeometry(QRect(520, 50, 131, 24));
        checkBoxSpas = new QCheckBox(DialogColumns);
        checkBoxSpas->setObjectName("checkBoxSpas");
        checkBoxSpas->setGeometry(QRect(520, 80, 131, 24));
        checkBoxSrem = new QCheckBox(DialogColumns);
        checkBoxSrem->setObjectName("checkBoxSrem");
        checkBoxSrem->setGeometry(QRect(520, 110, 131, 24));
        checkBoxRSBN = new QCheckBox(DialogColumns);
        checkBoxRSBN->setObjectName("checkBoxRSBN");
        checkBoxRSBN->setGeometry(QRect(660, 50, 231, 24));
        checkBoxSm = new QCheckBox(DialogColumns);
        checkBoxSm->setObjectName("checkBoxSm");
        checkBoxSm->setGeometry(QRect(660, 80, 231, 24));
        checkBoxZm = new QCheckBox(DialogColumns);
        checkBoxZm->setObjectName("checkBoxZm");
        checkBoxZm->setGeometry(QRect(660, 110, 231, 24));
        checkBoxMapAngle = new QCheckBox(DialogColumns);
        checkBoxMapAngle->setObjectName("checkBoxMapAngle");
        checkBoxMapAngle->setGeometry(QRect(660, 140, 231, 24));
        checkBoxAtarg = new QCheckBox(DialogColumns);
        checkBoxAtarg->setObjectName("checkBoxAtarg");
        checkBoxAtarg->setGeometry(QRect(660, 170, 231, 24));
        checkBoxDtarg = new QCheckBox(DialogColumns);
        checkBoxDtarg->setObjectName("checkBoxDtarg");
        checkBoxDtarg->setGeometry(QRect(660, 200, 231, 24));
        label = new QLabel(DialogColumns);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 191, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);
        label_2 = new QLabel(DialogColumns);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 10, 191, 31));
        label_2->setFont(font);
        label_3 = new QLabel(DialogColumns);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 10, 131, 31));
        label_3->setFont(font);
        label_4 = new QLabel(DialogColumns);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(660, 10, 201, 31));
        label_4->setFont(font);
        checkBoxPp = new QCheckBox(DialogColumns);
        checkBoxPp->setObjectName("checkBoxPp");
        checkBoxPp->setGeometry(QRect(260, 170, 231, 24));

        retranslateUi(DialogColumns);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogColumns, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogColumns, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogColumns);
    } // setupUi

    void retranslateUi(QDialog *DialogColumns)
    {
        DialogColumns->setWindowTitle(QCoreApplication::translate("DialogColumns", "Show columns", nullptr));
        checkBoxN->setText(QCoreApplication::translate("DialogColumns", "Waypoint number", nullptr));
        checkBoxID->setText(QCoreApplication::translate("DialogColumns", "Identifier", nullptr));
        checkBoxType->setText(QCoreApplication::translate("DialogColumns", "Type", nullptr));
        checkBoxAlt->setText(QCoreApplication::translate("DialogColumns", "Altitude", nullptr));
        checkBoxLat->setText(QCoreApplication::translate("DialogColumns", "Latitude", nullptr));
        checkBoxLon->setText(QCoreApplication::translate("DialogColumns", "Longitude", nullptr));
        checkBoxMD->setText(QCoreApplication::translate("DialogColumns", "Magnetic declination", nullptr));
        checkBoxOZMPUv->setText(QCoreApplication::translate("DialogColumns", "OZMPUv", nullptr));
        checkBoxOZMPUp->setText(QCoreApplication::translate("DialogColumns", "OZMPUp", nullptr));
        checkBoxPv->setText(QCoreApplication::translate("DialogColumns", "Pv", nullptr));
        checkBoxMPU->setText(QCoreApplication::translate("DialogColumns", "MPU", nullptr));
        checkBoxIPU->setText(QCoreApplication::translate("DialogColumns", "IPU", nullptr));
        checkBoxS->setText(QCoreApplication::translate("DialogColumns", "S", nullptr));
        checkBoxSpas->setText(QCoreApplication::translate("DialogColumns", "Spas", nullptr));
        checkBoxSrem->setText(QCoreApplication::translate("DialogColumns", "Srem", nullptr));
        checkBoxRSBN->setText(QCoreApplication::translate("DialogColumns", "RSBN/VORDME", nullptr));
        checkBoxSm->setText(QCoreApplication::translate("DialogColumns", "Sm", nullptr));
        checkBoxZm->setText(QCoreApplication::translate("DialogColumns", "Zm", nullptr));
        checkBoxMapAngle->setText(QCoreApplication::translate("DialogColumns", "Map angle", nullptr));
        checkBoxAtarg->setText(QCoreApplication::translate("DialogColumns", "A target", nullptr));
        checkBoxDtarg->setText(QCoreApplication::translate("DialogColumns", "D target", nullptr));
        label->setText(QCoreApplication::translate("DialogColumns", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("DialogColumns", "Bearing", nullptr));
        label_3->setText(QCoreApplication::translate("DialogColumns", "Distance", nullptr));
        label_4->setText(QCoreApplication::translate("DialogColumns", "RSBN correction", nullptr));
        checkBoxPp->setText(QCoreApplication::translate("DialogColumns", "Pp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogColumns: public Ui_DialogColumns {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOLUMNS_H
