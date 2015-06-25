/****************************************************************************
** Meta object code from reading C++ file 'erasedevice.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "erasedevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'erasedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_erasedevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      28,   12,   12,   12, 0x05,
      46,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   12,   12,   12, 0x08,
      76,   12,   12,   12, 0x08,
      89,   12,   12,   12, 0x08,
      99,   12,   12,   12, 0x08,
     110,   12,   12,   12, 0x08,
     119,   12,   12,   12, 0x08,
     133,   12,   12,   12, 0x08,
     150,   12,   12,   12, 0x08,
     167,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_erasedevice[] = {
    "erasedevice\0\0HideUISignal()\0"
    "complete(QString)\0sendProgress(int)\0"
    "enableAll()\0disableAll()\0pbStart()\0"
    "pbCancel()\0pbFile()\0pbPartition()\0"
    "setProgress(int)\0setPath(QString)\0"
    "taskResult(int)\0"
};

void erasedevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        erasedevice *_t = static_cast<erasedevice *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->complete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->enableAll(); break;
        case 4: _t->disableAll(); break;
        case 5: _t->pbStart(); break;
        case 6: _t->pbCancel(); break;
        case 7: _t->pbFile(); break;
        case 8: _t->pbPartition(); break;
        case 9: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->taskResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData erasedevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject erasedevice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_erasedevice,
      qt_meta_data_erasedevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &erasedevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *erasedevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *erasedevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_erasedevice))
        return static_cast<void*>(const_cast< erasedevice*>(this));
    return QDialog::qt_metacast(_clname);
}

int erasedevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void erasedevice::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void erasedevice::complete(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void erasedevice::sendProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
