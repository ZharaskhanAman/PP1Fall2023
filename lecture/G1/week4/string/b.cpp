#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        cout << "Character at position " << i << " is " << s[i] << endl;
    }
    cout << "The first character is " << s[0] << endl; 

    cout << "The last character is " << s[s.size() - 1] << endl; 

    return 0;
} 