#ifndef MENTOR_H
#define MENTOR_H
#include "student.h"
#include <string>

using namespace std;


class Mentor
{
public:
    Mentor();
    Student students[30];
    void addStudent();
    void addStudent(Student student);
    void delStudent();
    void delStudent(Student student);
    void findStudent();
    string getMentorName();
    void setMentorName(string mName);
    string getMentorSurname();
    void setMentorSurname(string mSurnmae);
    string getSubject();
    void setSubject(string Subject);
    string getFacultet();
    void setFacultet(string Facultet);
private:
    string name;
    string surname;
    string subject;
    string facultet;
};

#endif // MENTOR_H
