/****************************************************************************
** Meta object code from reading C++ file 'managesystemvolumes.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "managesystemvolumes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managesystemvolumes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_manageSystemVolumes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   20,   20,   20, 0x08,
      52,   20,   20,   20, 0x08,
      61,   20,   20,   20, 0x08,
      70,   20,   20,   20, 0x08,
      84,   20,   20,   20, 0x08,
     127,  110,   20,   20, 0x08,
     192,  183,   20,   20, 0x08,
     236,  228,   20,   20, 0x08,
     267,   20,   20,   20, 0x08,
     286,   20,   20,   20, 0x08,
     300,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_manageSystemVolumes[] = {
    "manageSystemVolumes\0\0HideUISignal()\0"
    "defaultButton()\0pbDone()\0pbFile()\0"
    "pbPartition()\0clickedPartition(QString)\0"
    "current,previous\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "current,\0itemClicked(QTableWidgetItem*,bool)\0"
    "current\0itemClicked(QTableWidgetItem*)\0"
    "removeCurrentRow()\0contextMenu()\0"
    "setFocusTableWidget()\0"
};

void manageSystemVolumes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        manageSystemVolumes *_t = static_cast<manageSystemVolumes *>(_o);
        switch (_id) {
        case 0: _t->HideUISignal(); break;
        case 1: _t->defaultButton(); break;
        case 2: _t->pbDone(); break;
        case 3: _t->pbFile(); break;
        case 4: _t->pbPartition(); break;
        case 5: _t->clickedPartition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->removeCurrentRow(); break;
        case 10: _t->contextMenu(); break;
        case 11: _t->setFocusTableWidget(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData manageSystemVolumes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject manageSystemVolumes::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageSystemVolumes,
      qt_meta_data_manageSystemVolumes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &manageSystemVolumes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *manageSystemVolumes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *manageSystemVolumes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_manageSystemVolumes))
        return static_cast<void*>(const_cast< manageSystemVolumes*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageSystemVolumes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void manageSystemVolumes::HideUISignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
