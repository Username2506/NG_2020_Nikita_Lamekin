#include "student.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student()
{
    name = ' ';
    surname = ' ';
    sex = ' ';
    studyForm = ' ';
    age = 0;
}

string Student::getName()
{
    return name;
}

void Student::setName()
{
    cout << "Name: ";
    getline(cin, name);
}

string Student::getSurname()
{
    return surname;
}

void Student::setSurname()
{
    cout << "Surname: ";
    getline(cin, surname);
}

int Student::getAge()
{
    return age;
}

void Student::setAge()
{
    cout << "Age: ";
    cin >> age;
}

string Student::getSex()
{
    return sex;
}

void Student::setSex()
{
    cout << "Sex: ";
    getline(cin, sex);
}

string Student::getStudyForm()
{
    return studyForm;
}

void Student::setStudyForm()
{
    cout << "Study Form: ";
    getline(cin,  studyForm);
}
