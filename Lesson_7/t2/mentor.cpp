#include "mentor.h"
#include "student.h"
#include <string>
#include <iostream>

using namespace std;

Mentor::Mentor()
{
    setMentorName(" ");
    setMentorSurname(" ");
    setSubject(" ");
    setFacultet(" ");
}

void Mentor::addStudent()
{
    Student newStudent;
    string name, surname, age, sex, studyForm;

    cout << "\nAdding student" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
    cout << "Enter study form: ";
    cin >> studyForm;

    newStudent.setName(name);
    newStudent.setSurname(surname);
    newStudent.setAge(age);
    newStudent.setSex(sex);
    newStudent.setStudyForm(studyForm);

    addStudent(newStudent);
}

void Mentor::addStudent(Student student)
{
    for (int counter = 0; counter < 30; counter++) {
        if (students[counter].getName() == " ") {
            students[counter] = student;
            return;
        }
    }
}

void Mentor::delStudent()
{
    Student newStudent;
    string name, surname, age, sex, studyForm;

    cout << "\nWhich student you want to delete" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
    cout << "Enter study form: ";
    cin >> studyForm;

    newStudent.setName(name);
    newStudent.setSurname(surname);
    newStudent.setAge(age);
    newStudent.setSex(sex);
    newStudent.setStudyForm(studyForm);

    delStudent(newStudent);
}

void Mentor::delStudent(Student student)
{
    for (int counter = 0; counter < 30; counter++) {
        if (students[counter].getName() == student.getName()
                && students[counter].getSurname() == student.getSurname()
                && students[counter].getAge() == student.getAge()
                && students[counter].getSex() == student.getSex()
                && students[counter].getStudyForm() == student.getStudyForm() ) {
            students[counter].setName(" ") ;
            students[counter].setSurname(" ");
            students[counter].setSex(" ");
            students[counter].setStudyForm(" ");
            students[counter].setAge(" ");
            return;
        }
}
}

void Mentor::findStudent(string name, string surname)
{
    for (int counter = 0; counter < 30; counter++) {
        students[counter].findStudent(name, surname);
    }
}

void Mentor::showStudents()
{
    for (int counter = 0; counter < 30; counter++) {
        students[counter].showStudent();
    }
}

string Mentor::getMentorName()
{
    return name;
}

void Mentor::setMentorName(string mName)
{
    name = mName;
}

string Mentor::getMentorSurname()
{
    return surname;
}

void Mentor::setMentorSurname(string mSurname)
{
    surname = mSurname;
}

string Mentor::getSubject()
{
    return subject;
}

void Mentor::setSubject(string mSubject)
{
    subject = mSubject;
}

string Mentor::getFacultet()
{
    return facultet;
}

void Mentor::setFacultet(string mFacultet)
{
    facultet = mFacultet;
}
