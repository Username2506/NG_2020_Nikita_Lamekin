#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int z;
    cout << "������� ���� ��������: ";
    cin >> z;
    if (z>1000)
    {
        if(z>999999)
        {
            cout << "�� ���������!";
        }
        if(z<1000000)
        {
            cout << "������";
        }
    }
    if (z<1001)
    {
        cout << "������� ������";
    }
    cout << "...�� �� �������";
}
