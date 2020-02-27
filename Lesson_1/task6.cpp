#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cout << "programa proverit, esli vvedennie chisla - uravnenie"<<endl;
    cout << "vvedite chislo a: ";
    cin >> a;
    cout << "vvedite chislo b: ";
    cin >> b;
    cout << "vvedite chislo c: ";
    cin >> c;
        if (a+b==c or a+c==b or c+b==a or a-b==c or a-c==b or b-a==c or b-c==a or c-a==b or c-b==a
            or a*b==c or a*c==b or b*c==a or a/b==c or a/c==b or b/a==c or b/c==a or c/a==b or c/b==a)
          cout << "YES"<<endl;
        else cout << "NO"<<endl;
}
