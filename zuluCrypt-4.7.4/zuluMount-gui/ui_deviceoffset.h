/********************************************************************************
** Form generated from reading UI file 'deviceoffset.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEOFFSET_H
#define UI_DEVICEOFFSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deviceOffset
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEditKey;
    QPushButton *pbOK;
    QPushButton *pbCancel;

    void setupUi(QDialog *deviceOffset)
    {
        if (deviceOffset->objectName().isEmpty())
            deviceOffset->setObjectName(QString::fromUtf8("deviceOffset"));
        deviceOffset->resize(581, 173);
        groupBox = new QGroupBox(deviceOffset);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 541, 161));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 541, 41));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 40, 341, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 70, 541, 31));
        label_2->setAlignment(Qt::AlignCenter);
        lineEditKey = new QLineEdit(groupBox);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(100, 100, 341, 31));
        lineEditKey->setEchoMode(QLineEdit::Password);
        pbOK = new QPushButton(groupBox);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        pbOK->setGeometry(QRect(180, 130, 90, 31));
        pbCancel = new QPushButton(groupBox);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(270, 130, 90, 31));

        retranslateUi(deviceOffset);

        QMetaObject::connectSlotsByName(deviceOffset);
    } // setupUi

    void retranslateUi(QDialog *deviceOffset)
    {
        deviceOffset->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("deviceOffset", "location could be in sectors if the entry is made up of only digits\n"
"or in bytes if the entry ends with \"b\"\n"
"or in kilobytes if the entry ends with \"k\"\n"
"or in megabytes if the entry ends with \"m\"\n"
"or in terabytes if the entry ends with \"t\"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("deviceOffset", "Enter below the offset location of the volume about to be opened.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("deviceOffset", "Enter the password below to a volume at the above offset.", 0, QApplication::UnicodeUTF8));
        pbOK->setText(QApplication::translate("deviceOffset", "ok", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("deviceOffset", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class deviceOffset: public Ui_deviceOffset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEOFFSET_H
