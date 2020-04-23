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
    age = ' ';
}

string Student::getName()
{
    return name;
}

void Student::setName(string sname)
{
    name = sname;
}

string Student::getSurname()
{
    return surname;
}

void Student::setSurname(string sSurname)
{
    surname = sSurname;
}

string Student::getAge()
{
    return age;
}

void Student::setAge(string sAge)
{
    age = sAge;
}

string Student::getSex()
{
    return sex;
}

void Student::setSex(string sSex)
{
    sex = sSex;
}

string Student::getStudyForm()
{
    return studyForm;
}

void Student::setStudyForm(string sStudyForm)
{
    studyForm = sStudyForm;
}

void Student::findStudent(string name, string surname)
{
    if (name == getName() && surname == getSurname()) {
        showStudent();
    }
}

void Student::showStudent()
{
    if (getName() != " ") {
        cout << "\nName: " << getName() << endl;
        cout << "Surname: " << getSurname() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Sex: " << getSex() << endl;
        cout << "Study form: " << getStudyForm() << endl;
    }
}
