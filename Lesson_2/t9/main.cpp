#include <iostream>

using namespace std;

int main()
{
    int counter_columns, user_number, count_symbols;
    cout << "Vvedite chislo: ";
    cin >> user_number;
    for(counter_columns = 1; counter_columns <= user_number; counter_columns++)
    {
        for (count_symbols = 0; count_symbols < user_number - counter_columns; count_symbols++)
            cout << " ";
        for (count_symbols = 0; count_symbols < counter_columns * 2 - 1; count_symbols++)
            cout << "*";
        cout << endl;
    }
    for (count_symbols = 1; count_symbols < user_number; count_symbols++)
        cout << " ";
    for (count_symbols = 0; count_symbols < 1; count_symbols++)
        cout << "*";
}
