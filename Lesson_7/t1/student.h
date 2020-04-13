#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;


class Student {
public:
    Student();
    string getName();
    void setName();
    string getSurname();
    void setSurname();
    int getAge();
    void setAge();
    string getSex();
    void setSex();
    string getStudyForm();
    void setStudyForm();
private:
    string name;
    string surname;
    int age;
    string sex;
    string studyForm;
};

#endif // STUDENT_H
