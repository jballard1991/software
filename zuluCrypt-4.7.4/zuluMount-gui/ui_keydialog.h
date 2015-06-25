/********************************************************************************
** Form generated from reading UI file 'keydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYDIALOG_H
#define UI_KEYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_keyDialog
{
public:
    QPushButton *pbOpen;
    QPushButton *pbCancel;
    QLabel *label;
    QLineEdit *lineEditKey;
    QPushButton *pbkeyOption;
    QLabel *label_2;
    QPushButton *pbOpenMountPoint;
    QLineEdit *lineEditMountPoint;
    QCheckBox *checkBoxOpenReadOnly;
    QCheckBox *checkBoxShareMountPoint;
    QPushButton *pbOptions;
    QComboBox *cbKeyType;

    void setupUi(QDialog *keyDialog)
    {
        if (keyDialog->objectName().isEmpty())
            keyDialog->setObjectName(QString::fromUtf8("keyDialog"));
        keyDialog->resize(491, 193);
        keyDialog->setAcceptDrops(true);
        pbOpen = new QPushButton(keyDialog);
        pbOpen->setObjectName(QString::fromUtf8("pbOpen"));
        pbOpen->setGeometry(QRect(200, 160, 91, 31));
        pbOpen->setDefault(true);
        pbCancel = new QPushButton(keyDialog);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(290, 160, 91, 31));
        label = new QLabel(keyDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 120, 91, 51));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);
        lineEditKey = new QLineEdit(keyDialog);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(100, 130, 291, 31));
        pbkeyOption = new QPushButton(keyDialog);
        pbkeyOption->setObjectName(QString::fromUtf8("pbkeyOption"));
        pbkeyOption->setGeometry(QRect(390, 130, 31, 31));
        label_2 = new QLabel(keyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 91, 51));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        pbOpenMountPoint = new QPushButton(keyDialog);
        pbOpenMountPoint->setObjectName(QString::fromUtf8("pbOpenMountPoint"));
        pbOpenMountPoint->setGeometry(QRect(390, 20, 31, 31));
        lineEditMountPoint = new QLineEdit(keyDialog);
        lineEditMountPoint->setObjectName(QString::fromUtf8("lineEditMountPoint"));
        lineEditMountPoint->setGeometry(QRect(100, 20, 291, 31));
        checkBoxOpenReadOnly = new QCheckBox(keyDialog);
        checkBoxOpenReadOnly->setObjectName(QString::fromUtf8("checkBoxOpenReadOnly"));
        checkBoxOpenReadOnly->setGeometry(QRect(110, 50, 281, 31));
        checkBoxShareMountPoint = new QCheckBox(keyDialog);
        checkBoxShareMountPoint->setObjectName(QString::fromUtf8("checkBoxShareMountPoint"));
        checkBoxShareMountPoint->setGeometry(QRect(110, 70, 281, 31));
        pbOptions = new QPushButton(keyDialog);
        pbOptions->setObjectName(QString::fromUtf8("pbOptions"));
        pbOptions->setGeometry(QRect(110, 160, 91, 31));
        cbKeyType = new QComboBox(keyDialog);
        cbKeyType->setObjectName(QString::fromUtf8("cbKeyType"));
        cbKeyType->setGeometry(QRect(100, 100, 291, 31));
        QWidget::setTabOrder(lineEditKey, lineEditMountPoint);
        QWidget::setTabOrder(lineEditMountPoint, pbOpenMountPoint);
        QWidget::setTabOrder(pbOpenMountPoint, cbKeyType);
        QWidget::setTabOrder(cbKeyType, pbkeyOption);
        QWidget::setTabOrder(pbkeyOption, checkBoxOpenReadOnly);
        QWidget::setTabOrder(checkBoxOpenReadOnly, checkBoxShareMountPoint);
        QWidget::setTabOrder(checkBoxShareMountPoint, pbOptions);
        QWidget::setTabOrder(pbOptions, pbOpen);
        QWidget::setTabOrder(pbOpen, pbCancel);

        retranslateUi(keyDialog);

        QMetaObject::connectSlotsByName(keyDialog);
    } // setupUi

    void retranslateUi(QDialog *keyDialog)
    {
        keyDialog->setWindowTitle(QApplication::translate("keyDialog", "unlock and mount a luks volume", 0, QApplication::UnicodeUTF8));
        pbOpen->setText(QApplication::translate("keyDialog", "&open", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("keyDialog", "&cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("keyDialog", "key", 0, QApplication::UnicodeUTF8));
        pbkeyOption->setText(QString());
        label_2->setText(QApplication::translate("keyDialog", "mount name", 0, QApplication::UnicodeUTF8));
        pbOpenMountPoint->setText(QString());
        checkBoxOpenReadOnly->setText(QApplication::translate("keyDialog", "mount in &read only mode", 0, QApplication::UnicodeUTF8));
        checkBoxShareMountPoint->setText(QApplication::translate("keyDialog", "&share mount point", 0, QApplication::UnicodeUTF8));
        pbOptions->setText(QApplication::translate("keyDialog", "options", 0, QApplication::UnicodeUTF8));
        cbKeyType->clear();
        cbKeyType->insertItems(0, QStringList()
         << QApplication::translate("keyDialog", "key", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("keyDialog", "keyfile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("keyDialog", "plugin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("keyDialog", "TrueCrypt keys", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class keyDialog: public Ui_keyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYDIALOG_H
