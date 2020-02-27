#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "vvedite chislo a: ";
    cin >> a;
    cout << "vvedite chislo b: ";
    cin >> b;
    cout << "v zavisimosti ot zhelaemogo rezultata vvedite: " << endl;
    cout << "1 - summa" << endl;
    cout << "2 - raznica" << endl;
    cout << "3 - umnozhenie" << endl;
    cout << "4 - delenie" << endl;
    cin >> c;
    cout << "rezultat: ";
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
