#include <iostream>

using namespace std;

int main()
{
    int user_number,counter_columns,count_symbols,count_stars,count_symbols_main,count_stars_main;
    cout << "Vvedite chislo: ";
    cin >> user_number;
    cout << "a)" << endl;
    for (counter_columns = 1; counter_columns <= user_number; counter_columns++)
    {
        for (count_symbols = 1; count_symbols <= counter_columns; count_symbols++)
            cout << "a";
        cout << endl;
    }
    cout << "b)" << endl;
    for (counter_columns = 1; counter_columns <= user_number; counter_columns++)
    {
        for (count_symbols = user_number; count_symbols >= counter_columns; count_symbols--)
            cout << "a";
        cout << endl;
    }
    cout << "c)" << endl;
    count_symbols_main = 1;
    count_stars_main = 1;
    for (counter_columns=1;counter_columns<=user_number;counter_columns++)
    {
        for (count_symbols = count_symbols_main; count_symbols < user_number; count_symbols++)
            cout << " ";
        for (count_stars = count_stars_main; count_stars <= 1;count_stars++)
            cout << "*";
        cout << endl;
        count_symbols_main ++;
        count_stars_main -=2;
    }
}
