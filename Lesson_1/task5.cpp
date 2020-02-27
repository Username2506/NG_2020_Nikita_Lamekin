#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d, x1, x2;
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "vvedite a: ";
    cin>> a;
    cout << "vvedite b: ";
    cin >> b;
    cout << "vvedite c: ";
    cin >> c;
    d=(b*b)-(4*a*c);
    cout << "D = " << d << endl;
    if (d==0)
    {
      x1=-b/(2*a);
      cout << "x = " << x1 << endl;
    }
    if (d>0)
    {
      d=sqrt(d);
      x1=(-b+d)/(2*a);
      cout << "x1 = " << x1 << endl;
      x2=(-b-d)/(2*a);
      cout << "x2 = " << x2 << endl;
    }
    if (d<0)
    {
       cout << "komplexsnie korni: "<<endl;
       d=-d;
       d=sqrt(d);
       cout << "x1 = " <<(-b/(2*a))<<"+"<<(d/(2*a))<<"i"<<endl;
       cout << "x2 = " <<(-b/(2*a))<<"-"<<(d/(2*a))<<"i"<<endl;
    }
}
