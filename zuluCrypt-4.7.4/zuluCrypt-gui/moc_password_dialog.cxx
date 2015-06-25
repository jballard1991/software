/****************************************************************************
** Meta object code from reading C++ file 'password_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "password_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'password_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_passwordDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x05,
      59,   15,   15,   15, 0x05,
      74,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   15,   15,   15, 0x0a,
     103,   15,   15,   15, 0x0a,
     135,  112,   15,   15, 0x0a,
     159,   15,   15,   15, 0x0a,
     191,   15,   15,   15, 0x08,
     208,   15,   15,   15, 0x08,
     222,   15,   15,   15, 0x08,
     253,   15,   15,   15, 0x08,
     264,   15,   15,   15, 0x08,
     284,   15,   15,   15, 0x08,
     298,   15,   15,   15, 0x08,
     332,   15,   15,   15, 0x08,
     359,   15,   15,   15, 0x08,
     378,   15,   15,   15, 0x08,
     393,   15,   15,   15, 0x08,
     405,   15,   15,   15, 0x08,
     429,   15,   15,   15, 0x08,
     449,   15,   15,   15, 0x08,
     487,  474,   15,   15, 0x08,
     509,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_passwordDialog[] = {
    "passwordDialog\0\0,,\0"
    "addItemToTable(QString,QString,QString)\0"
    "HideUISignal()\0openFolder(QString)\0"
    "HideUI()\0ShowUI()\0volumePath,mount_point\0"
    "ShowUI(QString,QString)\0"
    "clickedPartitionOption(QString)\0"
    "cbActicated(int)\0pbKeyOption()\0"
    "pbPluginEntryClicked(QAction*)\0"
    "pbPlugin()\0buttonOpenClicked()\0"
    "mount_point()\0clickedPassPhraseFromFileButton()\0"
    "passphraseFromFileOption()\0"
    "passphraseOption()\0pluginOption()\0"
    "file_path()\0mountPointPath(QString)\0"
    "cbStateChanged(int)\0taskComplete(taskResult)\0"
    "key,keyFiles\0keys(QString,QString)\0"
    "tcryptCancelled()\0"
};

void passwordDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        passwordDialog *_t = static_cast<passwordDialog *>(_o);
        switch (_id) {
        case 0: _t->addItemToTable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->HideUISignal(); break;
        case 2: _t->openFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->HideUI(); break;
        case 4: _t->ShowUI(); break;
        case 5: _t->ShowUI((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->clickedPartitionOption((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->cbActicated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->pbKeyOption(); break;
        case 9: _t->pbPluginEntryClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->pbPlugin(); break;
        case 11: _t->buttonOpenClicked(); break;
        case 12: _t->mount_point(); break;
        case 13: _t->clickedPassPhraseFromFileButton(); break;
        case 14: _t->passphraseFromFileOption(); break;
        case 15: _t->passphraseOption(); break;
        case 16: _t->pluginOption(); break;
        case 17: _t->file_path(); break;
        case 18: _t->mountPointPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->cbStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->taskComplete((*reinterpret_cast< const taskResult(*)>(_a[1]))); break;
        case 21: _t->keys((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->tcryptCancelled(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData passwordDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject passwordDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_passwordDialog,
      qt_meta_data_passwordDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &passwordDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *passwordDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *passwordDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_passwordDialog))
        return static_cast<void*>(const_cast< passwordDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int passwordDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void passwordDialog::addItemToTable(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void passwordDialog::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void passwordDialog::openFolder(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
