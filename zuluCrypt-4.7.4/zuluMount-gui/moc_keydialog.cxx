/****************************************************************************
** Meta object code from reading C++ file 'keydialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keydialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_keyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      28,   10,   10,   10, 0x05,
      48,   10,   10,   10, 0x05,
      57,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   10,   10,   10, 0x08,
      98,   10,   10,   10, 0x08,
     112,   10,   10,   10, 0x08,
     131,   10,   10,   10, 0x08,
     162,   10,   10,   10, 0x08,
     171,   10,   10,   10, 0x08,
     177,   10,   10,   10, 0x08,
     187,   10,   10,   10, 0x08,
     196,   10,   10,   10, 0x08,
     208,   10,   10,   10, 0x08,
     219,   10,   10,   10, 0x08,
     228,   10,   10,   10, 0x08,
     238,   10,   10,   10, 0x08,
     273,  271,   10,   10, 0x08,
     303,   10,   10,   10, 0x08,
     322,   10,   10,   10, 0x08,
     347,   10,   10,   10, 0x08,
     389,  376,   10,   10, 0x08,
     411,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_keyDialog[] = {
    "keyDialog\0\0mounted(QString)\0"
    "cryptoOpen(QString)\0cancel()\0"
    "openMountPoint(QString)\0cbActicated(int)\0"
    "pbkeyOption()\0pbMountPointPath()\0"
    "pbPluginEntryClicked(QAction*)\0plugIn()\0"
    "key()\0keyFile()\0pbOpen()\0pbOptions()\0"
    "pbCancel()\0Plugin()\0KeyFile()\0"
    "cbMountReadOnlyStateChanged(int)\0,\0"
    "deviceOffSet(QString,QString)\0"
    "doAction(QAction*)\0showOffSetWindowOption()\0"
    "showFileSystemOptionWindow()\0key,keyFiles\0"
    "keys(QString,QString)\0tcryptCancelled()\0"
};

void keyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        keyDialog *_t = static_cast<keyDialog *>(_o);
        switch (_id) {
        case 0: _t->mounted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->cryptoOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cancel(); break;
        case 3: _t->openMountPoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->cbActicated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pbkeyOption(); break;
        case 6: _t->pbMountPointPath(); break;
        case 7: _t->pbPluginEntryClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->plugIn(); break;
        case 9: _t->key(); break;
        case 10: _t->keyFile(); break;
        case 11: _t->pbOpen(); break;
        case 12: _t->pbOptions(); break;
        case 13: _t->pbCancel(); break;
        case 14: _t->Plugin(); break;
        case 15: _t->KeyFile(); break;
        case 16: _t->cbMountReadOnlyStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->deviceOffSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->doAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 19: _t->showOffSetWindowOption(); break;
        case 20: _t->showFileSystemOptionWindow(); break;
        case 21: _t->keys((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->tcryptCancelled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData keyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject keyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_keyDialog,
      qt_meta_data_keyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &keyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *keyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *keyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_keyDialog))
        return static_cast<void*>(const_cast< keyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int keyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void keyDialog::mounted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void keyDialog::cryptoOpen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void keyDialog::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void keyDialog::openMountPoint(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
