/********************************************************************************
** Form generated from reading UI file 'chessclock.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSCLOCK_H
#define UI_CHESSCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chessclock
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QPushButton *pushButtonplayer1;
    QPushButton *pushButtonplayer2;
    QPushButton *pushButton120sec;
    QLabel *label;
    QPushButton *pushButton5min;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Chessclock)
    {
        if (Chessclock->objectName().isEmpty())
            Chessclock->setObjectName("Chessclock");
        Chessclock->resize(800, 600);
        centralwidget = new QWidget(Chessclock);
        centralwidget->setObjectName("centralwidget");
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(110, 30, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(420, 30, 118, 23));
        progressBar_2->setValue(24);
        pushButtonplayer1 = new QPushButton(centralwidget);
        pushButtonplayer1->setObjectName("pushButtonplayer1");
        pushButtonplayer1->setGeometry(QRect(130, 90, 80, 24));
        pushButtonplayer2 = new QPushButton(centralwidget);
        pushButtonplayer2->setObjectName("pushButtonplayer2");
        pushButtonplayer2->setGeometry(QRect(430, 90, 80, 24));
        pushButton120sec = new QPushButton(centralwidget);
        pushButton120sec->setObjectName("pushButton120sec");
        pushButton120sec->setGeometry(QRect(210, 190, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 140, 381, 31));
        pushButton5min = new QPushButton(centralwidget);
        pushButton5min->setObjectName("pushButton5min");
        pushButton5min->setGeometry(QRect(340, 190, 80, 24));
        pushButtonStart = new QPushButton(centralwidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(140, 260, 111, 51));
        pushButtonStop = new QPushButton(centralwidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setGeometry(QRect(339, 263, 101, 51));
        Chessclock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Chessclock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Chessclock->setMenuBar(menubar);
        statusbar = new QStatusBar(Chessclock);
        statusbar->setObjectName("statusbar");
        Chessclock->setStatusBar(statusbar);

        retranslateUi(Chessclock);

        QMetaObject::connectSlotsByName(Chessclock);
    } // setupUi

    void retranslateUi(QMainWindow *Chessclock)
    {
        Chessclock->setWindowTitle(QCoreApplication::translate("Chessclock", "Chessclock", nullptr));
        pushButtonplayer1->setText(QCoreApplication::translate("Chessclock", "Switch player", nullptr));
        pushButtonplayer2->setText(QCoreApplication::translate("Chessclock", "Switch player", nullptr));
        pushButton120sec->setText(QCoreApplication::translate("Chessclock", "120 sec", nullptr));
        label->setText(QCoreApplication::translate("Chessclock", "TextLabel", nullptr));
        pushButton5min->setText(QCoreApplication::translate("Chessclock", "5 min", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("Chessclock", "Start Game", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("Chessclock", "Stop Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chessclock: public Ui_Chessclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSCLOCK_H
