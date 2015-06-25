/****************************************************************************
** Meta object code from reading C++ file 'walletconfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "walletconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_walletconfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      29,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   50,   13,   13, 0x08,
     128,  123,   13,   13, 0x08,
     159,   13,   13,   13, 0x08,
     170,   13,   13,   13, 0x08,
     201,  180,   13,   13, 0x08,
     230,   13,   13,   13, 0x08,
     239,   13,   13,   13, 0x08,
     247,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_walletconfig[] = {
    "walletconfig\0\0HideUISignal()\0"
    "couldNotOpenWallet()\0current,previous\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "item\0itemClicked(QTableWidgetItem*)\0"
    "pbDelete()\0pbClose()\0volumeID,comment,key\0"
    "add(QString,QString,QString)\0cancel()\0"
    "pbAdd()\0walletIsOpen(bool)\0"
};

void walletconfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        walletconfig *_t = static_cast<walletconfig *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->couldNotOpenWallet(); break;
        case 2: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->pbDelete(); break;
        case 5: _t->pbClose(); break;
        case 6: _t->add((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->cancel(); break;
        case 8: _t->pbAdd(); break;
        case 9: _t->walletIsOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData walletconfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject walletconfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_walletconfig,
      qt_meta_data_walletconfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &walletconfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *walletconfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *walletconfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_walletconfig))
        return static_cast<void*>(const_cast< walletconfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int walletconfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void walletconfig::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void walletconfig::couldNotOpenWallet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
