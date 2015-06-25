/****************************************************************************
** Meta object code from reading C++ file 'luksaddkey.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "luksaddkey.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'luksaddkey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_luksaddkey[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      63,   12,   11,   11, 0x05,
     111,   11,   11,   11, 0x05,
     136,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,   11,   11,   11, 0x0a,
     167,   11,   11,   11, 0x0a,
     176,   11,   11,   11, 0x0a,
     185,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     230,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     334,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     378,   11,   11,   11, 0x08,
     386,   11,   11,   11, 0x08,
     397,   11,   11,   11, 0x08,
     415,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_luksaddkey[] = {
    "luksaddkey\0\0"
    "PathToVolume,keyfile,ExistingKey,newkeyfile,NewKey\0"
    "clickedpbAdd(QString,bool,QString,bool,QString)\0"
    "pbOpenPartitionClicked()\0HideUISignal()\0"
    "ShowUI(QString)\0ShowUI()\0HideUI()\0"
    "keyChanged(QString)\0pbOpenExisitingKeyFile()\0"
    "pbOpenNewKeyFile()\0pbOpenFile()\0"
    "pbOpenPartition()\0rbExistingPassphrase()\0"
    "rbExistingPassphraseFromFile()\0"
    "rbNewPassphrase()\0rbNewPassphraseFromFile()\0"
    "pbAdd()\0pbCancel()\0taskFinished(int)\0"
    "setFieldFocus()\0"
};

void luksaddkey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        luksaddkey *_t = static_cast<luksaddkey *>(_o);
        switch (_id) {
        case 0: _t->clickedpbAdd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->pbOpenPartitionClicked(); break;
        case 2: _t->HideUISignal(); break;
        case 3: _t->ShowUI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->ShowUI(); break;
        case 5: _t->HideUI(); break;
        case 6: _t->keyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->pbOpenExisitingKeyFile(); break;
        case 8: _t->pbOpenNewKeyFile(); break;
        case 9: _t->pbOpenFile(); break;
        case 10: _t->pbOpenPartition(); break;
        case 11: _t->rbExistingPassphrase(); break;
        case 12: _t->rbExistingPassphraseFromFile(); break;
        case 13: _t->rbNewPassphrase(); break;
        case 14: _t->rbNewPassphraseFromFile(); break;
        case 15: _t->pbAdd(); break;
        case 16: _t->pbCancel(); break;
        case 17: _t->taskFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setFieldFocus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData luksaddkey::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject luksaddkey::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_luksaddkey,
      qt_meta_data_luksaddkey, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &luksaddkey::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *luksaddkey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *luksaddkey::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_luksaddkey))
        return static_cast<void*>(const_cast< luksaddkey*>(this));
    return QDialog::qt_metacast(_clname);
}

int luksaddkey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void luksaddkey::clickedpbAdd(QString _t1, bool _t2, QString _t3, bool _t4, QString _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void luksaddkey::pbOpenPartitionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void luksaddkey::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
