#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// TODO: accept floating numbers
string my_to_string(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}
struct Student {
    string name;
    int age;
    float gpa;
    
    // Constructor
    Student() {
    };

    Student(string _name, int _age, float _gpa) {
        name = _name;
        age = _age;
        gpa = _gpa;
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
    student.age = 19;
    student.gpa = 3.63;

    displayStudentInfo(student);

    Student student2("Alice", 20, 3.8);

    displayStudentInfo(student2);


    student.toString();
    return 0;
}