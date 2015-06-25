/********************************************************************************
** Form generated from reading UI file 'managesystemvolumes.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESYSTEMVOLUMES_H
#define UI_MANAGESYSTEMVOLUMES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_manageSystemVolumes
{
public:
    QPushButton *pbDone;
    QPushButton *pbFile;
    QPushButton *pbPartition;
    QTableWidget *tableWidget;

    void setupUi(QDialog *manageSystemVolumes)
    {
        if (manageSystemVolumes->objectName().isEmpty())
            manageSystemVolumes->setObjectName(QString::fromUtf8("manageSystemVolumes"));
        manageSystemVolumes->setWindowModality(Qt::ApplicationModal);
        manageSystemVolumes->resize(631, 314);
        manageSystemVolumes->setModal(true);
        pbDone = new QPushButton(manageSystemVolumes);
        pbDone->setObjectName(QString::fromUtf8("pbDone"));
        pbDone->setGeometry(QRect(360, 280, 91, 31));
        pbDone->setAutoDefault(false);
        pbDone->setDefault(false);
        pbFile = new QPushButton(manageSystemVolumes);
        pbFile->setObjectName(QString::fromUtf8("pbFile"));
        pbFile->setGeometry(QRect(180, 280, 91, 31));
        pbFile->setAutoDefault(false);
        pbFile->setDefault(false);
        pbPartition = new QPushButton(manageSystemVolumes);
        pbPartition->setObjectName(QString::fromUtf8("pbPartition"));
        pbPartition->setGeometry(QRect(270, 280, 91, 31));
        pbPartition->setAutoDefault(false);
        pbPartition->setDefault(false);
        tableWidget = new QTableWidget(manageSystemVolumes);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 611, 271));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);

        retranslateUi(manageSystemVolumes);

        QMetaObject::connectSlotsByName(manageSystemVolumes);
    } // setupUi

    void retranslateUi(QDialog *manageSystemVolumes)
    {
        manageSystemVolumes->setWindowTitle(QApplication::translate("manageSystemVolumes", "manage system volumes", 0, QApplication::UnicodeUTF8));
        pbDone->setText(QApplication::translate("manageSystemVolumes", "&done", 0, QApplication::UnicodeUTF8));
        pbFile->setText(QApplication::translate("manageSystemVolumes", "add fi&le", 0, QApplication::UnicodeUTF8));
        pbPartition->setText(QApplication::translate("manageSystemVolumes", "add dev&ice", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manageSystemVolumes", "path to system volumes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manageSystemVolumes: public Ui_manageSystemVolumes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESYSTEMVOLUMES_H
