/****************************************************************************
** Meta object code from reading C++ file 'serial_controler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Serial/serial_controler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial_controler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Serial_Controler_t {
    QByteArrayData data[17];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Serial_Controler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Serial_Controler_t qt_meta_stringdata_Serial_Controler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Serial_Controler"
QT_MOC_LITERAL(1, 17, 16), // "SignalMOdelfalge"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(4, 67, 5), // "index"
QT_MOC_LITERAL(5, 73, 20), // "on_BTN_creat_clicked"
QT_MOC_LITERAL(6, 94, 7), // "checked"
QT_MOC_LITERAL(7, 102, 25), // "on_Stop_Recevie_2_clicked"
QT_MOC_LITERAL(8, 128, 22), // "on_Radio_Times_clicked"
QT_MOC_LITERAL(9, 151, 21), // "on_Radio_Coms_clicked"
QT_MOC_LITERAL(10, 173, 23), // "on_Radio_ComSet_clicked"
QT_MOC_LITERAL(11, 197, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 219, 15), // "slots_DeleteBTN"
QT_MOC_LITERAL(13, 235, 3), // "btn"
QT_MOC_LITERAL(14, 239, 17), // "slotButtonClicked"
QT_MOC_LITERAL(15, 257, 5), // "datas"
QT_MOC_LITERAL(16, 263, 4) // "btns"

    },
    "Serial_Controler\0SignalMOdelfalge\0\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_BTN_creat_clicked\0checked\0"
    "on_Stop_Recevie_2_clicked\0"
    "on_Radio_Times_clicked\0on_Radio_Coms_clicked\0"
    "on_Radio_ComSet_clicked\0on_pushButton_clicked\0"
    "slots_DeleteBTN\0btn\0slotButtonClicked\0"
    "datas\0btns"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Serial_Controler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       7,    0,   73,    2, 0x08 /* Private */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    0,   76,    2, 0x08 /* Private */,
      11,    0,   77,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      14,    2,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   15,   16,

       0        // eod
};

void Serial_Controler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Serial_Controler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalMOdelfalge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_BTN_creat_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_Stop_Recevie_2_clicked(); break;
        case 4: _t->on_Radio_Times_clicked(); break;
        case 5: _t->on_Radio_Coms_clicked(); break;
        case 6: _t->on_Radio_ComSet_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->slots_DeleteBTN((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->slotButtonClicked((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Serial_Controler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial_Controler::SignalMOdelfalge)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Serial_Controler::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Serial_Controler.data,
    qt_meta_data_Serial_Controler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Serial_Controler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Serial_Controler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Serial_Controler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Serial_Controler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Serial_Controler::SignalMOdelfalge(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
