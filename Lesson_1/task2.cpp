#include <iostream>

using namespace std;

int main()
{
   setlocale(LC_ALL,"rus");
   int n; int m; int k;
   cout << "������� ������� ������, �������� �� ��������� ������ �� �� �� ����";cout << endl;
   cout << "���������� �����: ";
   cin >> n;
   cout << "���������� �������: ";
   cin >> m;
   cout << "������� ����� �������: ";
   cin >> k;
   if ((n*m)>(k-1))
   {
       cout << "YES";
   }
   if ((n*m)<k)
   {
       cout << "NO";
   }
}
