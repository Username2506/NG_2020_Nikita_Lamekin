#ifndef CALCULATED_H
#define CALCULATED_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculated; }
QT_END_NAMESPACE

class Calculated : public QMainWindow
{
    Q_OBJECT

public:
    Calculated(QWidget *parent = nullptr);
    ~Calculated();

private slots:
    void button_0Pressed();
    void button_1Pressed();
    void button_2Pressed();
    void button_3Pressed();
    void button_4Pressed();
    void button_5Pressed();
    void button_6Pressed();
    void button_7Pressed();
    void button_8Pressed();
    void button_9Pressed();
    void button_clearPressed();
    void button_backPressed();
    void button_addPressed();
    void button_subPressed();
    void button_mulPressed();
    void button_divPressed();
    void button_resultPressed();
    void button_skobka1Pressed();
    void button_skobka2Pressed();
    void button_pointPressed();
    void button_piPressed();
    void button_ePressed();
    void button_signPressed();
    void button_expPressed();

private:
    Ui::Calculated *ui;
    double add(double number1, double number2) {return number1 + number2;};
    double sub(double number1, double number2) {return number1 - number2;};
    double mul(double number1, double number2) {return number1 * number2;};
    double div(double number1, double number2) {return number1 / number2;};
    double order(QString stroka);
    QString calc_skobki(QString stroka);
    QString calc_bezSkobok(QString stroka);
    double result;
};
#endif // CALCULATED_H
