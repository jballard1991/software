/********************************************************************************
** Form generated from reading UI file 'mountoptions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUNTOPTIONS_H
#define UI_MOUNTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mountOptions
{
public:
    QPushButton *pbOk;
    QPushButton *pbCancel;
    QLabel *label;
    QLineEdit *lineEditOptions;

    void setupUi(QDialog *mountOptions)
    {
        if (mountOptions->objectName().isEmpty())
            mountOptions->setObjectName(QString::fromUtf8("mountOptions"));
        mountOptions->resize(491, 113);
        pbOk = new QPushButton(mountOptions);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        pbOk->setGeometry(QRect(160, 80, 81, 31));
        pbOk->setDefault(true);
        pbCancel = new QPushButton(mountOptions);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(240, 80, 81, 31));
        label = new QLabel(mountOptions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 481, 51));
        label->setAlignment(Qt::AlignCenter);
        lineEditOptions = new QLineEdit(mountOptions);
        lineEditOptions->setObjectName(QString::fromUtf8("lineEditOptions"));
        lineEditOptions->setGeometry(QRect(70, 50, 351, 31));
        QWidget::setTabOrder(lineEditOptions, pbOk);
        QWidget::setTabOrder(pbOk, pbCancel);

        retranslateUi(mountOptions);

        QMetaObject::connectSlotsByName(mountOptions);
    } // setupUi

    void retranslateUi(QDialog *mountOptions)
    {
        mountOptions->setWindowTitle(QApplication::translate("mountOptions", "file system options", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("mountOptions", "ok", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("mountOptions", "cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mountOptions", "Enter comma separated volume's file system options below", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mountOptions: public Ui_mountOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUNTOPTIONS_H
