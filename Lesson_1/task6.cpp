#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"rus");
    int a, b, c, n;
    cout << "��������� ��������, �������� �� ��������� ����� ����������"<<endl;
    cout << "������� ����� �: ";
    cin >> a;
    cout << "������� ����� b: ";
    cin >> b;
    cout << "������� ����� �: ";
    cin >> c;
    cout << "� ����������� �� �������� �������� �������" << endl;
    cout << "1 - ��������"<<endl;
    cout << "2 - ���������"<<endl;
    cout << "3 - ���������"<<endl;
    cout << "4 - �������"<<endl;
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
