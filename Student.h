#ifndef LAB5_STUDENT_H
#define LAB5_STUDENT_H

#include <string>
#include <map>
#include <iostream>
#include "Course.h"
#include "Department.h"
using namespace std;

struct Student {

    //member variables
    int sid; //student id
    string name;
    int age;
    department major;
    bool has_not_graduated;

    map<int, Course> completed_courses;

    //constructors
    Student(); //default constructor
    Student(string n, int a, department d, bool h = true);

    //function declarations
    void enroll_in_course(int cid);
    void receive_grade(int cid, int grade);
    double compute_gpa();
    void change_major(department new_major);

};

ostream & operator<<(ostream &, Student&);

#endif //LAB5_STUDENT_H
