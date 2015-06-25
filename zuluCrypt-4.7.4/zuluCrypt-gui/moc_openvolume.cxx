/****************************************************************************
** Meta object code from reading C++ file 'openvolume.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "openvolume.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openvolume.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_openvolume[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   11,   11,   11, 0x0a,
      96,   11,   11,   11, 0x0a,
     116,   11,   11,   11, 0x0a,
     125,   11,   11,   11, 0x0a,
     153,  151,   11,   11, 0x0a,
     188,  151,   11,   11, 0x0a,
     219,   11,   11,   11, 0x0a,
     235,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     253,   11,   11,   11, 0x08,
     264,   11,   11,   11, 0x08,
     299,  282,   11,   11, 0x08,
     355,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_openvolume[] = {
    "openvolume\0\0HideUISignal()\0"
    "clickedPartition(QString)\0"
    "tableEntryDoubleClicked(QTableWidgetItem*)\0"
    "ShowAllPartitions()\0HideUI()\0"
    "ShowNonSystemPartitions()\0,\0"
    "ShowPartitionList(QString,QString)\0"
    "partitionList(QString,QString)\0"
    "allowLUKSOnly()\0pbHelp()\0pbUUID()\0"
    "pbCancel()\0EnterKeyPressed()\0"
    "current,previous\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "partitionProperties(QStringList)\0"
};

void openvolume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        openvolume *_t = static_cast<openvolume *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->clickedPartition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->tableEntryDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->ShowAllPartitions(); break;
        case 4: _t->HideUI(); break;
        case 5: _t->ShowNonSystemPartitions(); break;
        case 6: _t->ShowPartitionList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->partitionList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->allowLUKSOnly(); break;
        case 9: _t->pbHelp(); break;
        case 10: _t->pbUUID(); break;
        case 11: _t->pbCancel(); break;
        case 12: _t->EnterKeyPressed(); break;
        case 13: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 14: _t->partitionProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData openvolume::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject openvolume::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_openvolume,
      qt_meta_data_openvolume, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &openvolume::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *openvolume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *openvolume::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_openvolume))
        return static_cast<void*>(const_cast< openvolume*>(this));
    return QDialog::qt_metacast(_clname);
}

int openvolume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void openvolume::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void openvolume::clickedPartition(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
