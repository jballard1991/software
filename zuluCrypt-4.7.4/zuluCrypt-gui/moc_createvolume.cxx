/****************************************************************************
** Meta object code from reading C++ file 'createvolume.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "createvolume.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createvolume.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_createvolume[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      81,   14,   13,   13, 0x05,
     132,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,  147,   13,   13, 0x0a,
     177,  147,   13,   13, 0x0a,
     195,   13,   13,   13, 0x0a,
     204,   13,   13,   13, 0x08,
     224,   13,   13,   13, 0x08,
     242,   13,   13,   13, 0x08,
     260,   13,   13,   13, 0x08,
     280,   13,   13,   13, 0x08,
     300,   13,   13,   13, 0x08,
     316,   13,   13,   13, 0x08,
     338,   13,   13,   13, 0x08,
     356,   13,   13,   13, 0x08,
     372,   13,   13,   13, 0x08,
     390,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_createvolume[] = {
    "createvolume\0\0"
    "fileSystem,containterType,volumePath,passphrase,passphraseFromFile\0"
    "CreateVolume(QString,QString,QString,QString,bool)\0"
    "HideUISignal()\0volume\0ShowPartition(QString)\0"
    "ShowFile(QString)\0HideUI()\0"
    "keyChanged(QString)\0pbCreateClicked()\0"
    "pbCancelClicked()\0cbNormalVolume(int)\0"
    "cbHiddenVolume(int)\0pbOpenKeyFile()\0"
    "pbOpenHiddenKeyFile()\0taskFinished(int)\0"
    "volumeType(int)\0dialogResult(int)\0"
    "setOptions(int)\0"
};

void createvolume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        createvolume *_t = static_cast<createvolume *>(_o);
        switch (_id) {
        case 0: _t->CreateVolume((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->HideUISignal(); break;
        case 2: _t->ShowPartition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ShowFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->HideUI(); break;
        case 5: _t->keyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->pbCreateClicked(); break;
        case 7: _t->pbCancelClicked(); break;
        case 8: _t->cbNormalVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->cbHiddenVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->pbOpenKeyFile(); break;
        case 11: _t->pbOpenHiddenKeyFile(); break;
        case 12: _t->taskFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->volumeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->dialogResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData createvolume::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject createvolume::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createvolume,
      qt_meta_data_createvolume, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &createvolume::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *createvolume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *createvolume::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_createvolume))
        return static_cast<void*>(const_cast< createvolume*>(this));
    return QDialog::qt_metacast(_clname);
}

int createvolume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void createvolume::CreateVolume(QString _t1, QString _t2, QString _t3, QString _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void createvolume::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
