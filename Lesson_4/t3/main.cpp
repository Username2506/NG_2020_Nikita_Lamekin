#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
    int count_stroka = 0;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[count_stroka] != 0)
    {
        if (stroka[count_stroka] >= 'a' and stroka[count_stroka] <= 'z')
            stroka[count_stroka] -= 32;
        count_stroka++;
    }
    cout << stroka;
}
