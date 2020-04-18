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
