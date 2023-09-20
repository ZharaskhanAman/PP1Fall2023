#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        cout << "The character at position " << i << " is " << s[i] << endl;  
    }

    return 0;
} 