#include <iostream>

using namespace std;

void zapis_v_massiv(int array[], int razmer){
    int count;
    for (count = 0; count < razmer; count++)
    {
        cout << "Vvedite " << count+1 << "-oe chislo: ";
        cin >> array[count];
    }
}

void umnozhenie_na_chislo(int array[],int razmer,int mnozhitel){
    int count;
    for (count = 0; count < razmer; count++)
        cout << count+1 << "-oe chislo posle umnozhenia: " << array[count]*mnozhitel << endl;
}

int main()
{
    int array[10], mnozhitel;
    zapis_v_massiv(array,10);
    cout << "Vvedite mnozhitel: ";
    cin >> mnozhitel;
    umnozhenie_na_chislo(array,10,mnozhitel);
}
