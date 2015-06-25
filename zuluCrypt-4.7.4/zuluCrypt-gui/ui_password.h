/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

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

class Ui_PasswordDialog
{
public:
    QPushButton *PushButtonOpen;
    QPushButton *PushButtonCancel;
    QCheckBox *checkBoxReadOnly;
    QPushButton *PushButtonMountPointPath;
    QPushButton *PushButtonVolumePath;
    QLineEdit *PassPhraseField;
    QPushButton *pushButtonPassPhraseFromFile;
    QLineEdit *OpenVolumePath;
    QLineEdit *MountPointPath;
    QLabel *labelPassphrase;
    QLabel *labelMoutPointPath;
    QLabel *labelVolumePath;
    QPushButton *pushButtonPlugin;
    QPushButton *pbKeyOption;
    QComboBox *cbKeyType;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->setWindowModality(Qt::NonModal);
        PasswordDialog->resize(522, 193);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        PasswordDialog->setFont(font);
        PasswordDialog->setFocusPolicy(Qt::TabFocus);
        PasswordDialog->setAcceptDrops(true);
        PasswordDialog->setModal(false);
        PushButtonOpen = new QPushButton(PasswordDialog);
        PushButtonOpen->setObjectName(QString::fromUtf8("PushButtonOpen"));
        PushButtonOpen->setGeometry(QRect(170, 160, 91, 31));
        PushButtonOpen->setAutoDefault(true);
        PushButtonOpen->setDefault(true);
        PushButtonCancel = new QPushButton(PasswordDialog);
        PushButtonCancel->setObjectName(QString::fromUtf8("PushButtonCancel"));
        PushButtonCancel->setGeometry(QRect(260, 160, 91, 31));
        PushButtonCancel->setAutoDefault(true);
        PushButtonCancel->setDefault(false);
        checkBoxReadOnly = new QCheckBox(PasswordDialog);
        checkBoxReadOnly->setObjectName(QString::fromUtf8("checkBoxReadOnly"));
        checkBoxReadOnly->setGeometry(QRect(120, 70, 291, 31));
        checkBoxReadOnly->setChecked(false);
        PushButtonMountPointPath = new QPushButton(PasswordDialog);
        PushButtonMountPointPath->setObjectName(QString::fromUtf8("PushButtonMountPointPath"));
        PushButtonMountPointPath->setGeometry(QRect(410, 40, 31, 31));
        PushButtonMountPointPath->setAutoDefault(true);
        PushButtonVolumePath = new QPushButton(PasswordDialog);
        PushButtonVolumePath->setObjectName(QString::fromUtf8("PushButtonVolumePath"));
        PushButtonVolumePath->setGeometry(QRect(410, 10, 31, 31));
        PushButtonVolumePath->setAutoDefault(true);
        PushButtonVolumePath->setFlat(false);
        PassPhraseField = new QLineEdit(PasswordDialog);
        PassPhraseField->setObjectName(QString::fromUtf8("PassPhraseField"));
        PassPhraseField->setGeometry(QRect(110, 130, 301, 31));
        PassPhraseField->setMaxLength(100);
        PassPhraseField->setEchoMode(QLineEdit::Password);
        pushButtonPassPhraseFromFile = new QPushButton(PasswordDialog);
        pushButtonPassPhraseFromFile->setObjectName(QString::fromUtf8("pushButtonPassPhraseFromFile"));
        pushButtonPassPhraseFromFile->setGeometry(QRect(440, 130, 31, 31));
        pushButtonPassPhraseFromFile->setAutoDefault(true);
        OpenVolumePath = new QLineEdit(PasswordDialog);
        OpenVolumePath->setObjectName(QString::fromUtf8("OpenVolumePath"));
        OpenVolumePath->setGeometry(QRect(110, 10, 301, 31));
        MountPointPath = new QLineEdit(PasswordDialog);
        MountPointPath->setObjectName(QString::fromUtf8("MountPointPath"));
        MountPointPath->setGeometry(QRect(110, 40, 301, 31));
        labelPassphrase = new QLabel(PasswordDialog);
        labelPassphrase->setObjectName(QString::fromUtf8("labelPassphrase"));
        labelPassphrase->setGeometry(QRect(0, 130, 101, 31));
        labelPassphrase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelPassphrase->setWordWrap(true);
        labelMoutPointPath = new QLabel(PasswordDialog);
        labelMoutPointPath->setObjectName(QString::fromUtf8("labelMoutPointPath"));
        labelMoutPointPath->setGeometry(QRect(10, 40, 91, 31));
        labelMoutPointPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelMoutPointPath->setWordWrap(true);
        labelVolumePath = new QLabel(PasswordDialog);
        labelVolumePath->setObjectName(QString::fromUtf8("labelVolumePath"));
        labelVolumePath->setGeometry(QRect(0, 10, 101, 31));
        labelVolumePath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelVolumePath->setWordWrap(true);
        pushButtonPlugin = new QPushButton(PasswordDialog);
        pushButtonPlugin->setObjectName(QString::fromUtf8("pushButtonPlugin"));
        pushButtonPlugin->setGeometry(QRect(440, 100, 31, 31));
        pbKeyOption = new QPushButton(PasswordDialog);
        pbKeyOption->setObjectName(QString::fromUtf8("pbKeyOption"));
        pbKeyOption->setGeometry(QRect(410, 130, 31, 31));
        cbKeyType = new QComboBox(PasswordDialog);
        cbKeyType->setObjectName(QString::fromUtf8("cbKeyType"));
        cbKeyType->setGeometry(QRect(110, 100, 301, 31));
        QWidget::setTabOrder(OpenVolumePath, PushButtonVolumePath);
        QWidget::setTabOrder(PushButtonVolumePath, MountPointPath);
        QWidget::setTabOrder(MountPointPath, PushButtonMountPointPath);
        QWidget::setTabOrder(PushButtonMountPointPath, checkBoxReadOnly);
        QWidget::setTabOrder(checkBoxReadOnly, cbKeyType);
        QWidget::setTabOrder(cbKeyType, pushButtonPlugin);
        QWidget::setTabOrder(pushButtonPlugin, PassPhraseField);
        QWidget::setTabOrder(PassPhraseField, pbKeyOption);
        QWidget::setTabOrder(pbKeyOption, pushButtonPassPhraseFromFile);
        QWidget::setTabOrder(pushButtonPassPhraseFromFile, PushButtonOpen);
        QWidget::setTabOrder(PushButtonOpen, PushButtonCancel);

        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "open encrypted volume", 0, QApplication::UnicodeUTF8));
        PushButtonOpen->setText(QApplication::translate("PasswordDialog", "&open", 0, QApplication::UnicodeUTF8));
        PushButtonCancel->setText(QApplication::translate("PasswordDialog", "&cancel", 0, QApplication::UnicodeUTF8));
        checkBoxReadOnly->setText(QApplication::translate("PasswordDialog", "open the volume in &read only mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PushButtonMountPointPath->setToolTip(QApplication::translate("PasswordDialog", "select mount point path", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PushButtonMountPointPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        PushButtonVolumePath->setToolTip(QApplication::translate("PasswordDialog", "open volume path", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PushButtonVolumePath->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonPassPhraseFromFile->setToolTip(QApplication::translate("PasswordDialog", "open key file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonPassPhraseFromFile->setText(QString());
        labelPassphrase->setText(QApplication::translate("PasswordDialog", "key", 0, QApplication::UnicodeUTF8));
        labelMoutPointPath->setText(QApplication::translate("PasswordDialog", "mount name", 0, QApplication::UnicodeUTF8));
        labelVolumePath->setText(QApplication::translate("PasswordDialog", "volume path", 0, QApplication::UnicodeUTF8));
        pushButtonPlugin->setText(QString());
        pbKeyOption->setText(QString());
        cbKeyType->clear();
        cbKeyType->insertItems(0, QStringList()
         << QApplication::translate("PasswordDialog", "key", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PasswordDialog", "keyfile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PasswordDialog", "plugin", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
