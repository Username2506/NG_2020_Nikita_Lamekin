#include <iostream>

using namespace std;

void umnozhenie_na_chislo(int array[],int razmer,int mnozhitel){
    int count;
    for (count = 0; count < razmer; count++)
    {
        cout << "Vvedite " << count+1 << "-oe chislo: ";
        cin >> array[count];
    }
    for (count = 0; count < razmer; count++)
        cout << count+1 << "-oe chislo posle umnozhenia: " << array[count]*mnozhitel << endl;
}

int main()
{
    int array[10];
    umnozhenie_na_chislo(array,10,5);
}
