#include <iostream>

using namespace std;

int main()
{
    int chisla[20]; int counter; int biggest; int count_symbols;
    for (counter = 0; counter < 20; counter++)
        chisla[counter] = 0;
    biggest = 0;
    cout << "vvedite do 20 chisel: " << endl << "0 - zakonchit vvod" << endl;
    for (counter = 0; counter < 20; counter++)
    {
        cin >> chisla[counter];
        if (chisla[counter] > biggest)
            biggest = chisla[counter];
        if (chisla [counter] == 0)
            counter = 20;
    }
    for (counter = 0; chisla[counter] != 0; counter++)
    {
        for (count_symbols = 0; count_symbols < (biggest - chisla[counter]) / 2; count_symbols++)
            cout << " ";
        for (count_symbols = 0; count_symbols < chisla[counter]; count_symbols++)
            cout << "*";
        cout << endl;
    }
}
