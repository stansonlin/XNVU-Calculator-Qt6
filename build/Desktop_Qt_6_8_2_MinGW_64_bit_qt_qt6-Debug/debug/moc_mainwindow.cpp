/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "finished",
    "",
    "quit",
    "showFlightplanContextMenu",
    "pos",
    "showSearchListContextMenu",
    "showXPlaneSettings",
    "importFMS",
    "exportFMS",
    "importFMS_KLN90B",
    "exportFMS_KLN90B",
    "printOnPDF",
    "loadNVUFlightplan",
    "saveNVUFlightPlan",
    "autoGenerateCorrectionBeacons",
    "tableGoUp",
    "tableGoDown",
    "goDirectToFieldClicked",
    "QLineEditWP*",
    "wp",
    "clickedDataLabels",
    "QLabelClick*",
    "_label",
    "deleteCurrentWaypoint",
    "setWaypointDescription",
    "const NVUPOINT*",
    "printPreview",
    "QPagedPaintDevice*",
    "printer",
    "drawNVUHeader",
    "QPainter&",
    "painter",
    "NVUPOINT*",
    "dep",
    "arr",
    "fork",
    "int&",
    "y",
    "painterDrawRunways",
    "ap",
    "x",
    "isArrival",
    "painterDrawSummary",
    "std::vector<NVUPOINT*>&",
    "lWP",
    "painterDrawNVUPoint",
    "wpNumber",
    "isArr",
    "clearFlightplanTimeout",
    "on_lineEdit_textChanged",
    "arg1",
    "on_listWidget_itemDoubleClicked",
    "QListWidgetItem*",
    "item",
    "on_pushButtonPrint_clicked",
    "on_pushButtonInsertBefore_clicked",
    "on_pushButtonReplace_clicked",
    "on_pushButtonInsertAfter_clicked",
    "on_tableWidget_clicked",
    "QModelIndex",
    "index",
    "on_listWidget_currentRowChanged",
    "currentRow",
    "on_tableWidget_itemSelectionChanged",
    "on_tableWidget_cellDoubleClicked",
    "row",
    "column",
    "on_pushButton_ClearFlightplan_clicked",
    "on_pushButtonRouteInsertAfter_clicked",
    "on_pushButtonRouteInsertBefore_clicked",
    "on_pushButtonRouteReplace_clicked",
    "on_actionOptions_triggered",
    "on_frameDescription_clicked",
    "on_pushButton_showAIRAC_Airways_clicked",
    "on_pushButton_showRSBN_clicked",
    "on_pushButton_showXNVU_clicked",
    "on_pushButton_showNDB_clicked",
    "on_pushButton_showVOR_clicked",
    "on_pushButton_showVORDME_clicked",
    "on_pushButton_showDME_clicked",
    "on_pushButton_showFix_clicked",
    "on_pushButton_showAirports_clicked",
    "on_actionShow_feet_triggered",
    "on_pushButtonDeleteWaypoint_clicked",
    "on_actionColumns_2_triggered",
    "on_actionXNVU_library_triggered",
    "on_dateEdit_userDateChanged",
    "date",
    "on_listWidget_clicked",
    "on_pushButtonDTInsert_clicked",
    "on_pushButtonSetDate_clicked",
    "on_doubleSpinBox_MACH_valueChanged",
    "on_doubleSpinBox_VS_valueChanged",
    "on_doubleSpinBox_TWC_valueChanged",
    "on_doubleSpinBoxFL_valueChanged",
    "on_doubleSpinBox_ISA_valueChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  392,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  393,    2, 0x08,    2 /* Private */,
       4,    1,  394,    2, 0x08,    3 /* Private */,
       6,    1,  397,    2, 0x08,    5 /* Private */,
       7,    0,  400,    2, 0x08,    7 /* Private */,
       8,    0,  401,    2, 0x08,    8 /* Private */,
       9,    0,  402,    2, 0x08,    9 /* Private */,
      10,    0,  403,    2, 0x08,   10 /* Private */,
      11,    0,  404,    2, 0x08,   11 /* Private */,
      12,    0,  405,    2, 0x08,   12 /* Private */,
      13,    0,  406,    2, 0x08,   13 /* Private */,
      14,    0,  407,    2, 0x08,   14 /* Private */,
      15,    0,  408,    2, 0x08,   15 /* Private */,
      16,    0,  409,    2, 0x08,   16 /* Private */,
      17,    0,  410,    2, 0x08,   17 /* Private */,
      18,    1,  411,    2, 0x08,   18 /* Private */,
      21,    1,  414,    2, 0x08,   20 /* Private */,
      24,    0,  417,    2, 0x08,   22 /* Private */,
      25,    1,  418,    2, 0x08,   23 /* Private */,
      27,    1,  421,    2, 0x08,   25 /* Private */,
      30,    5,  424,    2, 0x08,   27 /* Private */,
      39,    5,  435,    2, 0x08,   33 /* Private */,
      43,    3,  446,    2, 0x08,   39 /* Private */,
      46,    5,  453,    2, 0x08,   43 /* Private */,
      49,    0,  464,    2, 0x08,   49 /* Private */,
      50,    1,  465,    2, 0x08,   50 /* Private */,
      52,    1,  468,    2, 0x08,   52 /* Private */,
      55,    0,  471,    2, 0x08,   54 /* Private */,
      56,    0,  472,    2, 0x08,   55 /* Private */,
      57,    0,  473,    2, 0x08,   56 /* Private */,
      58,    0,  474,    2, 0x08,   57 /* Private */,
      59,    1,  475,    2, 0x08,   58 /* Private */,
      62,    1,  478,    2, 0x08,   60 /* Private */,
      64,    0,  481,    2, 0x08,   62 /* Private */,
      65,    2,  482,    2, 0x08,   63 /* Private */,
      68,    0,  487,    2, 0x08,   66 /* Private */,
      69,    0,  488,    2, 0x08,   67 /* Private */,
      70,    0,  489,    2, 0x08,   68 /* Private */,
      71,    0,  490,    2, 0x08,   69 /* Private */,
      72,    0,  491,    2, 0x08,   70 /* Private */,
      73,    0,  492,    2, 0x08,   71 /* Private */,
      74,    0,  493,    2, 0x08,   72 /* Private */,
      75,    0,  494,    2, 0x08,   73 /* Private */,
      76,    0,  495,    2, 0x08,   74 /* Private */,
      77,    0,  496,    2, 0x08,   75 /* Private */,
      78,    0,  497,    2, 0x08,   76 /* Private */,
      79,    0,  498,    2, 0x08,   77 /* Private */,
      80,    0,  499,    2, 0x08,   78 /* Private */,
      81,    0,  500,    2, 0x08,   79 /* Private */,
      82,    0,  501,    2, 0x08,   80 /* Private */,
      83,    0,  502,    2, 0x08,   81 /* Private */,
      84,    0,  503,    2, 0x08,   82 /* Private */,
      85,    0,  504,    2, 0x08,   83 /* Private */,
      86,    0,  505,    2, 0x08,   84 /* Private */,
      87,    1,  506,    2, 0x08,   85 /* Private */,
      89,    1,  509,    2, 0x08,   87 /* Private */,
      90,    0,  512,    2, 0x08,   89 /* Private */,
      91,    0,  513,    2, 0x08,   90 /* Private */,
      92,    1,  514,    2, 0x08,   91 /* Private */,
      93,    1,  517,    2, 0x08,   93 /* Private */,
      94,    1,  520,    2, 0x08,   95 /* Private */,
      95,    1,  523,    2, 0x08,   97 /* Private */,
      96,    1,  526,    2, 0x08,   99 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   20,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 33, 0x80000000 | 33, QMetaType::Double, 0x80000000 | 37,   32,   34,   35,   36,   38,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 33, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   32,   40,   41,   38,   42,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 44, QMetaType::Int,   32,   45,   38,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 33, QMetaType::Int, QMetaType::Bool, 0x80000000 | 37,   32,   20,   47,   48,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   66,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   88,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   51,
    QMetaType::Void, QMetaType::Double,   51,
    QMetaType::Void, QMetaType::Double,   51,
    QMetaType::Void, QMetaType::Double,   51,
    QMetaType::Void, QMetaType::Double,   51,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFlightplanContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'showSearchListContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'showXPlaneSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importFMS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportFMS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importFMS_KLN90B'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportFMS_KLN90B'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printOnPDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadNVUFlightplan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveNVUFlightPlan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoGenerateCorrectionBeacons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tableGoUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tableGoDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDirectToFieldClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEditWP *, std::false_type>,
        // method 'clickedDataLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabelClick *, std::false_type>,
        // method 'deleteCurrentWaypoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setWaypointDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const NVUPOINT *, std::false_type>,
        // method 'printPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPagedPaintDevice *, std::false_type>,
        // method 'drawNVUHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPainter &, std::false_type>,
        QtPrivate::TypeAndForceComplete<NVUPOINT *, std::false_type>,
        QtPrivate::TypeAndForceComplete<NVUPOINT *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'painterDrawRunways'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPainter &, std::false_type>,
        QtPrivate::TypeAndForceComplete<NVUPOINT *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'painterDrawSummary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPainter &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<NVUPOINT*> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'painterDrawNVUPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPainter &, std::false_type>,
        QtPrivate::TypeAndForceComplete<NVUPOINT *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'clearFlightplanTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_listWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_pushButtonPrint_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonInsertBefore_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonReplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonInsertAfter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_listWidget_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_ClearFlightplan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRouteInsertAfter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRouteInsertBefore_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRouteReplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOptions_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_frameDescription_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showAIRAC_Airways_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showRSBN_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showXNVU_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showNDB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showVOR_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showVORDME_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showDME_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showFix_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_showAirports_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShow_feet_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDeleteWaypoint_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionColumns_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionXNVU_library_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateEdit_userDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_listWidget_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButtonDTInsert_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSetDate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_doubleSpinBox_MACH_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_doubleSpinBox_VS_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_doubleSpinBox_TWC_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_doubleSpinBoxFL_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_doubleSpinBox_ISA_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->quit(); break;
        case 2: _t->showFlightplanContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->showSearchListContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->showXPlaneSettings(); break;
        case 5: _t->importFMS(); break;
        case 6: _t->exportFMS(); break;
        case 7: _t->importFMS_KLN90B(); break;
        case 8: _t->exportFMS_KLN90B(); break;
        case 9: _t->printOnPDF(); break;
        case 10: _t->loadNVUFlightplan(); break;
        case 11: _t->saveNVUFlightPlan(); break;
        case 12: _t->autoGenerateCorrectionBeacons(); break;
        case 13: _t->tableGoUp(); break;
        case 14: _t->tableGoDown(); break;
        case 15: _t->goDirectToFieldClicked((*reinterpret_cast< std::add_pointer_t<QLineEditWP*>>(_a[1]))); break;
        case 16: _t->clickedDataLabels((*reinterpret_cast< std::add_pointer_t<QLabelClick*>>(_a[1]))); break;
        case 17: _t->deleteCurrentWaypoint(); break;
        case 18: _t->setWaypointDescription((*reinterpret_cast< std::add_pointer_t<const NVUPOINT*>>(_a[1]))); break;
        case 19: _t->printPreview((*reinterpret_cast< std::add_pointer_t<QPagedPaintDevice*>>(_a[1]))); break;
        case 20: _t->drawNVUHeader((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NVUPOINT*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<NVUPOINT*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[5]))); break;
        case 21: _t->painterDrawRunways((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NVUPOINT*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 22: _t->painterDrawSummary((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<NVUPOINT*>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 23: _t->painterDrawNVUPoint((*reinterpret_cast< std::add_pointer_t<QPainter&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<NVUPOINT*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[5]))); break;
        case 24: _t->clearFlightplanTimeout(); break;
        case 25: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 27: _t->on_pushButtonPrint_clicked(); break;
        case 28: _t->on_pushButtonInsertBefore_clicked(); break;
        case 29: _t->on_pushButtonReplace_clicked(); break;
        case 30: _t->on_pushButtonInsertAfter_clicked(); break;
        case 31: _t->on_tableWidget_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 32: _t->on_listWidget_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_tableWidget_itemSelectionChanged(); break;
        case 34: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 35: _t->on_pushButton_ClearFlightplan_clicked(); break;
        case 36: _t->on_pushButtonRouteInsertAfter_clicked(); break;
        case 37: _t->on_pushButtonRouteInsertBefore_clicked(); break;
        case 38: _t->on_pushButtonRouteReplace_clicked(); break;
        case 39: _t->on_actionOptions_triggered(); break;
        case 40: _t->on_frameDescription_clicked(); break;
        case 41: _t->on_pushButton_showAIRAC_Airways_clicked(); break;
        case 42: _t->on_pushButton_showRSBN_clicked(); break;
        case 43: _t->on_pushButton_showXNVU_clicked(); break;
        case 44: _t->on_pushButton_showNDB_clicked(); break;
        case 45: _t->on_pushButton_showVOR_clicked(); break;
        case 46: _t->on_pushButton_showVORDME_clicked(); break;
        case 47: _t->on_pushButton_showDME_clicked(); break;
        case 48: _t->on_pushButton_showFix_clicked(); break;
        case 49: _t->on_pushButton_showAirports_clicked(); break;
        case 50: _t->on_actionShow_feet_triggered(); break;
        case 51: _t->on_pushButtonDeleteWaypoint_clicked(); break;
        case 52: _t->on_actionColumns_2_triggered(); break;
        case 53: _t->on_actionXNVU_library_triggered(); break;
        case 54: _t->on_dateEdit_userDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 55: _t->on_listWidget_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 56: _t->on_pushButtonDTInsert_clicked(); break;
        case 57: _t->on_pushButtonSetDate_clicked(); break;
        case 58: _t->on_doubleSpinBox_MACH_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 59: _t->on_doubleSpinBox_VS_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 60: _t->on_doubleSpinBox_TWC_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 61: _t->on_doubleSpinBoxFL_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 62: _t->on_doubleSpinBox_ISA_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEditWP* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabelClick* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MainWindow::*)();
            if (_q_method_type _q_method = &MainWindow::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
