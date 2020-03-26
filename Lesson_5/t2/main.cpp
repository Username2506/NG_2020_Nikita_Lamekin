#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int kubik(int grani, int kolichestvo){
    srand(time(0));
    int count; int ochki=0;
    for (count = 0; count < kolichestvo; count++)
        ochki = ochki+(rand()%grani+1);
    return ochki;
}
int main()
{
    int grani, kolichestvo;
    cout << "Vvedite kolichestvo kubikov: ";
    cin >> kolichestvo;
    cout << "Vvedite kolichestvo graney: " << endl;
    cin>> grani;
    cout << "Kolichestvo ochkov: " << kubik(grani,kolichestvo);
}
