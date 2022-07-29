/****************************************************************************
** Meta object code from reading C++ file 'movebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Serial/movebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoveButton_t {
    QByteArrayData data[8];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveButton_t qt_meta_stringdata_MoveButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MoveButton"
QT_MOC_LITERAL(1, 11, 17), // "Signals_DeleteBTN"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "movebtn_clicked"
QT_MOC_LITERAL(4, 46, 5), // "MyDel"
QT_MOC_LITERAL(5, 52, 1), // "x"
QT_MOC_LITERAL(6, 54, 7), // "GETBTNS"
QT_MOC_LITERAL(7, 62, 7) // "DELBTNS"

    },
    "MoveButton\0Signals_DeleteBTN\0\0"
    "movebtn_clicked\0MyDel\0x\0GETBTNS\0DELBTNS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MoveButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MoveButton *_t = static_cast<MoveButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signals_DeleteBTN((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->movebtn_clicked(); break;
        case 2: _t->MyDel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->GETBTNS(); break;
        case 4: _t->DELBTNS(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MoveButton::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveButton::Signals_DeleteBTN)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MoveButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveButton::movebtn_clicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MoveButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_MoveButton.data,
      qt_meta_data_MoveButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MoveButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int MoveButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MoveButton::Signals_DeleteBTN(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MoveButton::movebtn_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
