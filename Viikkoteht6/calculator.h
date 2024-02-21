#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    int ingrement;



private slots:
    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_N0_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

private:
    Ui::Calculator *ui;
    QString number1, number2;
    int state=1;
    float result;
    short operand;

    void numberClickHandler();
    void EnterClickhandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // CALCULATOR_H
