/****************************************************************************
** Meta object code from reading C++ file 'keygenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QueFuncione/keygenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keygenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyGenerator_t {
    QByteArrayData data[24];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyGenerator_t qt_meta_stringdata_KeyGenerator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KeyGenerator"
QT_MOC_LITERAL(1, 13, 11), // "typeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "sizeChanged"
QT_MOC_LITERAL(4, 38, 13), // "amountChanged"
QT_MOC_LITERAL(5, 52, 13), // "dbnameChanged"
QT_MOC_LITERAL(6, 66, 15), // "custnameChanged"
QT_MOC_LITERAL(7, 82, 18), // "custaddressChanged"
QT_MOC_LITERAL(8, 101, 15), // "toppingsChanged"
QT_MOC_LITERAL(9, 117, 12), // "typesChanged"
QT_MOC_LITERAL(10, 130, 12), // "keyGenerated"
QT_MOC_LITERAL(11, 143, 7), // "success"
QT_MOC_LITERAL(12, 151, 10), // "totalPrice"
QT_MOC_LITERAL(13, 162, 4), // "info"
QT_MOC_LITERAL(14, 167, 4), // "tops"
QT_MOC_LITERAL(15, 172, 11), // "generateKey"
QT_MOC_LITERAL(16, 184, 4), // "type"
QT_MOC_LITERAL(17, 189, 4), // "size"
QT_MOC_LITERAL(18, 194, 6), // "amount"
QT_MOC_LITERAL(19, 201, 6), // "dbname"
QT_MOC_LITERAL(20, 208, 8), // "custname"
QT_MOC_LITERAL(21, 217, 11), // "custaddress"
QT_MOC_LITERAL(22, 229, 8), // "toppings"
QT_MOC_LITERAL(23, 238, 5) // "types"

    },
    "KeyGenerator\0typeChanged\0\0sizeChanged\0"
    "amountChanged\0dbnameChanged\0custnameChanged\0"
    "custaddressChanged\0toppingsChanged\0"
    "typesChanged\0keyGenerated\0success\0"
    "totalPrice\0info\0tops\0generateKey\0type\0"
    "size\0amount\0dbname\0custname\0custaddress\0"
    "toppings\0types"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       8,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    4,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,
      22, QMetaType::QString, 0x00495103,
      23, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void KeyGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->amountChanged(); break;
        case 3: _t->dbnameChanged(); break;
        case 4: _t->custnameChanged(); break;
        case 5: _t->custaddressChanged(); break;
        case 6: _t->toppingsChanged(); break;
        case 7: _t->typesChanged(); break;
        case 8: _t->keyGenerated((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->generateKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::typeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::sizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::amountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::dbnameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::custnameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::custaddressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::toppingsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::typesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (KeyGenerator::*)(bool , int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyGenerator::keyGenerated)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeyGenerator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->amount(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->dbname(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->custname(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->custaddress(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->toppings(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->types(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KeyGenerator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSize(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAmount(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDbname(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setCustname(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCustaddress(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setToppings(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KeyGenerator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_KeyGenerator.data,
    qt_meta_data_KeyGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KeyGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyGenerator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KeyGenerator::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KeyGenerator::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KeyGenerator::amountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KeyGenerator::dbnameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KeyGenerator::custnameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KeyGenerator::custaddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KeyGenerator::toppingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KeyGenerator::typesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KeyGenerator::keyGenerated(bool _t1, int _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
