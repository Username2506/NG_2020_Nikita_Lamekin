#include <iostream>

using namespace std;

int main()
{
  int a, b, c, k, n;
  cout << "vvedite zarplatu Vasi: ";
  cin >> a;
  cout << "vvedite zarplatu Peti: ";
  cin >> b;
  cout << "vvedite zarplatu Vovi: ";
  cin >> c;
  k=a;
  if (b>k)
      k=b;
  if (c>k)
      k=c;
  n=a;
  if (b<n)
      n=b;
  if (c<n)
      n=c;
  cout << "Raznica mezhdu maximalnoy zarplatoy i minimalnoy: ";
  cout << k-n;
}
