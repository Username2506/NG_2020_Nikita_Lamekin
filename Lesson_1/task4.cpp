#include <iostream>

using namespace std;

int main()
{
    int a; int b; int c;
    setlocale(LC_ALL,"rus");
    cout << "������� ����� �: ";
    cin >> a;
    cout << "������� ����� b: ";
    cin >> b;
    cout << "� ����������� �� ��������� ���������� �������: ";cout << endl;
    cout << "1 - �����";cout << endl;
    cout << "2 - �������";cout << endl;
    cout << "3 - ���������";cout << endl;
    cout << "4 - �������";cout << endl;
    cin >> c;
    cout << "���������: ";
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
