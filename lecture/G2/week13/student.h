#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
    
    Student(string _name, int _age);
    Student(string _name, int _age, float _gpa);

    // Returns human readable string representation of the Student struct
    string toString();
};