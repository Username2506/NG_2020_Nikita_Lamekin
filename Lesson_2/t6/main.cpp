#include <iostream>

using namespace std;

int main()
{
    int bankomat[10]; int nomer, money;
    for (nomer = 0; nomer < 10; nomer++)
        bankomat[nomer] = 0;
    loop:
    cout << "vvedite nomer kartochki: ";
    cin >> nomer;
    cout << "Skolko polozhit: ";
    cin >> money;
    bankomat[nomer-1] += money;
    for (nomer = 0; nomer < 9; nomer++)
        cout << bankomat[nomer] << " ";
    cout << bankomat[9] << endl;
    goto loop;
}
