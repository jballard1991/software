/****************************************************************************
** Meta object code from reading C++ file 'events.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "events.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'events.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_events[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      18,    7,    7,    7, 0x05,
      41,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_events[] = {
    "events\0\0stopped()\0volumeRemoved(QString)\0"
    "volumeMiniProperties(volumeEntryProperties*)\0"
    "threadStopped()\0"
};

void events::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        events *_t = static_cast<events *>(_o);
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->volumeRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->volumeMiniProperties((*reinterpret_cast< volumeEntryProperties*(*)>(_a[1]))); break;
        case 3: _t->threadStopped(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData events::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject events::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_events,
      qt_meta_data_events, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &events::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *events::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *events::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_events))
        return static_cast<void*>(const_cast< events*>(this));
    return QThread::qt_metacast(_clname);
}

int events::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void events::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void events::volumeRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void events::volumeMiniProperties(volumeEntryProperties * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
