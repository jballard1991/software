/****************************************************************************
** Meta object code from reading C++ file 'createfile.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "createfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_createfile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      45,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   11,   11,   11, 0x0a,
      75,   11,   11,   11, 0x0a,
      84,   11,   11,   11, 0x0a,
      99,   11,   11,   11, 0x0a,
     110,   11,   11,   11, 0x0a,
     121,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_createfile[] = {
    "createfile\0\0HideUISignal()\0sendProgress(int)\0"
    "fileCreated(QString)\0HideUI()\0showUI()\0"
    "pbOpenFolder()\0pbCancel()\0pbCreate()\0"
    "setProgress(int)\0fileTextChange(QString)\0"
};

void createfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        createfile *_t = static_cast<createfile *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->sendProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fileCreated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->HideUI(); break;
        case 4: _t->showUI(); break;
        case 5: _t->pbOpenFolder(); break;
        case 6: _t->pbCancel(); break;
        case 7: _t->pbCreate(); break;
        case 8: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fileTextChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData createfile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject createfile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createfile,
      qt_meta_data_createfile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &createfile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *createfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *createfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_createfile))
        return static_cast<void*>(const_cast< createfile*>(this));
    return QDialog::qt_metacast(_clname);
}

int createfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void createfile::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void createfile::sendProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void createfile::fileCreated(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
