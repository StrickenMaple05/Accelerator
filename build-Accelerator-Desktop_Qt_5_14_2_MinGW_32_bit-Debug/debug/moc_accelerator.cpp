/****************************************************************************
** Meta object code from reading C++ file 'accelerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Accelerator/accelerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accelerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accelerator_t {
    QByteArrayData data[21];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Accelerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Accelerator_t qt_meta_stringdata_Accelerator = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Accelerator"
QT_MOC_LITERAL(1, 12, 19), // "on_Input_textEdited"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "arg1"
QT_MOC_LITERAL(4, 38, 23), // "on_Autorization_clicked"
QT_MOC_LITERAL(5, 62, 21), // "on_RandomText_clicked"
QT_MOC_LITERAL(6, 84, 19), // "on_tutorial_clicked"
QT_MOC_LITERAL(7, 104, 16), // "on_About_clicked"
QT_MOC_LITERAL(8, 121, 15), // "on_Quit_clicked"
QT_MOC_LITERAL(9, 137, 14), // "IntroTextTimer"
QT_MOC_LITERAL(10, 152, 10), // "IntroTimer"
QT_MOC_LITERAL(11, 163, 9), // "TextTimer"
QT_MOC_LITERAL(12, 173, 14), // "RedBorderTimer"
QT_MOC_LITERAL(13, 188, 15), // "ShowResultTimer"
QT_MOC_LITERAL(14, 204, 16), // "RedrawSpeedTimer"
QT_MOC_LITERAL(15, 221, 15), // "SelectBacklight"
QT_MOC_LITERAL(16, 237, 1), // "c"
QT_MOC_LITERAL(17, 239, 19), // "SlowestCombinations"
QT_MOC_LITERAL(18, 259, 11), // "combination"
QT_MOC_LITERAL(19, 271, 4), // "time"
QT_MOC_LITERAL(20, 276, 13) // "DefaultValues"

    },
    "Accelerator\0on_Input_textEdited\0\0arg1\0"
    "on_Autorization_clicked\0on_RandomText_clicked\0"
    "on_tutorial_clicked\0on_About_clicked\0"
    "on_Quit_clicked\0IntroTextTimer\0"
    "IntroTimer\0TextTimer\0RedBorderTimer\0"
    "ShowResultTimer\0RedrawSpeedTimer\0"
    "SelectBacklight\0c\0SlowestCombinations\0"
    "combination\0time\0DefaultValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accelerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    2,  106,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QChar,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   18,   19,
    QMetaType::Void,

       0        // eod
};

void Accelerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Accelerator *>(_o);
        Q_UNUSED(_t)
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
        case 12: _t->SelectBacklight((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 13: _t->SlowestCombinations((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->DefaultValues(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Accelerator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Accelerator.data,
    qt_meta_data_Accelerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Accelerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accelerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accelerator.stringdata0))
        return static_cast<void*>(this);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
