/********************************************************************************
** Form generated from reading UI file 'openvolume.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENVOLUME_H
#define UI_OPENVOLUME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_openvolume
{
public:
    QCheckBox *checkBoxUUID;
    QPushButton *pbHelp;
    QPushButton *pbUUID;
    QPushButton *pbCancel;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *openvolume)
    {
        if (openvolume->objectName().isEmpty())
            openvolume->setObjectName(QString::fromUtf8("openvolume"));
        openvolume->setWindowModality(Qt::ApplicationModal);
        openvolume->resize(751, 357);
        openvolume->setModal(true);
        checkBoxUUID = new QCheckBox(openvolume);
        checkBoxUUID->setObjectName(QString::fromUtf8("checkBoxUUID"));
        checkBoxUUID->setEnabled(true);
        checkBoxUUID->setGeometry(QRect(560, 320, 71, 31));
        pbHelp = new QPushButton(openvolume);
        pbHelp->setObjectName(QString::fromUtf8("pbHelp"));
        pbHelp->setGeometry(QRect(250, 320, 75, 31));
        pbHelp->setAutoDefault(false);
        pbUUID = new QPushButton(openvolume);
        pbUUID->setObjectName(QString::fromUtf8("pbUUID"));
        pbUUID->setGeometry(QRect(330, 320, 75, 31));
        pbUUID->setAutoDefault(false);
        pbCancel = new QPushButton(openvolume);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(410, 320, 75, 31));
        pbCancel->setAutoDefault(false);
        pbCancel->setDefault(false);
        groupBox = new QGroupBox(openvolume);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 731, 311));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 711, 291));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        QWidget::setTabOrder(tableWidget, checkBoxUUID);

        retranslateUi(openvolume);

        QMetaObject::connectSlotsByName(openvolume);
    } // setupUi

    void retranslateUi(QDialog *openvolume)
    {
        openvolume->setWindowTitle(QApplication::translate("openvolume", "select a partition to open", 0, QApplication::UnicodeUTF8));
        checkBoxUUID->setText(QApplication::translate("openvolume", "use uuid", 0, QApplication::UnicodeUTF8));
        pbHelp->setText(QApplication::translate("openvolume", "&help", 0, QApplication::UnicodeUTF8));
        pbUUID->setText(QApplication::translate("openvolume", "use &uuid", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("openvolume", "&cancel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("openvolume", "partition", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("openvolume", "size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("openvolume", "label", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("openvolume", "type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("openvolume", "uuid", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class openvolume: public Ui_openvolume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENVOLUME_H
