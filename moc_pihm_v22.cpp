/****************************************************************************
** Meta object code from reading C++ file 'pihm_v22.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "6PIHMSimulation/1PIHM_v2.2/pihm_v22.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pihm_v22.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PIHM_v22_t {
    QByteArrayData data[13];
    char stringdata[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PIHM_v22_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PIHM_v22_t qt_meta_stringdata_PIHM_v22 = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 36),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 24),
QT_MOC_LITERAL(4, 72, 26),
QT_MOC_LITERAL(5, 99, 25),
QT_MOC_LITERAL(6, 125, 18),
QT_MOC_LITERAL(7, 144, 15),
QT_MOC_LITERAL(8, 160, 20),
QT_MOC_LITERAL(9, 181, 14),
QT_MOC_LITERAL(10, 196, 13),
QT_MOC_LITERAL(11, 210, 27),
QT_MOC_LITERAL(12, 238, 5)
    },
    "PIHM_v22\0on_pushButtonInputDataFolder_clicked\0"
    "\0on_pushButtonRun_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_pushButtonHelp_clicked\0pushButtonSetFocus\0"
    "CheckInputFiles\0CheckInputFileAccess\0"
    "CopyInputFiles\0CopyInputFile\0"
    "on_progressBar_valueChanged\0value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PIHM_v22[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    1,   70,    2, 0x08,
       9,    1,   73,    2, 0x08,
      10,    2,   76,    2, 0x08,
      11,    1,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void PIHM_v22::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PIHM_v22 *_t = static_cast<PIHM_v22 *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonInputDataFolder_clicked(); break;
        case 1: _t->on_pushButtonRun_clicked(); break;
        case 2: _t->on_pushButtonClose_clicked(); break;
        case 3: _t->on_pushButtonHelp_clicked(); break;
        case 4: _t->pushButtonSetFocus(); break;
        case 5: { int _r = _t->CheckInputFiles();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->CheckInputFileAccess((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->CopyInputFiles((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->CopyInputFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PIHM_v22::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PIHM_v22.data,
      qt_meta_data_PIHM_v22,  qt_static_metacall, 0, 0}
};


const QMetaObject *PIHM_v22::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PIHM_v22::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PIHM_v22.stringdata))
        return static_cast<void*>(const_cast< PIHM_v22*>(this));
    return QDialog::qt_metacast(_clname);
}

int PIHM_v22::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
