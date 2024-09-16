#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int rollNo;
    std::string name;

public:
    Student() = default;
    Student(int rollNo, std::string name);

    int getRollNo() const;
    std::string getName() const;

    void display() const;
};

#endif
