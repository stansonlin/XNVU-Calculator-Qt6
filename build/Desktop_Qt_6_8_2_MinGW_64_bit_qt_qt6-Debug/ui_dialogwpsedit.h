/********************************************************************************
** Form generated from reading UI file 'dialogwpsedit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWPSEDIT_H
#define UI_DIALOGWPSEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include "qframeclickable.h"

QT_BEGIN_NAMESPACE

class Ui_DialogWPSEdit
{
public:
    QListWidget *listWPS;
    QFrameClickable *frameDescription;
    QLabel *labelWPType;
    QLabel *labelIWPName2;
    QLabel *labelWPLatlon;
    QLabel *labelWPNote;
    QLabel *labelWPMagVar;
    QLabel *labelWPType2;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_CreateNew;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogWPSEdit)
    {
        if (DialogWPSEdit->objectName().isEmpty())
            DialogWPSEdit->setObjectName("DialogWPSEdit");
        DialogWPSEdit->resize(1095, 469);
        DialogWPSEdit->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"\n"
"QLabel\n"
"{\n"
"	color: rgb(107, 239, 0);\n"
"}\n"
"\n"
"#listWPS\n"
"{\n"
"	background-color: rgb(0, 30, 0);\n"
"	color: rgb(107, 239, 0);\n"
"\n"
"	border: 1px solid;\n"
"	border-color: rgb(73, 163, 0);\n"
"}\n"
"\n"
"#listWPS::item:selected\n"
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
"	background-color: rgb(0, 30, 0);\n"
""
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
"	border-color: rgb(73, 163, "
                        "0);\n"
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
        listWPS = new QListWidget(DialogWPSEdit);
        listWPS->setObjectName("listWPS");
        listWPS->setGeometry(QRect(10, 20, 561, 441));
        frameDescription = new QFrameClickable(DialogWPSEdit);
        frameDescription->setObjectName("frameDescription");
        frameDescription->setGeometry(QRect(580, 20, 502, 200));
        frameDescription->setMinimumSize(QSize(0, 200));
        frameDescription->setMaximumSize(QSize(16777215, 200));
        frameDescription->setFrameShape(QFrame::StyledPanel);
        frameDescription->setFrameShadow(QFrame::Raised);
        labelWPType = new QLabel(frameDescription);
        labelWPType->setObjectName("labelWPType");
        labelWPType->setGeometry(QRect(0, 40, 501, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        labelWPType->setFont(font);
        labelWPType->setStyleSheet(QString::fromUtf8(""));
        labelWPType->setAlignment(Qt::AlignCenter);
        labelIWPName2 = new QLabel(frameDescription);
        labelIWPName2->setObjectName("labelIWPName2");
        labelIWPName2->setGeometry(QRect(0, 70, 501, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIWPName2->sizePolicy().hasHeightForWidth());
        labelIWPName2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setUnderline(false);
        labelIWPName2->setFont(font1);
        labelIWPName2->setStyleSheet(QString::fromUtf8(""));
        labelIWPName2->setAlignment(Qt::AlignCenter);
        labelWPLatlon = new QLabel(frameDescription);
        labelWPLatlon->setObjectName("labelWPLatlon");
        labelWPLatlon->setGeometry(QRect(0, 100, 501, 31));
        sizePolicy.setHeightForWidth(labelWPLatlon->sizePolicy().hasHeightForWidth());
        labelWPLatlon->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setUnderline(false);
        labelWPLatlon->setFont(font2);
        labelWPLatlon->setStyleSheet(QString::fromUtf8(""));
        labelWPLatlon->setAlignment(Qt::AlignCenter);
        labelWPNote = new QLabel(frameDescription);
        labelWPNote->setObjectName("labelWPNote");
        labelWPNote->setGeometry(QRect(0, 170, 501, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("TeX Gyre Schola")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(false);
        labelWPNote->setFont(font3);
        labelWPMagVar = new QLabel(frameDescription);
        labelWPMagVar->setObjectName("labelWPMagVar");
        labelWPMagVar->setGeometry(QRect(0, 140, 502, 27));
        sizePolicy.setHeightForWidth(labelWPMagVar->sizePolicy().hasHeightForWidth());
        labelWPMagVar->setSizePolicy(sizePolicy);
        labelWPMagVar->setFont(font2);
        labelWPMagVar->setStyleSheet(QString::fromUtf8(""));
        labelWPMagVar->setAlignment(Qt::AlignCenter);
        labelWPType2 = new QLabel(frameDescription);
        labelWPType2->setObjectName("labelWPType2");
        labelWPType2->setGeometry(QRect(10, 10, 491, 21));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setUnderline(true);
        labelWPType2->setFont(font4);
        labelWPType2->setAlignment(Qt::AlignCenter);
        pushButton_Edit = new QPushButton(DialogWPSEdit);
        pushButton_Edit->setObjectName("pushButton_Edit");
        pushButton_Edit->setGeometry(QRect(580, 230, 96, 27));
        pushButton_Delete = new QPushButton(DialogWPSEdit);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(990, 230, 96, 27));
        pushButton_CreateNew = new QPushButton(DialogWPSEdit);
        pushButton_CreateNew->setObjectName("pushButton_CreateNew");
        pushButton_CreateNew->setGeometry(QRect(700, 230, 121, 27));
        pushButton = new QPushButton(DialogWPSEdit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(990, 430, 96, 27));

        retranslateUi(DialogWPSEdit);

        QMetaObject::connectSlotsByName(DialogWPSEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogWPSEdit)
    {
        DialogWPSEdit->setWindowTitle(QCoreApplication::translate("DialogWPSEdit", "XNVU Library", nullptr));
        labelWPType->setText(QString());
        labelIWPName2->setText(QString());
        labelWPLatlon->setText(QString());
        labelWPNote->setText(QString());
        labelWPMagVar->setText(QString());
        labelWPType2->setText(QString());
        pushButton_Edit->setText(QCoreApplication::translate("DialogWPSEdit", "Edit...", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("DialogWPSEdit", "Delete", nullptr));
        pushButton_CreateNew->setText(QCoreApplication::translate("DialogWPSEdit", "Create new...", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogWPSEdit", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWPSEdit: public Ui_DialogWPSEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWPSEDIT_H
