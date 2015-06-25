/****************************************************************************
** Meta object code from reading C++ file 'favorites.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "favorites.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'favorites.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_favorites[] = {

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
      11,   10,   10,   10, 0x05,
      29,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   10,   10,   10, 0x0a,
      53,   10,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      86,   10,   10,   10, 0x08,
     116,   10,   10,   10, 0x08,
     122,   10,   10,   10, 0x08,
     131,   10,   10,   10, 0x08,
     147,   10,   10,   10, 0x08,
     178,  161,   10,   10, 0x08,
     243,  234,   10,   10, 0x08,
     287,  279,   10,   10, 0x08,
     318,   10,   10,   10, 0x08,
     336,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_favorites[] = {
    "favorites\0\0ShowPartitionUI()\0"
    "HideUISignal()\0ShowUI()\0HideUI()\0"
    "PartitionEntry(QString)\0"
    "removeEntryFromFavoriteList()\0add()\0"
    "cancel()\0deviceAddress()\0fileAddress()\0"
    "current,previous\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "current,\0itemClicked(QTableWidgetItem*,bool)\0"
    "current\0itemClicked(QTableWidgetItem*)\0"
    "shortcutPressed()\0devicePathTextChange(QString)\0"
};

void favorites::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        favorites *_t = static_cast<favorites *>(_o);
        switch (_id) {
        case 0: _t->ShowPartitionUI(); break;
        case 1: _t->HideUISignal(); break;
        case 2: _t->ShowUI(); break;
        case 3: _t->HideUI(); break;
        case 4: _t->PartitionEntry((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->removeEntryFromFavoriteList(); break;
        case 6: _t->add(); break;
        case 7: _t->cancel(); break;
        case 8: _t->deviceAddress(); break;
        case 9: _t->fileAddress(); break;
        case 10: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->shortcutPressed(); break;
        case 14: _t->devicePathTextChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData favorites::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject favorites::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_favorites,
      qt_meta_data_favorites, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &favorites::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *favorites::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *favorites::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_favorites))
        return static_cast<void*>(const_cast< favorites*>(this));
    return QDialog::qt_metacast(_clname);
}

int favorites::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void favorites::ShowPartitionUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void favorites::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
