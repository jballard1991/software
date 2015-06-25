/********************************************************************************
** Form generated from reading UI file 'tcrypt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCRYPT_H
#define UI_TCRYPT_H

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

class Ui_tcrypt
{
public:
    QPushButton *pbSend;
    QPushButton *pbCancel;
    QLineEdit *lineEdit;
    QPushButton *pbAddKeyFile;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *tcrypt)
    {
        if (tcrypt->objectName().isEmpty())
            tcrypt->setObjectName(QString::fromUtf8("tcrypt"));
        tcrypt->resize(623, 352);
        tcrypt->setAcceptDrops(true);
        pbSend = new QPushButton(tcrypt);
        pbSend->setObjectName(QString::fromUtf8("pbSend"));
        pbSend->setGeometry(QRect(170, 320, 80, 31));
        pbCancel = new QPushButton(tcrypt);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(370, 320, 80, 31));
        lineEdit = new QLineEdit(tcrypt);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 290, 441, 31));
        lineEdit->setEchoMode(QLineEdit::Password);
        pbAddKeyFile = new QPushButton(tcrypt);
        pbAddKeyFile->setObjectName(QString::fromUtf8("pbAddKeyFile"));
        pbAddKeyFile->setGeometry(QRect(250, 320, 121, 31));
        tableWidget = new QTableWidget(tcrypt);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(90, 40, 441, 221));
        tableWidget->setAcceptDrops(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::NoPen);
        label = new QLabel(tcrypt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 5, 621, 31));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tcrypt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 260, 621, 31));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(tcrypt);

        QMetaObject::connectSlotsByName(tcrypt);
    } // setupUi

    void retranslateUi(QDialog *tcrypt)
    {
        tcrypt->setWindowTitle(QApplication::translate("tcrypt", "TrueCrypt keys", 0, QApplication::UnicodeUTF8));
        pbSend->setText(QApplication::translate("tcrypt", "open", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("tcrypt", "cancel", 0, QApplication::UnicodeUTF8));
        pbAddKeyFile->setText(QApplication::translate("tcrypt", "add keyfile", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tcrypt", "keyfile paths", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem->setToolTip(QApplication::translate("tcrypt", "drag and drop key files to add them to the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("tcrypt", "drag and drop key files to add them to the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("tcrypt", "Enter key files below to be used to open the volume", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tcrypt", "Enter a passphrase below to be used to open the volume", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcrypt: public Ui_tcrypt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCRYPT_H
