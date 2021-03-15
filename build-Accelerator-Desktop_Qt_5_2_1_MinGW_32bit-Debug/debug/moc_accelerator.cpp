/****************************************************************************
** Meta object code from reading C++ file 'accelerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Accelerator/Accelerator/accelerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accelerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Accelerator_t {
    QByteArrayData data[22];
    char stringdata[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Accelerator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Accelerator_t qt_meta_stringdata_Accelerator = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 19),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 4),
QT_MOC_LITERAL(4, 38, 23),
QT_MOC_LITERAL(5, 62, 21),
QT_MOC_LITERAL(6, 84, 19),
QT_MOC_LITERAL(7, 104, 16),
QT_MOC_LITERAL(8, 121, 15),
QT_MOC_LITERAL(9, 137, 14),
QT_MOC_LITERAL(10, 152, 10),
QT_MOC_LITERAL(11, 163, 9),
QT_MOC_LITERAL(12, 173, 14),
QT_MOC_LITERAL(13, 188, 15),
QT_MOC_LITERAL(14, 204, 16),
QT_MOC_LITERAL(15, 221, 15),
QT_MOC_LITERAL(16, 237, 8),
QT_MOC_LITERAL(17, 246, 1),
QT_MOC_LITERAL(18, 248, 19),
QT_MOC_LITERAL(19, 268, 11),
QT_MOC_LITERAL(20, 280, 4),
QT_MOC_LITERAL(21, 285, 13)
    },
    "Accelerator\0on_Input_textEdited\0\0arg1\0"
    "on_Autorization_clicked\0on_RandomText_clicked\0"
    "on_tutorial_clicked\0on_About_clicked\0"
    "on_Quit_clicked\0IntroTextTimer\0"
    "IntroTimer\0TextTimer\0RedBorderTimer\0"
    "ShowResultTimer\0RedrawSpeedTimer\0"
    "SelectBacklight\0QCharRef\0c\0"
    "SlowestCombinations\0combination\0time\0"
    "DefaultValues\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accelerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08,
       4,    0,   92,    2, 0x08,
       5,    0,   93,    2, 0x08,
       6,    0,   94,    2, 0x08,
       7,    0,   95,    2, 0x08,
       8,    0,   96,    2, 0x08,
       9,    0,   97,    2, 0x08,
      10,    0,   98,    2, 0x08,
      11,    0,   99,    2, 0x08,
      12,    0,  100,    2, 0x08,
      13,    0,  101,    2, 0x08,
      14,    0,  102,    2, 0x08,
      15,    1,  103,    2, 0x08,
      18,    2,  106,    2, 0x08,
      21,    0,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
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
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   19,   20,
    QMetaType::Void,

       0        // eod
};

void Accelerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Accelerator *_t = static_cast<Accelerator *>(_o);
        switch (_id) {
        case 0: _t->on_Input_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_Autorization_clicked(); break;
        case 2: _t->on_RandomText_clicked(); break;
        case 3: _t->on_tutorial_clicked(); break;
        case 4: _t->on_About_clicked(); break;
        case 5: _t->on_Quit_clicked(); break;
        case 6: _t->IntroTextTimer(); break;
        case 7: _t->IntroTimer(); break;
        case 8: _t->TextTimer(); break;
        case 9: _t->RedBorderTimer(); break;
        case 10: _t->ShowResultTimer(); break;
        case 11: _t->RedrawSpeedTimer(); break;
        case 12: _t->SelectBacklight((*reinterpret_cast< QCharRef(*)>(_a[1]))); break;
        case 13: _t->SlowestCombinations((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->DefaultValues(); break;
        default: ;
        }
    }
}

const QMetaObject Accelerator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Accelerator.data,
      qt_meta_data_Accelerator,  qt_static_metacall, 0, 0}
};


const QMetaObject *Accelerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accelerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Accelerator.stringdata))
        return static_cast<void*>(const_cast< Accelerator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Accelerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
