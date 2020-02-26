#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int z;
    cout << "Введите свою зарплату: ";
    cin >> z;
    if (z>1000)
    {
        if(z>999999)
        {
            cout << "Ты миллионер!";
        }
        if(z<1000000)
        {
            cout << "Хорошо";
        }
    }
    if (z<1001)
    {
        cout << "Работай больше";
    }
    cout << "...но ты молодец";
}
