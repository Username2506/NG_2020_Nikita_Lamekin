#include "calculated.h"
#include "ui_calculated.h"
#include <cmath>

Calculated::Calculated(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculated)
{
    ui->setupUi(this);
    connect(ui->Button_0, &QPushButton::clicked, this, &Calculated::button_0Pressed);
    connect(ui->Button_1, &QPushButton::clicked, this, &Calculated::button_1Pressed);
    connect(ui->Button_2, &QPushButton::clicked, this, &Calculated::button_2Pressed);
    connect(ui->Button_3, &QPushButton::clicked, this, &Calculated::button_3Pressed);
    connect(ui->Button_4, &QPushButton::clicked, this, &Calculated::button_4Pressed);
    connect(ui->Button_5, &QPushButton::clicked, this, &Calculated::button_5Pressed);
    connect(ui->Button_6, &QPushButton::clicked, this, &Calculated::button_6Pressed);
    connect(ui->Button_7, &QPushButton::clicked, this, &Calculated::button_7Pressed);
    connect(ui->Button_8, &QPushButton::clicked, this, &Calculated::button_8Pressed);
    connect(ui->Button_9, &QPushButton::clicked, this, &Calculated::button_9Pressed);
    connect(ui->Button_clear, &QPushButton::clicked, this, &Calculated::button_clearPressed);
    connect(ui->Button_back, &QPushButton::clicked, this, &Calculated::button_backPressed);
    connect(ui->Button_add, &QPushButton::clicked, this, &Calculated::button_addPressed);
    connect(ui->Button_sub, &QPushButton::clicked, this, &Calculated::button_subPressed);
    connect(ui->Button_mul, &QPushButton::clicked, this, &Calculated::button_mulPressed);
    connect(ui->Button_div, &QPushButton::clicked, this, &Calculated::button_divPressed);
    connect(ui->Button_result, &QPushButton::clicked, this, &Calculated::button_resultPressed);
    connect(ui->Button_skobka1, &QPushButton::clicked, this, &Calculated::button_skobka1Pressed);
    connect(ui->Button_skobka2, &QPushButton::clicked, this, &Calculated::button_skobka2Pressed);
    connect(ui->Button_point, &QPushButton::clicked, this, &Calculated::button_pointPressed);
    connect(ui->Button_pi, &QPushButton::clicked, this, &Calculated::button_piPressed);
    connect(ui->Button_e, &QPushButton::clicked, this, &Calculated::button_ePressed);
    connect(ui->Button_sign, &QPushButton::clicked, this, &Calculated::button_signPressed);
    connect(ui->Button_exp, &QPushButton::clicked, this, &Calculated::button_expPressed);
}

Calculated::~Calculated()
{
    delete ui;
}

void Calculated::button_0Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "0");
    }
}

void Calculated::button_1Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "1");
    } else {
        ui->result->setText("1");
    }
}

void Calculated::button_2Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "2");
    } else {
        ui->result->setText("2");
    }
}

void Calculated::button_3Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "3");
    } else {
        ui->result->setText("3");
    }
}

void Calculated::button_4Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "4");
    } else {
        ui->result->setText("4");
    }
}

void Calculated::button_5Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "5");
    } else {
        ui->result->setText("5");
    }
}

void Calculated::button_6Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "6");
    } else {
        ui->result->setText("6");
    }
}

void Calculated::button_7Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "7");
    } else {
        ui->result->setText("7");
    }
}

void Calculated::button_8Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "8");
    } else {
        ui->result->setText("8");
    }
}

void Calculated::button_9Pressed()
{
    if (ui->result->text() != "0") {
        ui->result->setText(ui->result->text() + "9");
    } else {
        ui->result->setText("9");
    }
}

void Calculated::button_piPressed()
{
    ui->result->setText("3.1415926");
}

void Calculated::button_ePressed()
{
    ui->result->setText("2.7182818");
}

void Calculated::button_clearPressed()
{
    ui->result->setText("0");
    ui->story->setText("");
}

void Calculated::button_backPressed()
{
    ui->result->setText(ui->result->text().left(ui->result->text().size() - 1));
    if (ui->result->text().size() == 0) {
        ui->result->setText("0");
    }
}

void Calculated::button_signPressed()
{
    ui->result->setNum(ui->result->text().toDouble() - 2 * ui->result->text().toDouble());
}

void Calculated::button_addPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == ")") {
        ui->story->setText(ui->story->text() + "+");
        return;
        }
        if (ui->story->text().back() == "=") {
        ui->story->setText(ui->result->text() + "+");
        ui->result->setText("0");
        return;
        }
    }
    if (ui->result->text() == "0") {
        ui->story->setText(ui->story->text().left(ui->story->text().size() - 1));
        ui->story->setText(ui->story->text() + "+");
        return;
    }
    if (ui->result->text() != "0") {
        ui->story->setText(ui->story->text() + ui->result->text() + "+"); 
        ui->result->setText("0");
        return;
    }
}

void Calculated::button_subPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == ")") {
        ui->story->setText(ui->story->text() + "-");
        return;
        }
        if (ui->story->text().back() == "=") {
        ui->story->setText(ui->result->text() + "-");
        ui->result->setText("0");
        return;
        }
    }
    if (ui->result->text() != "0") {
        ui->story->setText(ui->story->text() + ui->result->text() + "-");
        ui->result->setText("0");
        return;
    }
    if (ui->result->text() == "0") {
        ui->story->setText(ui->story->text().left(ui->story->text().size() - 1));
        ui->story->setText(ui->story->text() + "-");
        return;
    }
}

void Calculated::button_mulPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == ")") {
        ui->story->setText(ui->story->text() + "*");
        return;
        }
        if (ui->story->text().back() == "=") {
        ui->story->setText(ui->result->text() + "*");
        ui->result->setText("0");
        return;
        }
    }
    if (ui->result->text() != "0") {
        ui->story->setText(ui->story->text() + ui->result->text() + "*");
        ui->result->setText("0");
    }
    if (ui->result->text() == "0") {
        ui->story->setText(ui->story->text().left(ui->story->text().size() - 1));
        ui->story->setText(ui->story->text() + "*");
    }
}

void Calculated::button_divPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == ")") {
        ui->story->setText(ui->story->text() + "/");
        return;
        }
        if (ui->story->text().back() == "=") {
        ui->story->setText(ui->result->text() + "/");
        ui->result->setText("0");
        return;
        }
    }
    if (ui->result->text() != "0") {
        ui->story->setText(ui->story->text() + ui->result->text() + "/");
        ui->result->setText("0");
    }
    if (ui->result->text() == "0") {
        ui->story->setText(ui->story->text().left(ui->story->text().size() - 1));
        ui->story->setText(ui->story->text() + "/");
    }
}

void Calculated::button_expPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == ")") {
        ui->story->setText(ui->story->text() + "^");
        return;
        }
        if (ui->story->text().back() == "=") {
        ui->story->setText(ui->result->text() + "^");
        ui->result->setText("0");
        return;
        }
    }
    if (ui->result->text() != "0") {
        ui->story->setText(ui->story->text() + ui->result->text() + "^");
        ui->result->setText("0");
    }
    if (ui->result->text() == "0") {
        ui->story->setText(ui->story->text().left(ui->story->text().size() - 1));
        ui->story->setText(ui->story->text() + "^");
    }
}

void Calculated::button_resultPressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() == "*" ||ui->story->text().back() == "/" ||ui->story->text().back() == "+"
                 ||ui->story->text().back() == "^" ||ui->story->text().back() == "-") {
            ui->story->setText(ui->story->text() + ui->result->text() + "=");
            ui->result->setNum(order(ui->story->text()));
        } else {
            ui->story->setText(ui->story->text() + "=");
            ui->result->setNum(order(ui->story->text()));
        }
    }
}

void Calculated::button_skobka1Pressed()
{
    if (ui->story->text() != "") {
        if (ui->story->text().back() != ")") {
            ui->story->setText(ui->story->text() + "(");
            ui->result->setText("0");
        }
    } else {
        ui->story->setText(ui->story->text() + "(");
        ui->result->setText("0");
    }
}

void Calculated::button_skobka2Pressed()
{
    if (ui->story->text().count("(") > ui->story->text().count(")") && ui->result->text() == "0") {
        ui->story->setText(ui->story->text() + ")");
    }
    if (ui->story->text().count("(") > ui->story->text().count(")")) {
        ui->story->setText(ui->story->text() + ui->result->text() + ")");
        ui->result->setText("0");
    }
}

void Calculated::button_pointPressed()
{
    if (ui->result->text().contains(".") == false) {
        ui->result->setText(ui->result->text() + ".");
    }
}

double Calculated::order(QString stroka)
{
    while (stroka.contains("(") && (stroka.contains("*") || stroka.contains("/") || stroka.contains("+")
                                    || stroka.contains("^") || (stroka.contains("-") && stroka.lastIndexOf("-") != 1))) {
        stroka = calc_skobki(stroka);
    }
    while (stroka.contains("*") || stroka.contains("/") || stroka.contains("+")
           || stroka.contains("^") || (stroka.contains("-") && stroka.lastIndexOf("-") != 0)) {
        stroka = calc_bezSkobok(stroka);
    }
    return result;
}

QString Calculated::calc_bezSkobok(QString stroka)
{
    double number1 = 0, number2 = 0;
    int counter1 = 0;
    int counter2, counter3;
    for (counter1 = 0; counter1 <= stroka.indexOf("="); counter1++) {
        if (stroka[counter1] == "^") {
            for(counter2 = counter1+1; counter2 <= stroka.indexOf("="); counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == "=") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= 0; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || counter3 == 0) {
                    number1 = stroka.mid(counter3, counter1-counter3).toDouble();
                    break;
                }
            }
            result = pow(number1, number2);
            stroka.replace(counter3, counter2-counter3, QString::number(result));
            return stroka;
        }
    }
    for (counter1 = 0; counter1 <= stroka.indexOf("="); counter1++) {
        if (stroka[counter1] == "*") {
            for(counter2 = counter1+1; counter2 <= stroka.indexOf("="); counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == "=") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= 0; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || counter3 == 0) {
                    number1 = stroka.mid(counter3, counter1-counter3).toDouble();
                    break;
                }
            }
            result = mul(number1, number2);
            stroka.replace(counter3, counter2-counter3, QString::number(result));
            return stroka;
        }
        if (stroka[counter1] == "/") {
            for(counter2 = counter1+1; counter2 <= stroka.indexOf("="); counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == "=") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= 0; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || counter3 == 0) {
                    number1 = stroka.mid(counter3, counter1-counter3).toDouble();
                    break;
                }
            }
            result = div(number1, number2);
            stroka.replace(counter3, counter2-counter3, QString::number(result));
            return stroka;
        }
    }
    for (counter1 = 0; counter1 <= stroka.indexOf("="); counter1++) {
        if (stroka[counter1] == "+") {
            for(counter2 = counter1+1; counter2 <= stroka.indexOf("="); counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == "=") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= 0; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || counter3 == 0) {
                    number1 = stroka.mid(counter3, counter1-counter3).toDouble();
                    break;
                }
            }
            result = add(number1, number2);
            stroka.replace(counter3, counter2-counter3, QString::number(result));
            return stroka;
        }
        if (stroka[counter1] == "-") {
            for(counter2 = counter1+1; counter2 <= stroka.indexOf("="); counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == "=") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= 0; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || counter3 == 0) {
                    number1 = stroka.mid(counter3, counter1-counter3).toDouble();
                    break;
                }
            }
            result = sub(number1, number2);
            stroka.replace(counter3, counter2-counter3, QString::number(result));
            return stroka;
        }
    }
}

QString Calculated::calc_skobki(QString stroka)
{
    double number1 = 0, number2 = 0;
    int skobka1_index = stroka.lastIndexOf("(");
    int skobka2_index = stroka.indexOf(")", skobka1_index);
    int counter1 = skobka1_index;
    int counter2, counter3;
    for (counter1 = skobka1_index; counter1 < skobka2_index; counter1++) {
        if (stroka[counter1] == "^") {
            for(counter2 = counter1+1; counter2 <= skobka2_index; counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == ")") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= skobka1_index; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || stroka[counter3] == "(") {
                    number1 = stroka.mid(counter3+1, counter1-counter3-1).toDouble();
                    break;
                }
            }
            result = pow(number1, number2);
            stroka.replace(counter3+1, counter2-counter3-1, QString::number(result));
            skobka1_index = stroka.lastIndexOf("(");
            skobka2_index = stroka.indexOf(")", skobka1_index);
            if (stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("*") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("/") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("+") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("-") == false)
            {
                stroka.remove(skobka1_index, 1);
                stroka.remove(skobka2_index-1, 1);
            }
            return stroka;
        }
    }
    for (counter1 = skobka1_index; counter1 < skobka2_index; counter1++) {
        if (stroka[counter1] == "*") {
            for(counter2 = counter1+1; counter2 <= skobka2_index; counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == ")") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= skobka1_index; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || stroka[counter3] == "(") {
                    number1 = stroka.mid(counter3+1, counter1-counter3-1).toDouble();
                    break;
                }
            }
            result = mul(number1, number2);
            stroka.replace(counter3+1, counter2-counter3-1, QString::number(result));
            skobka1_index = stroka.lastIndexOf("(");
            skobka2_index = stroka.indexOf(")", skobka1_index);
            if (stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("*") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("/") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("+") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("-") == false)
            {
                stroka.remove(skobka1_index, 1);
                stroka.remove(skobka2_index-1, 1);
            }
            return stroka;
        }
        if (stroka[counter1] == "/") {
            for(counter2 = counter1+1; counter2 <= skobka2_index; counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == ")") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= skobka1_index; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || stroka[counter3] == "(") {
                    number1 = stroka.mid(counter3+1, counter1-counter3-1).toDouble();
                    break;
                }
            }
            result = div(number1, number2);
            stroka.replace(counter3+1, counter2-counter3-1, QString::number(result));
            skobka1_index = stroka.lastIndexOf("(");
            skobka2_index = stroka.indexOf(")", skobka1_index);
            if (stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("*") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("/") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("+") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("-") == false)
            {
                stroka.remove(skobka1_index, 1);
                stroka.remove(skobka2_index-1, 1);
            }
            return stroka;
        }
    }
    for (counter1 = skobka1_index; counter1 < skobka2_index; counter1++) {
        if (stroka[counter1] == "+") {
            for(counter2 = counter1+1; counter2 <= skobka2_index; counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == ")") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= skobka1_index; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || stroka[counter3] == "(") {
                    number1 = stroka.mid(counter3+1, counter1-counter3-1).toDouble();
                    break;
                }
            }
            result = add(number1, number2);
            stroka.replace(counter3+1, counter2-counter3-1, QString::number(result));
            skobka1_index = stroka.lastIndexOf("(");
            skobka2_index = stroka.indexOf(")", skobka1_index);
            if (stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("*") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("/") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("+") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("-") == false)
            {
                stroka.remove(skobka1_index, 1);
                stroka.remove(skobka2_index-1, 1);
            }
            return stroka;
        }
        if (stroka[counter1] == "-") {
            for(counter2 = counter1+1; counter2 <= skobka2_index; counter2++) {
                if (stroka[counter2] == "+" || stroka[counter2] == "-" || stroka[counter2] == "*" || stroka[counter2] == "^" || stroka[counter2] == "/" || stroka[counter2] == ")") {
                    number2 = stroka.mid(counter1+1, counter2-counter1-1).toDouble();
                    break;
                }
            }
            for(counter3 = counter1-1; counter3 >= skobka1_index; counter3--) {
                if (stroka[counter3] == "+" || stroka[counter3] == "-" || stroka[counter3] == "*" || stroka[counter2] == "^" || stroka[counter3] == "/" || stroka[counter3] == "(") {
                    number1 = stroka.mid(counter3+1, counter1-counter3-1).toDouble();
                    break;
                }
            }
            result = sub(number1, number2);
            stroka.replace(counter3+1, counter2-counter3-1, QString::number(result));
            skobka1_index = stroka.lastIndexOf("(");
            skobka2_index = stroka.indexOf(")", skobka1_index);
            if (stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("*") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("/") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("+") == false
                    && stroka.mid(skobka1_index, skobka2_index-skobka1_index).contains("-") == false)
            {
                stroka.remove(skobka1_index, 1);
                stroka.remove(skobka2_index-1, 1);
            }
            return stroka;
        }
    }
}

