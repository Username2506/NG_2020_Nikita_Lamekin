#include <iostream>

using namespace std;

int main()
{
   int n, m, k;
   cout << "Belochka sobrala oreshki, pomogite poschitat hvatit li ih na zimu" << endl;
   cout << "kolichestvo shishek: ";
   cin >> n;
   cout << "kolichestvo oreshkov: ";
   cin >> m;
   cout << "skolko nuzhno oreshkov: ";
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
