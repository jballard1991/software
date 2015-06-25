/****************************************************************************
** Meta object code from reading C++ file 'password_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "password_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'password_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LxQt__Wallet__password_dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      43,   30,   30,   30, 0x05,
      61,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   30,   30,   30, 0x08,
      89,   30,   30,   30, 0x08,
     100,   30,   30,   30, 0x08,
     124,   30,   30,   30, 0x08,
     131,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LxQt__Wallet__password_dialog[] = {
    "LxQt::Wallet::password_dialog\0\0"
    "cancelled()\0password(QString)\0"
    "createWallet(bool)\0pbSend()\0pbCancel()\0"
    "passwordIsCorrect(bool)\0pbOK()\0pbOK_2()\0"
};

void LxQt::Wallet::password_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        password_dialog *_t = static_cast<password_dialog *>(_o);
        switch (_id) {
        case 0: _t->cancelled(); break;
        case 1: _t->password((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->createWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pbSend(); break;
        case 4: _t->pbCancel(); break;
        case 5: _t->passwordIsCorrect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->pbOK(); break;
        case 7: _t->pbOK_2(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LxQt::Wallet::password_dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LxQt::Wallet::password_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LxQt__Wallet__password_dialog,
      qt_meta_data_LxQt__Wallet__password_dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LxQt::Wallet::password_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LxQt::Wallet::password_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LxQt::Wallet::password_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LxQt__Wallet__password_dialog))
        return static_cast<void*>(const_cast< password_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LxQt::Wallet::password_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LxQt::Wallet::password_dialog::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LxQt::Wallet::password_dialog::password(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LxQt::Wallet::password_dialog::createWallet(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
