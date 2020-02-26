#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL,"rus");
  int a;int b; int c;int k; int n;
  cout << "введи зарплату Васи: ";
  cin >> a;
  cout << "введи зарплату Пети: ";
  cin >> b;
  cout << "введи зарплату Вовы: ";
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
  cout << "Разница между максимальной зарплатой и минимальной: ";
  cout << k-n;
  }
