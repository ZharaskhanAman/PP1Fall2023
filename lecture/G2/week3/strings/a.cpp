#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "What is your name and surname?" << endl;
    string name, surname;
    cin >> name >> surname;


    cout << "Hello, " << name << " " << surname << "!" << endl;

    cout << name + surname << endl;
    cout << "Your name has " << name.size() << " words! " << endl; 
    
    return 0;
} 