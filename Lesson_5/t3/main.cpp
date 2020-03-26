#include <iostream>
#include <cmath>

using namespace std;

int vvod(){
    int chislo;
    cout << "Vvedite chislo: ";
    cin >> chislo;
    return chislo;
}

int add(int chislo2,int chislo1){
    return chislo1 + chislo2;
}

int sub(int chislo2,int chislo1){
    return chislo1 - chislo2;
}

int mul(int chislo2,int chislo1){
    return chislo1 * chislo2;
}

double div(double chislo2,double chislo1){
    return chislo1 / chislo2;
}

int sqr(int chislo1){
    return sqrt(chislo1);
}

int exp(int chislo1){
    int count; int chislo2=chislo1; int stepen;
    cout << "Vvedite stepen: ";
    cin >> stepen;
    for (count = 1; count < stepen; count++)
        chislo2=chislo2*chislo1;
    return chislo2;
}

void ask(){
    int choice;
    cout << "1 - addition" << endl;
    cout << "2 - subtraction" << endl;
    cout << "3 - multiplication" << endl;
    cout << "4 - division" << endl;
    cout << "5 - square root" << endl;
    cout << "6 - exponentiation" << endl;
    cout << "Your choice: ";
    cin >> choice;
    switch (choice){
        case 1:cout << "result: " << add(vvod(),vvod());break;
        case 2:cout << "result: " << sub(vvod(),vvod());break;
        case 3:cout << "result: " << mul(vvod(),vvod());break;
        case 4:cout << "result: " << div(vvod(),vvod());break;
        case 5:cout << "result: " << sqr(vvod());break;
        case 6:cout << "result: " << exp(vvod());break;
        default:cout << "wrong number";
    }
}

int main()
{
    ask();
}
