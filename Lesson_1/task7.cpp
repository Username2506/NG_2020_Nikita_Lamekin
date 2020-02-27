#include <iostream>

using namespace std;

int main()
{
    int z;
    cout << "vvedite svoyu zarplatu: ";
    cin >> z;
    if (z>999)
    {
        if(z>999999)
            cout << "Ti millioner!!";
        if(z<1000000)
            cout << "Horosho";
    }
    if (z<1000)
        cout << "Rabotai bolshe";
    cout << "...no ti molodec";
}
