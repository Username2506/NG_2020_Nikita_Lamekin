#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;


class Student {
public:
    Student();
    string getName();
    void setName(string sName);
    string getSurname();
    void setSurname(string sSurname);
    string getAge();
    void setAge(string sAge);
    string getSex();
    void setSex(string sSex);
    string getStudyForm();
    void setStudyForm(string sStudyForm);
    void findStudent(string name, string surname);
    void showStudent();
private:
    string name;
    string surname;
    string age;
    string sex;
    string studyForm;
};

#endif // STUDENT_H
