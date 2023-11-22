#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
using namespace std;

// TODO: accept floating numbers
string my_to_string(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

// Struct name::Method name
Student::Student(string _name, int _age, float _gpa) {
    name = _name;
    age = _age;
    gpa = _gpa;
}

string Student::toString() {
    return "Name: " + name + ", Age: " + my_to_string(age) + ", GPA: " + my_to_string(gpa);
} 

