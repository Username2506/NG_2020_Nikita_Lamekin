#include <iostream>

using namespace std;

int main()
{
    int count_symbols_main, count_stars_main, counter_columns, user_number, count_symbols, count_stars;
    cout << "Vvedite chislo: ";
    cin >> user_number;
    count_symbols_main = 1;
    count_stars_main = 1;
    counter_columns=1;
    while(counter_columns <= user_number)
    {
        for (count_symbols = count_symbols_main; count_symbols < user_number; count_symbols++)
            cout << " ";
        for (count_stars = count_stars_main; count_stars <= 1;count_stars++)
            cout << "*";
        cout << endl;
        count_symbols_main = count_symbols_main + 1;
        count_stars_main = count_stars_main - 2;
        counter_columns = counter_columns + 1;
        if (counter_columns > user_number)
        {
            for (count_symbols = 1; count_symbols < user_number; count_symbols++)
            cout << " ";
            for (count_stars = 1; count_stars <= 1;count_stars++)
            cout << "*";
        }

    }
}
