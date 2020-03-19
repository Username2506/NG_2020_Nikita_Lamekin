#include <iostream>

using namespace std;

int main()
{
    char stroka[100]; int slova = 0, counter = 0;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[counter] != 0 and counter <= 100)
    {
        if (stroka[counter] == ' ')
            if ((stroka[counter-1] != ' ') and (stroka[counter-1] != 0))
                slova++;
        if ((stroka[counter] != ' ') and (stroka[counter+1] == 0))
            slova++;
        counter ++;
    }
    cout << "Slov v stroke: " << slova;
}
