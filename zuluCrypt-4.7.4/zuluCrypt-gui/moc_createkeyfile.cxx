/****************************************************************************
** Meta object code from reading C++ file 'createkeyfile.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "createkeyfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createkeyfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_createkeyfile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   14,   14,   14, 0x0a,
      39,   14,   14,   14, 0x0a,
      48,   14,   14,   14, 0x08,
      59,   14,   14,   14, 0x08,
      70,   14,   14,   14, 0x08,
      85,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_createkeyfile[] = {
    "createkeyfile\0\0HideUISignal()\0ShowUI()\0"
    "HideUI()\0pbCancel()\0pbCreate()\0"
    "pbOpenFolder()\0keyTextChange(QString)\0"
};

void createkeyfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        createkeyfile *_t = static_cast<createkeyfile *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->ShowUI(); break;
        case 2: _t->HideUI(); break;
        case 3: _t->pbCancel(); break;
        case 4: _t->pbCreate(); break;
        case 5: _t->pbOpenFolder(); break;
        case 6: _t->keyTextChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData createkeyfile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject createkeyfile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createkeyfile,
      qt_meta_data_createkeyfile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &createkeyfile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *createkeyfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *createkeyfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_createkeyfile))
        return static_cast<void*>(const_cast< createkeyfile*>(this));
    return QDialog::qt_metacast(_clname);
}

int createkeyfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void createkeyfile::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
