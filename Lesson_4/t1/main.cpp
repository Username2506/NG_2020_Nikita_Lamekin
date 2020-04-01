#include <iostream>

using namespace std;

int main()
{
    char stroka[100]; int slova = 0, counter = 0;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[counter+1] != 0)
    {
        if ((stroka[counter] >= 'A' and stroka[counter] <= 'Z') or (stroka[counter] >= 'a' and stroka[counter] <= 'z'))
            if (stroka[counter+1] < 'A' or (stroka[counter+1] > 'Z' and stroka[counter+1] < 'a') or stroka[counter+1] > 'z')
                slova++;
        counter ++;
    }
    cout << "Slov v stroke: " << slova;
}
