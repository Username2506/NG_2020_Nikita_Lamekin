#include <iostream>

using namespace std;

int main()
{
    int school[10], myschool, counter;
    for (counter = 0; counter < 10; counter++)
    {
        cout << "Vvedite nomer shkoli: ";
        cin >> school[counter];
    }
    cout << "Teper vvedite svoyu shkolu: ";
    cin >> myschool;
    for (counter = 0; counter < 10; counter++)
        if (school[counter] == myschool)
        {
            cout << endl << "Ya znayu etu shkolu!";
            counter = 11;
        }
    if (counter == 10)
        cout << endl << "Ya ne znayu etu shkolu";
}
