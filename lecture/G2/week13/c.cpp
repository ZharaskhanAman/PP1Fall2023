#include <iostream>
#include "student.h"

using namespace std;

// g++ c.cpp student.cpp
int main() {


    Student student("Alice", 20, 3.8);


    cout << student.toString() << endl;
    return 0;
}