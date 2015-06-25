/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   11,   11,   11, 0x0a,
      70,   11,   11,   11, 0x0a,
      91,   11,   11,   11, 0x08,
     102,   11,   11,   11, 0x08,
     147,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     346,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     367,   11,   11,   11, 0x08,
     379,   11,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     403,   11,   11,   11, 0x08,
     413,   11,   11,   11, 0x08,
     464,   12,   11,   11, 0x08,
     524,   11,   11,   11, 0x08,
     536,   11,   11,   11, 0x08,
     550,   11,   11,   11, 0x08,
     567,   11,   11,   11, 0x08,
     590,   11,   11,   11, 0x08,
     621,   11,   11,   11, 0x08,
     644,   11,   11,   11, 0x08,
     666,   12,   11,   11, 0x08,
     700,   11,   11,   11, 0x08,
     718,   11,   11,   11, 0x08,
     741,   11,   11,   11, 0x08,
     769,   11,   11,   11, 0x08,
     799,   11,   11,   11, 0x08,
     815,   11,   11,   11, 0x08,
     841,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0,\0result(int,QString)\0"
    "unlistVolume(QString)\0raiseWindow()\0"
    "raiseWindow(QString)\0startGUI()\0"
    "volumeMiniProperties(volumeEntryProperties*)\0"
    "showMoungDialog(volumeEntryProperties)\0"
    "showMoungDialog(QString)\0"
    "autoMountVolume(volumeEntryProperties*)\0"
    "mount(volumeEntryProperties)\0"
    "defaultButton()\0volumeProperties()\0"
    "itemClicked(QTableWidgetItem*)\0"
    "pbUpdate()\0pbMount()\0slotMount()\0"
    "unMountAll()\0pbUmount()\0pbClose()\0"
    "slotTrayClicked(QSystemTrayIcon::ActivationReason)\0"
    "slotCurrentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "enableAll()\0enableAll_1()\0slotOpenFolder()\0"
    "slotOpenSharedFolder()\0"
    "itemEntered(QTableWidgetItem*)\0"
    "volumeRemoved(QString)\0removeVolume(QString)\0"
    "addEntryToTable(bool,QStringList)\0"
    "quitApplication()\0autoMountToggled(bool)\0"
    "autoOpenFolderOnMount(bool)\0"
    "removeEntryFromTable(QString)\0"
    "showFavorites()\0favoriteClicked(QAction*)\0"
    "openMountPointPath(QString)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->unlistVolume((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->raiseWindow(); break;
        case 3: _t->raiseWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->startGUI(); break;
        case 5: _t->volumeMiniProperties((*reinterpret_cast< volumeEntryProperties*(*)>(_a[1]))); break;
        case 6: _t->showMoungDialog((*reinterpret_cast< const volumeEntryProperties(*)>(_a[1]))); break;
        case 7: _t->showMoungDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->autoMountVolume((*reinterpret_cast< volumeEntryProperties*(*)>(_a[1]))); break;
        case 9: _t->mount((*reinterpret_cast< const volumeEntryProperties(*)>(_a[1]))); break;
        case 10: _t->defaultButton(); break;
        case 11: _t->volumeProperties(); break;
        case 12: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->pbUpdate(); break;
        case 14: _t->pbMount(); break;
        case 15: _t->slotMount(); break;
        case 16: _t->unMountAll(); break;
        case 17: _t->pbUmount(); break;
        case 18: _t->pbClose(); break;
        case 19: _t->slotTrayClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 20: _t->slotCurrentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 21: _t->enableAll(); break;
        case 22: _t->enableAll_1(); break;
        case 23: _t->slotOpenFolder(); break;
        case 24: _t->slotOpenSharedFolder(); break;
        case 25: _t->itemEntered((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 26: _t->volumeRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->removeVolume((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->addEntryToTable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 29: _t->quitApplication(); break;
        case 30: _t->autoMountToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->autoOpenFolderOnMount((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->removeEntryFromTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->showFavorites(); break;
        case 34: _t->favoriteClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 35: _t->openMountPointPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::result(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::unlistVolume(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
