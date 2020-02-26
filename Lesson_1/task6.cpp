#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"rus");
    int a, b, c, n;
    cout << "программа проверит, €вл€ютс€ ли введенные числа уравнением"<<endl;
    cout << "введите число а: ";
    cin >> a;
    cout << "введите число b: ";
    cin >> b;
    cout << "введите число с: ";
    cin >> c;
    cout << "в зависимости от желаемой проверки введите" << endl;
    cout << "1 - сложение"<<endl;
    cout << "2 - отнимание"<<endl;
    cout << "3 - умножение"<<endl;
    cout << "4 - деление"<<endl;
    while (n!=5){
    cin >> n;
    if (n==1)
    {
        if (a+b==c or a+c==b or c+b==a)
          cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    if (n==2)
    {
        if (a-b==c or a-c==b or b-a==c or b-c==a or c-a==b or c-b==a)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    if (n==3)
    {
        if (a*b==c or a*c==b or b*c==a)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    if (n==4)
    {
        if (a/b==c or a/c==b or b/a==c or b/c==a or c/a==b or c/b==a)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    }
}
