#include <iostream>

using namespace std;

int main()
{
    int chisla[5]; int counter, biggest, column;
    biggest = 0;
    for (counter = 0; counter < 5; counter++)
    {
        cout << "Vvedite chislo: ";
        cin >> chisla[counter];
        if (chisla[counter] > biggest)
            biggest = chisla[counter];
    }
    for (column = 0; column < biggest; column++)
    {
        for (counter = 0; counter < 5; counter++)
        {
            if (chisla[counter] > column)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}
