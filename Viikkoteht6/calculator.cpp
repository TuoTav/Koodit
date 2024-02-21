#include "calculator.h"
#include "ui_calculator.h"
#include <QMessageBox>
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::numberClickHandler()
{
    QPushButton * button=qobject_cast<QPushButton*>(sender());
    QString joo = button->objectName();

    if(state==1)
    {
    number1=joo.last(1);
        QLineEdit lineEdit;

        qint32 value = number1.toInt();

        ui->Line1->setText(QString::number(value));
    }

    if(state==2)
    {
    number2=joo.last(1);
        QLineEdit lineEdit;

        qint32 value = number2.toInt();
         ui->line2->setText(QString::number(value));
    }



}


void Calculator::on_N1_clicked()
{
    numberClickHandler();
}


void Calculator::on_N2_clicked()
{
 numberClickHandler();
}



void Calculator::on_N3_clicked()
{
    numberClickHandler();
}



void Calculator::on_N4_clicked()
{
    numberClickHandler();
}




void Calculator::on_N5_clicked()
{
   numberClickHandler();
}


void Calculator::on_N6_clicked()
{
    numberClickHandler();
}


void Calculator::on_N7_clicked()
{
   numberClickHandler();
}


void Calculator::on_N8_clicked()
{
   numberClickHandler();
}


void Calculator::on_N9_clicked()
{
    numberClickHandler();
}


void Calculator::on_N0_clicked()
{
    numberClickHandler();
}
void Calculator::addSubMulDivClickHandler()
{
    state=2;
}

void Calculator::on_add_clicked()
{
    operand=0;
    addSubMulDivClickHandler();
}


void Calculator::on_sub_clicked()
{
    operand=1;
    addSubMulDivClickHandler();
}



void Calculator::on_mul_clicked()
{
    operand=2;
    addSubMulDivClickHandler();
}



void Calculator::on_div_clicked()
{
    operand=3;
    addSubMulDivClickHandler();
}
void Calculator::resetLineEdits()
{
    ui->Line1->clear();
    ui->line2->clear();
    ui->lineresult->clear();
    state=1;
}


void Calculator::on_clear_clicked()
{
    resetLineEdits();
}
void Calculator::EnterClickhandler()
{
    float n1= number1.toFloat();
    float n2= number2.toFloat();
    switch(operand){
    case 0:
        result=n1+n2;
        ui->lineresult->setText(QString::number(result));
        break;
    case 1:
        result=n1-n2;
        ui->lineresult->setText(QString::number(result));
        break;
    case 2:
        result=n1*n2;
        ui->lineresult->setText(QString::number(result));
        break;
    case 3:
        result=n1/n2;
        ui->lineresult->setText(QString::number(result));
        break;
    }


}


void Calculator::on_enter_clicked()
{
    EnterClickhandler();
}

