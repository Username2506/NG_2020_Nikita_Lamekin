#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL,"rus");
  int a;int b; int c;int k; int n;
  cout << "����� �������� ����: ";
  cin >> a;
  cout << "����� �������� ����: ";
  cin >> b;
  cout << "����� �������� ����: ";
  cin >> c;
  k=a;
  if (b>k)
  {
      k=b;
  }
  if (c>k)
  {
      k=c;
  }
  n=a;
  if (b<n)
  {
      n=b;
  }
  if (c<n)
  {
      n=c;
  }
  cout << "������� ����� ������������ ��������� � �����������: ";
  cout << k-n;
  }
