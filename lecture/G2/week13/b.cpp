#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
    Name, age, gpa
*/

// Convert number to the string
string my_to_string(float number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

struct Student {
    string name;
    int age;
    float gpa;

    Student() {
    }

    Student(string _name, int _age, float _gpa) {
        name = _name;
        age = _age;
        gpa = _gpa;
    }

    Student(string _name, int _age) {
        name = _name;
        age = _age;
        gpa = 0;
    }

    float get_my_gpa() {
        return gpa;
    }

    float calc_something(int magic_number) {
        return gpa/age * 100.0 * magic_number;
    }

    string toString() {
        return "Name: " + name + ", Age: " + my_to_string(age) + ", GPA: " + my_to_string(gpa);
    }
};


void displayStudentInfo(Student student) {
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "GPA: " << student.gpa << endl;
    cout << endl;
}

int main() {
    Student student;
    student.name = "Adam";
    student.age = 18;
    student.gpa = 2.99;

    displayStudentInfo(student);

    Student student2("John", 17, 3.6);

    Student student3("Smith", 18);
    
    displayStudentInfo(student2);
    displayStudentInfo(student3);

    cout << student.get_my_gpa() << endl;
    cout << student.calc_something(42) << endl;
    cout << student2.calc_something(42) << endl;

    cout << student.toString() << endl;

    //queue <int> Q;
    //Q.front() --> student.toString();
    
    return 0;
}