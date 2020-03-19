#include <iostream>

using namespace std;

int main()
{
    char stroka[100], lowletters[] = "qwertyuiopasdfghjklzxcvbnm", bigletters[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int count_stroka = 0, count_letters;
    cout << "Vvedite stroku: ";
    cin.getline(stroka,100);
    while (stroka[count_stroka] != 0)
    {
        count_letters = 0;
        while (lowletters[count_letters] != 0)
        {
            if (stroka[count_stroka] == lowletters[count_letters])
                stroka[count_stroka] = bigletters[count_letters];
            count_letters++;
        }
        count_stroka++;
    }
    cout << stroka;
}
