#include <iostream>

using namespace std;

int main()
{
    int school[10]; int myschool, i;
    for (i = 0; i < 10; i++)
    {
        cout << "Vvedite nomer shkoli: ";
        cin >> school[i];
    }
    cout << "Teper vvedite svoyu shkolu: ";
    cin >> myschool;
    for (i = 0; i < 10; i++)
        if (school[i] == myschool)
            cout << endl << "Ya znayu etu shkolu!";
}
