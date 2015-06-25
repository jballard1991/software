/********************************************************************************
** Form generated from reading UI file 'walletconfiginput.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLETCONFIGINPUT_H
#define UI_WALLETCONFIGINPUT_H

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

class Ui_walletconfiginput
{
public:
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonCancel;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditVolumeID;
    QLineEdit *lineEditComment;
    QLineEdit *lineEditKey;
    QLineEdit *lineEditRepeatKey;
    QPushButton *pushButtonImageFile;
    QPushButton *pushButtonVolume;

    void setupUi(QDialog *kwalletconfiginput)
    {
        if (kwalletconfiginput->objectName().isEmpty())
            kwalletconfiginput->setObjectName(QString::fromUtf8("kwalletconfiginput"));
        kwalletconfiginput->resize(603, 195);
        pushButtonAdd = new QPushButton(kwalletconfiginput);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(210, 160, 91, 31));
        pushButtonCancel = new QPushButton(kwalletconfiginput);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(300, 160, 91, 31));
        groupBox = new QGroupBox(kwalletconfiginput);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 151));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 31));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 111, 31));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 101, 31));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setWordWrap(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 101, 31));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4->setWordWrap(true);
        lineEditVolumeID = new QLineEdit(groupBox);
        lineEditVolumeID->setObjectName(QString::fromUtf8("lineEditVolumeID"));
        lineEditVolumeID->setGeometry(QRect(130, 10, 321, 31));
        lineEditComment = new QLineEdit(groupBox);
        lineEditComment->setObjectName(QString::fromUtf8("lineEditComment"));
        lineEditComment->setGeometry(QRect(130, 40, 321, 31));
        lineEditKey = new QLineEdit(groupBox);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(130, 70, 321, 31));
        lineEditRepeatKey = new QLineEdit(groupBox);
        lineEditRepeatKey->setObjectName(QString::fromUtf8("lineEditRepeatKey"));
        lineEditRepeatKey->setGeometry(QRect(130, 100, 321, 31));
        pushButtonImageFile = new QPushButton(groupBox);
        pushButtonImageFile->setObjectName(QString::fromUtf8("pushButtonImageFile"));
        pushButtonImageFile->setGeometry(QRect(450, 10, 31, 31));
        pushButtonVolume = new QPushButton(groupBox);
        pushButtonVolume->setObjectName(QString::fromUtf8("pushButtonVolume"));
        pushButtonVolume->setGeometry(QRect(480, 10, 31, 31));
        QWidget::setTabOrder(lineEditVolumeID, pushButtonImageFile);
        QWidget::setTabOrder(pushButtonImageFile, pushButtonVolume);
        QWidget::setTabOrder(pushButtonVolume, lineEditComment);
        QWidget::setTabOrder(lineEditComment, lineEditKey);
        QWidget::setTabOrder(lineEditKey, lineEditRepeatKey);
        QWidget::setTabOrder(lineEditRepeatKey, pushButtonAdd);
        QWidget::setTabOrder(pushButtonAdd, pushButtonCancel);

        retranslateUi(kwalletconfiginput);

        QMetaObject::connectSlotsByName(kwalletconfiginput);
    } // setupUi

    void retranslateUi(QDialog *kwalletconfiginput)
    {
        kwalletconfiginput->setWindowTitle(QApplication::translate("walletconfiginput", "add an entry to wallet", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("walletconfiginput", "add", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("walletconfiginput", "cancel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("walletconfiginput", "volume id", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("walletconfiginput", "comment", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("walletconfiginput", "key", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("walletconfiginput", "repeat key", 0, QApplication::UnicodeUTF8));
        pushButtonImageFile->setText(QString());
        pushButtonVolume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class walletconfiginput: public Ui_walletconfiginput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLETCONFIGINPUT_H
