#include <iostream>

using namespace std;

int main()
{
    int a; int b; int c;
    setlocale(LC_ALL,"rus");
    cout << "введите число а: ";
    cin >> a;
    cout << "введите число b: ";
    cin >> b;
    cout << "в зависимости от желаемого результата введите: ";cout << endl;
    cout << "1 - сумма";cout << endl;
    cout << "2 - разница";cout << endl;
    cout << "3 - умножение";cout << endl;
    cout << "4 - деление";cout << endl;
    cin >> c;
    cout << "результат: ";
    if (c>0 and c<2)
    {
        cout << a+b;cout << endl;
    }
    if (c>1 and c<3)
    {
        cout << a-b;cout << endl;
    }
    if (c>2 and c<4)
    {
        cout << a*b;cout << endl;
    }
    if (c>3 and c<5)
    {
        cout << a/b;cout << endl;
    }
}
