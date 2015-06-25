/****************************************************************************
** Meta object code from reading C++ file 'cryptfiles.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cryptfiles.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cryptfiles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cryptfiles[] = {

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
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x0a,
      67,   11,   11,   11, 0x0a,
      82,   11,   11,   11, 0x0a,
      98,   11,   11,   11, 0x08,
     109,   11,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     160,   11,   11,   11, 0x08,
     175,   11,   11,   11, 0x08,
     202,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cryptfiles[] = {
    "cryptfiles\0\0HideUISignal()\0"
    "progressUpdate(int)\0encrypt()\0decrypt()\0"
    "enableCancel()\0disableCancel()\0"
    "pbCancel()\0pbCreate()\0pbOpenFile()\0"
    "pbKeyFile()\0pbOpenFolder()\0cbChanged(int)\0"
    "sourceTextChanged(QString)\0taskFinished(int)\0"
    "progressBarUpdate(int)\0titleUpdate(QString)\0"
};

void cryptfiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        cryptfiles *_t = static_cast<cryptfiles *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->progressUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->encrypt(); break;
        case 3: _t->decrypt(); break;
        case 4: _t->enableCancel(); break;
        case 5: _t->disableCancel(); break;
        case 6: _t->pbCancel(); break;
        case 7: _t->pbCreate(); break;
        case 8: _t->pbOpenFile(); break;
        case 9: _t->pbKeyFile(); break;
        case 10: _t->pbOpenFolder(); break;
        case 11: _t->cbChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sourceTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->taskFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->progressBarUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->titleUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cryptfiles::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cryptfiles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cryptfiles,
      qt_meta_data_cryptfiles, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cryptfiles::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cryptfiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cryptfiles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cryptfiles))
        return static_cast<void*>(const_cast< cryptfiles*>(this));
    return QDialog::qt_metacast(_clname);
}

int cryptfiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cryptfiles::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cryptfiles::progressUpdate(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
