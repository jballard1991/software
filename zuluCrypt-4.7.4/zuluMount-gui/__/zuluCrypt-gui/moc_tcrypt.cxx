/****************************************************************************
** Meta object code from reading C++ file 'tcrypt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../zuluCrypt-gui/tcrypt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcrypt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tcrypt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,    8,    7,    7, 0x05,
      50,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   62,    7,    7, 0x08,
     140,  135,    7,    7, 0x08,
     173,  171,    7,    7, 0x08,
     206,    7,    7,    7, 0x08,
     229,    7,    7,    7, 0x08,
     238,    7,    7,    7, 0x08,
     249,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tcrypt[] = {
    "tcrypt\0\0passphrase,keyfiles\0"
    "Keys(QString,QString)\0cancelled()\0"
    "current,previous\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "item\0itemClicked(QTableWidgetItem*)\0"
    "e\0dragEnterEvent(QDragEnterEvent*)\0"
    "dropEvent(QDropEvent*)\0pbSend()\0"
    "pbCancel()\0pbAddKeyFIle()\0"
};

void tcrypt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tcrypt *_t = static_cast<tcrypt *>(_o);
        switch (_id) {
        case 0: _t->Keys((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->cancelled(); break;
        case 2: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 5: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 6: _t->pbSend(); break;
        case 7: _t->pbCancel(); break;
        case 8: _t->pbAddKeyFIle(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tcrypt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tcrypt::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tcrypt,
      qt_meta_data_tcrypt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tcrypt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tcrypt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tcrypt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tcrypt))
        return static_cast<void*>(const_cast< tcrypt*>(this));
    return QDialog::qt_metacast(_clname);
}

int tcrypt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void tcrypt::Keys(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tcrypt::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
