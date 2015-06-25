/****************************************************************************
** Meta object code from reading C++ file 'monitor_mountinfo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "monitor_mountinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor_mountinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_monitor_mountinfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      29,   18,   18,   18, 0x05,
      52,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   18,   18,   18, 0x08,
     113,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_monitor_mountinfo[] = {
    "monitor_mountinfo\0\0stopped()\0"
    "volumeRemoved(QString)\0"
    "volumeMiniProperties(volumeEntryProperties*)\0"
    "threadStopped()\0stop()\0"
};

void monitor_mountinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        monitor_mountinfo *_t = static_cast<monitor_mountinfo *>(_o);
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->volumeRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->volumeMiniProperties((*reinterpret_cast< volumeEntryProperties*(*)>(_a[1]))); break;
        case 3: _t->threadStopped(); break;
        case 4: _t->stop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData monitor_mountinfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject monitor_mountinfo::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_monitor_mountinfo,
      qt_meta_data_monitor_mountinfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &monitor_mountinfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *monitor_mountinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *monitor_mountinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_monitor_mountinfo))
        return static_cast<void*>(const_cast< monitor_mountinfo*>(this));
    return QThread::qt_metacast(_clname);
}

int monitor_mountinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void monitor_mountinfo::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void monitor_mountinfo::volumeRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void monitor_mountinfo::volumeMiniProperties(volumeEntryProperties * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
