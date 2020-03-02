#include <iostream>

using namespace std;

int main()
{
    int a,i,c;
    cout << "Vvedite znachenie storoni kvadrata: " << endl;
    cin >> a;
    for (i=1;i<=a;i++)
    {
        for (c=1;c<=a;c++)
            cout << "*" << " ";
        cout << endl;
    }
}
