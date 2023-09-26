#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    // input: kazakhstan_2030
    // output: KAZAKHSTAN_2030

    cout << "ASCII code of char k is " << int('k')  << endl;

    for (int i = 0; i < s.size(); i++) {

        if ('a' <= s[i] && s[i] <= 'z') {
            cout << char(s[i] - 31); 
        } else {
            cout << s[i];
        }
    }

    cout << endl;

    for (int i = 0; i < s.size(); i++) {
        cout << char(toupper(s[i]));
    }

    cout << endl;

    for (int i = 0; i < s.size(); i++) {
        cout << char(tolower(s[i]));
    }



    return 0;
} 