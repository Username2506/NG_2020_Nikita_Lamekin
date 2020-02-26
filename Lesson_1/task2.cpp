#include <iostream>

using namespace std;

int main()
{
   setlocale(LC_ALL,"rus");
   int n; int m; int k;
   cout << "Белочка собрала орешки, помогите ей посчитать хватит ли их на зиму";cout << endl;
   cout << "количество шишек: ";
   cin >> n;
   cout << "количество орешков: ";
   cin >> m;
   cout << "сколько нужно орешков: ";
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
