#include <iostream>

using namespace std;

int main()
{
    char stroka[100]; int counter=0, nachalo=0, konec=0, main_nachalo, main_konec;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[counter] != 0)
    {
        if ((stroka[counter] > 64 and stroka[counter]< 91) or (stroka[counter] > 96 and stroka[counter]<123))
        {
            if (stroka[counter-1] < 65 or (stroka[counter-1] > 90 and stroka[counter-1] < 97) or stroka[counter-1] > 122)
                nachalo = counter;
            if (stroka[counter+1] < 65 or (stroka[counter+1] > 90 and stroka[counter+1] < 97) or stroka[counter+1] > 122)
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
