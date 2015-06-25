/****************************************************************************
** Meta object code from reading C++ file 'crypttask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "crypttask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crypttask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CryptTask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      31,   10,   10,   10, 0x05,
      52,   10,   10,   10, 0x05,
      66,   10,   10,   10, 0x05,
      79,   10,   10,   10, 0x05,
      94,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CryptTask[] = {
    "CryptTask\0\0progressUpdate(int)\0"
    "titleUpdate(QString)\0complete(int)\0"
    "md5mismach()\0enableCancel()\0disableCancel()\0"
    "terminate()\0"
};

void CryptTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CryptTask *_t = static_cast<CryptTask *>(_o);
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->titleUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->complete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->md5mismach(); break;
        case 4: _t->enableCancel(); break;
        case 5: _t->disableCancel(); break;
        case 6: _t->terminate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CryptTask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CryptTask::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CryptTask,
      qt_meta_data_CryptTask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CryptTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CryptTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CryptTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CryptTask))
        return static_cast<void*>(const_cast< CryptTask*>(this));
    return QThread::qt_metacast(_clname);
}

int CryptTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void CryptTask::progressUpdate(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CryptTask::titleUpdate(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CryptTask::complete(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CryptTask::md5mismach()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CryptTask::enableCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CryptTask::disableCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
