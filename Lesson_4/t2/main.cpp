#include <iostream>

using namespace std;

int main()
{
    char stroka[100]; int counter=0, nachalo=0, konec=0, main_nachalo, main_konec;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[counter] != 0)
    {
        if ((stroka[counter] >= 'A' and stroka[counter]<= 'Z') or (stroka[counter] >= 'a' and stroka[counter] <= 'z'))
        {
            if (stroka[counter-1] < 'A' or (stroka[counter-1] > 'Z' and stroka[counter-1] < 'a') or stroka[counter-1] > 'z')
                nachalo = counter;
            if (stroka[counter+1] < 'A' or (stroka[counter+1] > 'Z' and stroka[counter+1] < 'a') or stroka[counter+1] > 'z')
                konec = counter;
        }
        if ((konec - nachalo) > (main_konec - main_nachalo))
        {
            main_nachalo = nachalo;
            main_konec = konec;
        }
        counter++;
    }
    cout << "Samoe dlinnoe slovo: ";
    for (counter=main_nachalo; counter <= main_konec; counter++)
        cout << stroka[counter];
}
