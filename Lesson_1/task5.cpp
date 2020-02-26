#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int a, b, c, d, x1, x2, i;
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "введите а: ";
    cin>> a;
    cout << "введите b: ";
    cin >> b;
    cout << "введите с: ";
    cin >> c;
    i=-1;
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
       cout << "комплексные корни: "<<endl;
       d=-d;
       d=sqrt(d);
       cout << "x1 = " <<(-b/(2*a))<<"+"<<(d/(2*a))<<"i"<<endl;
       cout << "x2 = " <<(-b/(2*a))<<"-"<<(d/(2*a))<<"i"<<endl;
    }
}
