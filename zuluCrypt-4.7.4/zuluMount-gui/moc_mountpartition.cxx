/****************************************************************************
** Meta object code from reading C++ file 'mountpartition.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mountpartition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mountpartition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mountPartition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      25,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      77,   15,   15,   15, 0x08,
      89,   15,   15,   15, 0x08,
     100,   15,   15,   15, 0x08,
     118,   15,   15,   15, 0x08,
     143,   15,   15,   15, 0x08,
     172,   15,   15,   15, 0x08,
     208,  206,   15,   15, 0x08,
     238,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mountPartition[] = {
    "mountPartition\0\0cancel()\0"
    "openMountPoint(QString)\0stateChanged(int)\0"
    "pbMount()\0pbOptions()\0pbCancel()\0"
    "pbOpenMountPath()\0showOffSetWindowOption()\0"
    "showFileSystemOptionWindow()\0"
    "checkBoxReadOnlyStateChanged(int)\0,\0"
    "deviceOffSet(QString,QString)\0"
    "doAction(QAction*)\0"
};

void mountPartition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mountPartition *_t = static_cast<mountPartition *>(_o);
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->openMountPoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pbMount(); break;
        case 4: _t->pbOptions(); break;
        case 5: _t->pbCancel(); break;
        case 6: _t->pbOpenMountPath(); break;
        case 7: _t->showOffSetWindowOption(); break;
        case 8: _t->showFileSystemOptionWindow(); break;
        case 9: _t->checkBoxReadOnlyStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->deviceOffSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->doAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mountPartition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mountPartition::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mountPartition,
      qt_meta_data_mountPartition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mountPartition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mountPartition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mountPartition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mountPartition))
        return static_cast<void*>(const_cast< mountPartition*>(this));
    return QWidget::qt_metacast(_clname);
}

int mountPartition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void mountPartition::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mountPartition::openMountPoint(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
