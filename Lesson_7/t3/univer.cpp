#include "univer.h"
#include "student.h"
#include <string>
#include "mentor.h"
#include <iostream>

using namespace std;


void Univer::addMentor(string mName, string mSurname)
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() == " ") {
            string subject, facultet;
            cout << "Enter mentor\'s subject: ";
            cin >> subject;
            cout << "Enter mentor\'s facultet: ";
            cin >> facultet;
            mentor[counter].setMentorName(mName);
            mentor[counter].setMentorSurname(mSurname);
            mentor[counter].setSubject(subject);
            mentor[counter].setFacultet(facultet);
            return;
        }
    }
}

void Univer::removeMentor(string mName, string mSurname)
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() == mName && mentor[counter].getMentorSurname() == mSurname) {
            mentor[counter].setMentorName(" ");
            mentor[counter].setMentorSurname(" ");
            mentor[counter].setSubject(" ");
            mentor[counter].setFacultet(" ");
            return;
        }
    }
}

void Univer::addStudent(string mName, string mSurname)
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() == mName && mentor[counter].getMentorSurname() == mSurname) {
            mentor[counter].addStudent();
            return;
        }
    }
}

void Univer::removeStudent(string mName, string mSurname)
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() == mName && mentor[counter].getMentorSurname() == mSurname) {
            mentor[counter].delStudent();
            return;
        }
    }
}

void Univer::findStudent()
{
    string name, surname;
    cout << "\nSearching student" << endl;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student surname: ";
    cin >> surname;
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() != " "  && mentor[counter].getMentorSurname() != " ") {
            for (int count_students = 0; count_students < 30; count_students++) {
                if (mentor[counter].students[count_students].getName() == name && mentor[counter].students[count_students].getSurname() == surname) {
                    cout << "Name: " << mentor[counter].students[count_students].getName() << endl;
                    cout << "Surname: " << mentor[counter].students[count_students].getSurname() << endl;
                    cout << "Age: " << mentor[counter].students[count_students].getAge() << endl;
                    cout << "Sex: " << mentor[counter].students[count_students].getSex() << endl;
                    cout << "Study form: " << mentor[counter].students[count_students].getStudyForm() << endl;
                    return;
                }
            }
        }
    }
}

void Univer::showAllStudents()
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getMentorName() != " ") {
            cout << "\nMentor : " << endl;
            cout << "Name: " << mentor[counter].getMentorName() << endl;
            cout << "Surname: " << mentor[counter].getMentorSurname() << endl;
            cout << "Subject: " << mentor[counter].getSubject() << endl;
            cout << "Facultet: " << mentor[counter].getFacultet() << endl;
            cout << endl << "Students: " << endl << endl;
            for (int count_students = 0; count_students < 30; count_students++) {
                if (mentor[counter].students[count_students].getName() != " ") {
                    cout << "Name: " << mentor[counter].students[count_students].getName() << endl;
                    cout << "Surname: " << mentor[counter].students[count_students].getSurname() << endl;
                    cout << "Age: " << mentor[counter].students[count_students].getAge() << endl;
                    cout << "Sex: " << mentor[counter].students[count_students].getSex() << endl;
                    cout << "Study form: " << mentor[counter].students[count_students].getStudyForm() << endl << endl;;
                }
            }
        }
    }
}

void Univer::showStudentsByFacultet(string facultet)
{
    for (int counter = 0; counter < 100; counter++) {
        if (mentor[counter].getFacultet() == facultet) {
            cout << "\nMentor : " << endl;
            cout << "Name: " << mentor[counter].getMentorName() << endl;
            cout << "Surname: " << mentor[counter].getMentorSurname() << endl;
            cout << "Subject: " << mentor[counter].getSubject() << endl;
            cout << "Facultet: " << mentor[counter].getFacultet() << endl;
            cout << endl << "Students: " << endl << endl;
            for (int count_students = 0; count_students < 30; count_students++) {
                if (mentor[counter].students[count_students].getName() != " ") {
                    cout << "Name: " << mentor[counter].students[count_students].getName() << endl;
                    cout << "Surname: " << mentor[counter].students[count_students].getSurname() << endl;
                    cout << "Age: " << mentor[counter].students[count_students].getAge() << endl;
                    cout << "Sex: " << mentor[counter].students[count_students].getSex() << endl;
                    cout << "Study form: " << mentor[counter].students[count_students].getStudyForm() << endl << endl;;
                }
            }
        }
    }
}
