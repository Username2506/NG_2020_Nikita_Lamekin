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
    switch(c)
    {
        case 1:cout <<"rezultat: " << a+b << endl;break;
        case 2:cout <<"rezultat: " << a-b << endl;break;
        case 3:cout <<"rezultat: " << a*b << endl;break;
        case 4:cout <<"rezultat: " << a/b << endl;break;
        default: cout << "vi vveli nepravilnuyu komandu";
    }
}
