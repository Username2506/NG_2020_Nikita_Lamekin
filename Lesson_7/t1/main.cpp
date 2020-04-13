#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    Student *Vasya = new Student;
    Vasya -> setName();
    string name = Vasya -> getName();
    cout << endl << "Yor name: " << name << endl;
}
