#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, surname;
    cin >> name;
    cin >> surname;

    cout << "Your full name is " << name << " " << surname <<  endl;
    
    cout << name + "$" + surname << endl;

    cout << "Your name has " << name.size() << " words! " << endl; 
    

    return 0;
} 