#include <iostream>

using namespace std;

int main()
{
    int a,i,c,k,cc,kk;
    cout << "Vvedite chislo: ";
    cin >> a;
    cout << "a)" << endl;
    for (i=1;i<=a;i++)
    {
        for (c=1;c<=i;c++)
            cout << "a";
        cout << endl;
    }
    cout << "b)" << endl;
    for (i=1;i<=a;i++)
    {
        for (c=a;c>=i;c--)
            cout << "a";
        cout << endl;
    }
    cout << "c)" << endl;
    cc=1;
    kk=1;
    for (i=1;i<=a;i++)
    {
        for (c=cc;c<a;c++)
            cout << " ";
        for (k=kk;k<=1;k++)
            cout << "*";
        cout << endl;
        cc=cc+1;
        kk=kk-2;
    }
}
