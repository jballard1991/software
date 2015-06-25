/****************************************************************************
** Meta object code from reading C++ file 'changepassworddialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "changepassworddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changepassworddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LxQt__Wallet__changePassWordDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   36,   35,   35, 0x05,
      61,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   35,   35,   35, 0x08,
      98,   35,   35,   35, 0x08,
     107,   35,   35,   35, 0x08,
     116,   35,   35,   35, 0x08,
     121,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LxQt__Wallet__changePassWordDialog[] = {
    "LxQt::Wallet::changePassWordDialog\0\0"
    ",\0password(QString,bool)\0"
    "walletpassWordChanged(bool)\0create()\0"
    "change()\0cancel()\0ok()\0ok_1()\0"
};

void LxQt::Wallet::changePassWordDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        changePassWordDialog *_t = static_cast<changePassWordDialog *>(_o);
        switch (_id) {
        case 0: _t->password((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->walletpassWordChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->create(); break;
        case 3: _t->change(); break;
        case 4: _t->cancel(); break;
        case 5: _t->ok(); break;
        case 6: _t->ok_1(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LxQt::Wallet::changePassWordDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LxQt::Wallet::changePassWordDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LxQt__Wallet__changePassWordDialog,
      qt_meta_data_LxQt__Wallet__changePassWordDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LxQt::Wallet::changePassWordDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LxQt::Wallet::changePassWordDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LxQt::Wallet::changePassWordDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LxQt__Wallet__changePassWordDialog))
        return static_cast<void*>(const_cast< changePassWordDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LxQt::Wallet::changePassWordDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LxQt::Wallet::changePassWordDialog::password(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LxQt::Wallet::changePassWordDialog::walletpassWordChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
