#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    while (true) {
        char c;
        cin >> c;
        
        // Exit
        if (c == 'E') {
            cout << "Goodbye!" << endl;
            break;
        } else if ('L' == c) {
            cout << "Move to the left" << endl;
        } else if (c == 'R') {
            cout << "Move to the right" << endl;
        } else {
            cout << "Invalid input :( " << endl;
        }
    }


    return 0;
} 