#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
using namespace std;


string my_to_string(float number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

// Struct name::Method name (Constructor)
Student::Student(string _name, int _age, float _gpa) {
    name = _name;
    age = _age;
    gpa = _gpa;
}
Student::Student(string _name, int _age) {
    name = _name;
    age = _age;
    gpa = 0;
}

string Student::toString() {
    return "Name: " + name + ", Age: " + my_to_string(age) + ", GPA: " + my_to_string(gpa);
} 
