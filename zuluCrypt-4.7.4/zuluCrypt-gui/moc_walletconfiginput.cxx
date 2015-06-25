/****************************************************************************
** Meta object code from reading C++ file 'walletconfiginput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "walletconfiginput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletconfiginput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_walletconfiginput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   19,   18,   18, 0x05,
      69,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   18,   18,   18, 0x0a,
      87,   18,   18,   18, 0x08,
      95,   18,   18,   18, 0x08,
     108,   18,   18,   18, 0x08,
     126,   18,   18,   18, 0x08,
     141,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_walletconfiginput[] = {
    "walletconfiginput\0\0volumeId,comment,key\0"
    "add(QString,QString,QString)\0cancel()\0"
    "HideUI()\0pbAdd()\0slotCancel()\0"
    "pbImageFilePath()\0pbVolumePath()\0"
    "setvolumeID(QString)\0"
};

void walletconfiginput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        walletconfiginput *_t = static_cast<walletconfiginput *>(_o);
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->cancel(); break;
        case 2: _t->HideUI(); break;
        case 3: _t->pbAdd(); break;
        case 4: _t->slotCancel(); break;
        case 5: _t->pbImageFilePath(); break;
        case 6: _t->pbVolumePath(); break;
        case 7: _t->setvolumeID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData walletconfiginput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject walletconfiginput::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_walletconfiginput,
      qt_meta_data_walletconfiginput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &walletconfiginput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *walletconfiginput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *walletconfiginput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_walletconfiginput))
        return static_cast<void*>(const_cast< walletconfiginput*>(this));
    return QDialog::qt_metacast(_clname);
}

int walletconfiginput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void walletconfiginput::add(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void walletconfiginput::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
