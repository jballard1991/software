/********************************************************************************
** Form generated from reading UI file 'mountpartition.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUNTPARTITION_H
#define UI_MOUNTPARTITION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mountPartition
{
public:
    QLabel *labelMountPoint;
    QPushButton *pbMount;
    QPushButton *pbMountFolder;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *pbCancel;
    QCheckBox *checkBoxMountReadOnly;
    QCheckBox *checkBoxShareMountPoint;
    QPushButton *pbOptions;

    void setupUi(QWidget *mountPartition)
    {
        if (mountPartition->objectName().isEmpty())
            mountPartition->setObjectName(QString::fromUtf8("mountPartition"));
        mountPartition->resize(522, 148);
        labelMountPoint = new QLabel(mountPartition);
        labelMountPoint->setObjectName(QString::fromUtf8("labelMountPoint"));
        labelMountPoint->setGeometry(QRect(0, 10, 101, 31));
        labelMountPoint->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelMountPoint->setWordWrap(true);
        pbMount = new QPushButton(mountPartition);
        pbMount->setObjectName(QString::fromUtf8("pbMount"));
        pbMount->setGeometry(QRect(220, 110, 81, 31));
        pbMount->setAutoDefault(true);
        pbMount->setDefault(true);
        pbMountFolder = new QPushButton(mountPartition);
        pbMountFolder->setObjectName(QString::fromUtf8("pbMountFolder"));
        pbMountFolder->setGeometry(QRect(410, 10, 31, 31));
        checkBox = new QCheckBox(mountPartition);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(180, 40, 231, 31));
        lineEdit = new QLineEdit(mountPartition);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 10, 301, 31));
        pbCancel = new QPushButton(mountPartition);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setGeometry(QRect(300, 110, 81, 31));
        pbCancel->setAutoDefault(true);
        checkBoxMountReadOnly = new QCheckBox(mountPartition);
        checkBoxMountReadOnly->setObjectName(QString::fromUtf8("checkBoxMountReadOnly"));
        checkBoxMountReadOnly->setGeometry(QRect(180, 60, 161, 31));
        checkBoxShareMountPoint = new QCheckBox(mountPartition);
        checkBoxShareMountPoint->setObjectName(QString::fromUtf8("checkBoxShareMountPoint"));
        checkBoxShareMountPoint->setGeometry(QRect(180, 80, 181, 31));
        pbOptions = new QPushButton(mountPartition);
        pbOptions->setObjectName(QString::fromUtf8("pbOptions"));
        pbOptions->setGeometry(QRect(140, 110, 81, 31));
        QWidget::setTabOrder(lineEdit, pbMountFolder);
        QWidget::setTabOrder(pbMountFolder, checkBox);
        QWidget::setTabOrder(checkBox, checkBoxMountReadOnly);
        QWidget::setTabOrder(checkBoxMountReadOnly, checkBoxShareMountPoint);
        QWidget::setTabOrder(checkBoxShareMountPoint, pbOptions);
        QWidget::setTabOrder(pbOptions, pbMount);
        QWidget::setTabOrder(pbMount, pbCancel);

        retranslateUi(mountPartition);

        QMetaObject::connectSlotsByName(mountPartition);
    } // setupUi

    void retranslateUi(QWidget *mountPartition)
    {
        mountPartition->setWindowTitle(QApplication::translate("mountPartition", "select mount point path", 0, QApplication::UnicodeUTF8));
        labelMountPoint->setText(QApplication::translate("mountPartition", "mount name", 0, QApplication::UnicodeUTF8));
        pbMount->setText(QApplication::translate("mountPartition", "&mount", 0, QApplication::UnicodeUTF8));
        pbMountFolder->setText(QString());
        checkBox->setText(QApplication::translate("mountPartition", "use la&bel", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("mountPartition", "&cancel", 0, QApplication::UnicodeUTF8));
        checkBoxMountReadOnly->setText(QApplication::translate("mountPartition", "mount &read only", 0, QApplication::UnicodeUTF8));
        checkBoxShareMountPoint->setText(QApplication::translate("mountPartition", "&share mount point", 0, QApplication::UnicodeUTF8));
        pbOptions->setText(QApplication::translate("mountPartition", "options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mountPartition: public Ui_mountPartition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUNTPARTITION_H
