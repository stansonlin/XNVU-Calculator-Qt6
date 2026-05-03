/********************************************************************************
** Form generated from reading UI file 'dialogrsbn.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRSBN_H
#define UI_DIALOGRSBN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include "qframeclickable.h"
#include "qrsbntable.h"

QT_BEGIN_NAMESPACE

class Ui_DialogRSBN
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBoxVORDME;
    QLabel *label_2;
    QSpinBox *spinBox;
    QFrameClickable *frameDescription;
    QLabel *labelWPType;
    QLabel *labelIWPName2;
    QLabel *labelWPLatlon;
    QLabel *labelWPNote;
    QLabel *labelWPMagVar;
    QLabel *labelWPType2;
    QRSBNTable *listRSBN;

    void setupUi(QDialog *DialogRSBN)
    {
        if (DialogRSBN->objectName().isEmpty())
            DialogRSBN->setObjectName("DialogRSBN");
        DialogRSBN->resize(1097, 439);
        DialogRSBN->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"#frameDescription\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
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
"#listRSBN"
                        "::item:selected\n"
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
"QSpinBox\n"
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
""
                        "QMenu::item:disabled\n"
"{\n"
"	background-color: rgb(0, 15, 0);\n"
"	color: rgb(27, 159, 0);;\n"
"}\n"
""));
        buttonBox = new QDialogButtonBox(DialogRSBN);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(930, 400, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBoxVORDME = new QCheckBox(DialogRSBN);
        checkBoxVORDME->setObjectName("checkBoxVORDME");
        checkBoxVORDME->setEnabled(true);
        checkBoxVORDME->setGeometry(QRect(604, 290, 200, 21));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBoxVORDME->sizePolicy().hasHeightForWidth());
        checkBoxVORDME->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        checkBoxVORDME->setFont(font);
        checkBoxVORDME->setLayoutDirection(Qt::RightToLeft);
        checkBoxVORDME->setCheckable(true);
        checkBoxVORDME->setChecked(false);
        label_2 = new QLabel(DialogRSBN);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(610, 330, 161, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox = new QSpinBox(DialogRSBN);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(787, 325, 91, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox->setMaximum(10000);
        spinBox->setValue(500);
        spinBox->setDisplayIntegerBase(10);
        frameDescription = new QFrameClickable(DialogRSBN);
        frameDescription->setObjectName("frameDescription");
        frameDescription->setGeometry(QRect(590, 20, 502, 200));
        frameDescription->setMinimumSize(QSize(0, 200));
        frameDescription->setMaximumSize(QSize(16777215, 200));
        frameDescription->setFrameShape(QFrame::StyledPanel);
        frameDescription->setFrameShadow(QFrame::Raised);
        labelWPType = new QLabel(frameDescription);
        labelWPType->setObjectName("labelWPType");
        labelWPType->setGeometry(QRect(0, 40, 501, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setUnderline(false);
        labelWPType->setFont(font1);
        labelWPType->setStyleSheet(QString::fromUtf8(""));
        labelWPType->setAlignment(Qt::AlignCenter);
        labelIWPName2 = new QLabel(frameDescription);
        labelIWPName2->setObjectName("labelIWPName2");
        labelIWPName2->setGeometry(QRect(0, 70, 501, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelIWPName2->sizePolicy().hasHeightForWidth());
        labelIWPName2->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setUnderline(false);
        labelIWPName2->setFont(font2);
        labelIWPName2->setStyleSheet(QString::fromUtf8(""));
        labelIWPName2->setAlignment(Qt::AlignCenter);
        labelWPLatlon = new QLabel(frameDescription);
        labelWPLatlon->setObjectName("labelWPLatlon");
        labelWPLatlon->setGeometry(QRect(0, 100, 501, 31));
        sizePolicy2.setHeightForWidth(labelWPLatlon->sizePolicy().hasHeightForWidth());
        labelWPLatlon->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setUnderline(false);
        labelWPLatlon->setFont(font3);
        labelWPLatlon->setStyleSheet(QString::fromUtf8(""));
        labelWPLatlon->setAlignment(Qt::AlignCenter);
        labelWPNote = new QLabel(frameDescription);
        labelWPNote->setObjectName("labelWPNote");
        labelWPNote->setGeometry(QRect(0, 170, 501, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setUnderline(false);
        labelWPNote->setFont(font4);
        labelWPMagVar = new QLabel(frameDescription);
        labelWPMagVar->setObjectName("labelWPMagVar");
        labelWPMagVar->setGeometry(QRect(0, 140, 502, 27));
        sizePolicy2.setHeightForWidth(labelWPMagVar->sizePolicy().hasHeightForWidth());
        labelWPMagVar->setSizePolicy(sizePolicy2);
        labelWPMagVar->setFont(font3);
        labelWPMagVar->setStyleSheet(QString::fromUtf8(""));
        labelWPMagVar->setAlignment(Qt::AlignCenter);
        labelWPType2 = new QLabel(frameDescription);
        labelWPType2->setObjectName("labelWPType2");
        labelWPType2->setGeometry(QRect(10, 10, 491, 21));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setUnderline(true);
        labelWPType2->setFont(font5);
        labelWPType2->setAlignment(Qt::AlignCenter);
        listRSBN = new QRSBNTable(DialogRSBN);
        listRSBN->setObjectName("listRSBN");
        listRSBN->setGeometry(QRect(15, 21, 561, 401));
        listRSBN->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listRSBN->setAutoScroll(false);
        listRSBN->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listRSBN->setSelectionMode(QAbstractItemView::SingleSelection);
        listRSBN->setSelectionBehavior(QAbstractItemView::SelectRows);
        listRSBN->horizontalHeader()->setHighlightSections(false);
        listRSBN->verticalHeader()->setVisible(false);
        listRSBN->verticalHeader()->setHighlightSections(false);

        retranslateUi(DialogRSBN);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogRSBN, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogRSBN, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogRSBN);
    } // setupUi

    void retranslateUi(QDialog *DialogRSBN)
    {
        DialogRSBN->setWindowTitle(QCoreApplication::translate("DialogRSBN", "Select correction beacon", nullptr));
        checkBoxVORDME->setText(QCoreApplication::translate("DialogRSBN", "VOR/DME correction", nullptr));
        label_2->setText(QCoreApplication::translate("DialogRSBN", "Max distance (KM)", nullptr));
        labelWPType->setText(QString());
        labelIWPName2->setText(QString());
        labelWPLatlon->setText(QString());
        labelWPNote->setText(QString());
        labelWPMagVar->setText(QString());
        labelWPType2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogRSBN: public Ui_DialogRSBN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRSBN_H
