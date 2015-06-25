/********************************************************************************
** Form generated from reading UI file 'walletconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLETCONFIG_H
#define UI_WALLETCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_walletconfig
{
public:
    QPushButton *pbAdd;
    QPushButton *pbDelete;
    QPushButton *pbClose;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *kwalletconfig)
    {
        if (kwalletconfig->objectName().isEmpty())
            kwalletconfig->setObjectName(QString::fromUtf8("kwalletconfig"));
        kwalletconfig->setWindowModality(Qt::WindowModal);
        kwalletconfig->resize(723, 375);
        kwalletconfig->setModal(true);
        pbAdd = new QPushButton(kwalletconfig);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(220, 340, 91, 31));
        pbAdd->setAutoDefault(true);
        pbAdd->setDefault(true);
        pbDelete = new QPushButton(kwalletconfig);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setGeometry(QRect(310, 340, 91, 31));
        pbClose = new QPushButton(kwalletconfig);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(400, 340, 101, 31));
        groupBox = new QGroupBox(kwalletconfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 701, 331));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 681, 311));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::NoPen);
        QWidget::setTabOrder(tableWidget, pbAdd);
        QWidget::setTabOrder(pbAdd, pbDelete);
        QWidget::setTabOrder(pbDelete, pbClose);

        retranslateUi(kwalletconfig);

        QMetaObject::connectSlotsByName(kwalletconfig);
    } // setupUi

    void retranslateUi(QDialog *kwalletconfig)
    {
        kwalletconfig->setWindowTitle(QApplication::translate("walletconfig", "manage volumes in a wallet", 0, QApplication::UnicodeUTF8));
        pbAdd->setText(QApplication::translate("walletconfig", "&add", 0, QApplication::UnicodeUTF8));
        pbDelete->setText(QApplication::translate("walletconfig", "&delete", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("walletconfig", "do&ne", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("walletconfig", "volume id", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("walletconfig", "comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class walletconfig: public Ui_walletconfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLETCONFIG_H
