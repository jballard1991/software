/****************************************************************************
** Meta object code from reading C++ file 'luksdeletekey.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "luksdeletekey.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'luksdeletekey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_luksdeletekey[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      54,   15,   14,   14, 0x05,
      92,   14,   14,   14, 0x05,
     117,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     132,   14,   14,   14, 0x0a,
     141,   14,   14,   14, 0x0a,
     157,   14,   14,   14, 0x0a,
     166,   14,   14,   14, 0x08,
     184,   14,   14,   14, 0x08,
     195,   14,   14,   14, 0x08,
     206,   14,   14,   14, 0x08,
     221,   14,   14,   14, 0x08,
     244,   14,   14,   14, 0x08,
     260,   14,   14,   14, 0x08,
     275,   14,   14,   14, 0x08,
     293,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_luksdeletekey[] = {
    "luksdeletekey\0\0volumePath,passPhraseIsFile,passPhrase\0"
    "pbDeleteClicked(QString,bool,QString)\0"
    "pbOpenPartitionClicked()\0HideUISignal()\0"
    "ShowUI()\0ShowUI(QString)\0HideUI()\0"
    "pbOpenPartition()\0pbDelete()\0pbCancel()\0"
    "rbPassphrase()\0rbPassphraseFromFile()\0"
    "pbOpenKeyFile()\0pbOpenVolume()\0"
    "taskFinished(int)\0deleteKey(QStringList)\0"
};

void luksdeletekey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        luksdeletekey *_t = static_cast<luksdeletekey *>(_o);
        switch (_id) {
        case 0: _t->pbDeleteClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->pbOpenPartitionClicked(); break;
        case 2: _t->HideUISignal(); break;
        case 3: _t->ShowUI(); break;
        case 4: _t->ShowUI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->HideUI(); break;
        case 6: _t->pbOpenPartition(); break;
        case 7: _t->pbDelete(); break;
        case 8: _t->pbCancel(); break;
        case 9: _t->rbPassphrase(); break;
        case 10: _t->rbPassphraseFromFile(); break;
        case 11: _t->pbOpenKeyFile(); break;
        case 12: _t->pbOpenVolume(); break;
        case 13: _t->taskFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->deleteKey((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData luksdeletekey::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject luksdeletekey::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_luksdeletekey,
      qt_meta_data_luksdeletekey, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &luksdeletekey::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *luksdeletekey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *luksdeletekey::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_luksdeletekey))
        return static_cast<void*>(const_cast< luksdeletekey*>(this));
    return QDialog::qt_metacast(_clname);
}

int luksdeletekey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void luksdeletekey::pbDeleteClicked(QString _t1, bool _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void luksdeletekey::pbOpenPartitionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void luksdeletekey::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
