#include "univer.h"
#include "student.h"
#include <string>
#include "mentor.h"
#include <iostream>

using namespace std;

int main()
{
    Univer cntu;
    string mName, mSurname;
    cout <<"Enter mentor name: ";
    cin >> mName;
    cout <<"Enter mentor surname: ";
    cin >> mSurname;
    cntu.addMentor(mName, mSurname);
    cntu.addStudent(mName, mSurname);
    cntu.addStudent(mName, mSurname);
    cntu.addStudent(mName, mSurname);
    cntu.findStudent();
    cntu.showAllStudents();
    string facultet;
    cout << "\nEnter facultet: ";
    cin >> facultet;
    cntu.showStudentsByFacultet(facultet);
    cntu.removeStudent (mName, mSurname);
    cntu.showAllStudents();
}
