#include <sstream>
#include <string>
#include <iostream>

using namespace std;
int main() {
    string data = "3.14 42 John Doe";
    istringstream custom_cin(data);
    
    float pi;
    int num;
    string firstName, lastName;

    custom_cin >> pi >> num >> firstName >> lastName;

    cout << pi << " " << num << " " << firstName << " " << lastName << endl;

    istringstream custom_cin2("John");
    string my_name;
    custom_cin2 >> my_name;

    cout << my_name << endl;
    return 0;
}
