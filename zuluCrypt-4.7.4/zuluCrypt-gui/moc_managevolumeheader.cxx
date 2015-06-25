/****************************************************************************
** Meta object code from reading C++ file 'managevolumeheader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "managevolumeheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managevolumeheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_managevolumeheader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   19,   19,   19, 0x0a,
      44,   19,   19,   19, 0x0a,
      53,   19,   19,   19, 0x0a,
      68,   19,   19,   19, 0x0a,
      90,   19,   19,   19, 0x0a,
     106,   19,   19,   19, 0x08,
     117,   19,   19,   19, 0x08,
     128,   19,   19,   19, 0x08,
     153,   19,   19,   19, 0x08,
     171,   19,   19,   19, 0x08,
     189,   19,   19,   19, 0x08,
     202,   19,   19,   19, 0x08,
     214,   19,   19,   19, 0x08,
     241,   19,   19,   19, 0x08,
     273,   19,   19,   19, 0x08,
     292,   19,   19,   19, 0x08,
     316,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_managevolumeheader[] = {
    "managevolumeheader\0\0HideUISignal()\0"
    "ShowUI()\0HideUI()\0backUpHeader()\0"
    "backUpHeader(QString)\0restoreHeader()\0"
    "pbCancel()\0pbCreate()\0pbOpenLuksHeaderBackUp()\0"
    "taskFinished(int)\0pbOpenPartition()\0"
    "pbOpenFile()\0pbKeyFile()\0"
    "selectedPartition(QString)\0"
    "backUpHeaderNameChange(QString)\0"
    "rbKeyToggled(bool)\0rbTrueCryptVolume(bool)\0"
    "enableTrueCrypt(bool)\0"
};

void managevolumeheader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        managevolumeheader *_t = static_cast<managevolumeheader *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->ShowUI(); break;
        case 2: _t->HideUI(); break;
        case 3: _t->backUpHeader(); break;
        case 4: _t->backUpHeader((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->restoreHeader(); break;
        case 6: _t->pbCancel(); break;
        case 7: _t->pbCreate(); break;
        case 8: _t->pbOpenLuksHeaderBackUp(); break;
        case 9: _t->taskFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->pbOpenPartition(); break;
        case 11: _t->pbOpenFile(); break;
        case 12: _t->pbKeyFile(); break;
        case 13: _t->selectedPartition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->backUpHeaderNameChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->rbKeyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->rbTrueCryptVolume((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->enableTrueCrypt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData managevolumeheader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject managevolumeheader::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_managevolumeheader,
      qt_meta_data_managevolumeheader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &managevolumeheader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *managevolumeheader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *managevolumeheader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_managevolumeheader))
        return static_cast<void*>(const_cast< managevolumeheader*>(this));
    return QDialog::qt_metacast(_clname);
}

int managevolumeheader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void managevolumeheader::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
