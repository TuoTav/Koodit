/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *Line1;
    QLineEdit *line2;
    QLineEdit *lineresult;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *N0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *div;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(446, 288);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        Line1 = new QLineEdit(centralwidget);
        Line1->setObjectName("Line1");
        Line1->setGeometry(QRect(40, 30, 113, 24));
        line2 = new QLineEdit(centralwidget);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(170, 30, 113, 24));
        lineresult = new QLineEdit(centralwidget);
        lineresult->setObjectName("lineresult");
        lineresult->setGeometry(QRect(300, 30, 113, 24));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(40, 90, 80, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(130, 90, 80, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(220, 90, 80, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(40, 130, 80, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(130, 130, 80, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(220, 130, 80, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(40, 170, 80, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(130, 170, 80, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(220, 170, 80, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(310, 90, 80, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(310, 130, 80, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(310, 170, 80, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(40, 200, 80, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(130, 200, 80, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(220, 200, 80, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(310, 200, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 10, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 10, 49, 16));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 446, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        N1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        N2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        N3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        N4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        N5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        N6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        N7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        N8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        N9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        N0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        clear->setText(QCoreApplication::translate("Calculator", "clear", nullptr));
        enter->setText(QCoreApplication::translate("Calculator", "enter", nullptr));
        div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "Number1", nullptr));
        label_2->setText(QCoreApplication::translate("Calculator", "Number2", nullptr));
        label_3->setText(QCoreApplication::translate("Calculator", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
