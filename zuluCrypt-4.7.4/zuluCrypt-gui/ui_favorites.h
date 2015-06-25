/********************************************************************************
** Form generated from reading UI file 'favorites.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORITES_H
#define UI_FAVORITES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_favorites
{
public:
    QPushButton *pbAdd;
    QTableWidget *tableWidget;
    QLabel *labelName;
    QLabel *labelDeviceAddress;
    QLineEdit *lineEditMountPath;
    QLineEdit *lineEditDeviceAddress;
    QPushButton *pbDeviceAddress;
    QPushButton *pbFileAddress;
    QPushButton *pbCancel;

    void setupUi(QDialog *favorites)
    {
        if (favorites->objectName().isEmpty())
            favorites->setObjectName(QString::fromUtf8("favorites"));
        favorites->setWindowModality(Qt::ApplicationModal);
        favorites->resize(641, 323);
        pbAdd = new QPushButton(favorites);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(240, 290, 81, 31));
        pbAdd->setDefault(true);
        tableWidget = new QTableWidget(favorites);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 621, 221));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(false);
        labelName = new QLabel(favorites);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(0, 230, 161, 31));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelName->setWordWrap(true);
        labelDeviceAddress = new QLabel(favorites);
        labelDeviceAddress->setObjectName(QString::fromUtf8("labelDeviceAddress"));
        labelDeviceAddress->setGeometry(QRect(0, 260, 161, 31));
        labelDeviceAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelDeviceAddress->setWordWrap(true);
        lineEditMountPath = new QLineEdit(favorites);
        lineEditMountPath->setObjectName(QString::fromUtf8("lineEditMountPath"));
        lineEditMountPath->setGeometry(QRect(170, 260, 301, 31));
        lineEditDeviceAddress = new QLineEdit(favorites);
        lineEditDeviceAddress->setObjectName(QString::fromUtf8("lineEditDeviceAddress"));
        lineEditDeviceAddress->setGeometry(QRect(170, 230, 301, 31));
        pbDeviceAddress = new QPushButton(favorites);
        pbDeviceAddress->setObjectName(QString::fromUtf8("pbDeviceAddress"));
        pbDeviceAddress->setGeometry(QRect(470, 230, 31, 31));
        pbFileAddress = new QPushButton(favorites);
        pbFileAddress->setObjectName(QString::fromUtf8("pbFileAddress"));
        pbFileAddress->setGeometry(QRect(500, 230, 31, 31));
        pbCancel = new QPushButton(favorites);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(320, 290, 81, 31));
        QWidget::setTabOrder(tableWidget, lineEditDeviceAddress);
        QWidget::setTabOrder(lineEditDeviceAddress, pbDeviceAddress);
        QWidget::setTabOrder(pbDeviceAddress, pbFileAddress);
        QWidget::setTabOrder(pbFileAddress, lineEditMountPath);
        QWidget::setTabOrder(lineEditMountPath, pbAdd);
        QWidget::setTabOrder(pbAdd, pbCancel);

        retranslateUi(favorites);

        QMetaObject::connectSlotsByName(favorites);
    } // setupUi

    void retranslateUi(QDialog *favorites)
    {
        favorites->setWindowTitle(QApplication::translate("favorites", "manage favorites", 0, QApplication::UnicodeUTF8));
        pbAdd->setText(QApplication::translate("favorites", "&add", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("favorites", "volume id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("favorites", "mount point component", 0, QApplication::UnicodeUTF8));
        labelName->setText(QApplication::translate("favorites", "volume id", 0, QApplication::UnicodeUTF8));
        labelDeviceAddress->setText(QApplication::translate("favorites", "mount point component", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbDeviceAddress->setToolTip(QApplication::translate("favorites", "open partition dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbDeviceAddress->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbFileAddress->setToolTip(QApplication::translate("favorites", "open file dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbFileAddress->setText(QString());
        pbCancel->setText(QApplication::translate("favorites", "&done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class favorites: public Ui_favorites {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITES_H
