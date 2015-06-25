/****************************************************************************
** Meta object code from reading C++ file 'lxqt_internal_wallet.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lxqt_internal_wallet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqt_internal_wallet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LxQt__Wallet__internalWallet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      49,   29,   29,   29, 0x05,
      73,   29,   29,   29, 0x05,
     101,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   29,  122,   29, 0x08,
     147,   29,   29,   29, 0x08,
     161,  159,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LxQt__Wallet__internalWallet[] = {
    "LxQt::Wallet::internalWallet\0\0"
    "walletIsOpen(bool)\0passwordIsCorrect(bool)\0"
    "walletpassWordChanged(bool)\0"
    "getPassWord(QString)\0bool\0openWallet(QString)\0"
    "cancelled()\0,\0password(QString,bool)\0"
};

void LxQt::Wallet::internalWallet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        internalWallet *_t = static_cast<internalWallet *>(_o);
        switch (_id) {
        case 0: _t->walletIsOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->passwordIsCorrect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->walletpassWordChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->getPassWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->openWallet((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->cancelled(); break;
        case 6: _t->password((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LxQt::Wallet::internalWallet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LxQt::Wallet::internalWallet::staticMetaObject = {
    { &LxQt::Wallet::Wallet::staticMetaObject, qt_meta_stringdata_LxQt__Wallet__internalWallet,
      qt_meta_data_LxQt__Wallet__internalWallet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LxQt::Wallet::internalWallet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LxQt::Wallet::internalWallet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LxQt::Wallet::internalWallet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LxQt__Wallet__internalWallet))
        return static_cast<void*>(const_cast< internalWallet*>(this));
    typedef LxQt::Wallet::Wallet QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int LxQt::Wallet::internalWallet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef LxQt::Wallet::Wallet QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
void LxQt::Wallet::internalWallet::walletIsOpen(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LxQt::Wallet::internalWallet::passwordIsCorrect(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LxQt::Wallet::internalWallet::walletpassWordChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LxQt::Wallet::internalWallet::getPassWord(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
