#include <iostream>

using namespace std;

int main()
{
    char stroka[100]; int slova = 0, counter = 0;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[counter] != 0 and counter <= 100)
    {
        if ((stroka[counter] > 64 and stroka[counter] < 91) or (stroka[counter] > 96 and stroka[counter] < 123))
            if (stroka[counter+1] < 65 or (stroka[counter+1] >90 and stroka[counter+1] < 97) or stroka[counter+1] > 122)
                slova++;
        counter ++;
    }
    cout << "Slov v stroke: " << slova;
}
