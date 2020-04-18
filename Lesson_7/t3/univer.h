#ifndef UNIVER_H
#define UNIVER_H
#include "student.h"
#include <string>
#include "mentor.h"

using namespace std;


class Univer
{
public:
    void addMentor(string mName, string mSurname);
    void removeMentor(string mName, string mSurname);
    void addStudent (string mName, string mSurname);
    void removeStudent (string mName, string mSurname);
    void findStudent ();
    void showAllStudents();
    void showStudentsByFacultet(string facultet);
private:
    Mentor mentor[100];
};

#endif // UNIVER_H
