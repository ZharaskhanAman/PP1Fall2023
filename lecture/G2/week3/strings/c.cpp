#include <iostream>
#include <string>
using namespace std;

int main() {
   
    while (true) {
        char c;
        cin >> c;

        if (c == 'E') {
            cout << "Goodbye!" << endl;
            break;
        } else if (c == 'L') {
            cout << "Moving to the left" << endl;
        } else if (c == 'R') {
            cout << "Moving to the right" << endl;
        } else {
            cout << "Invalid input :( " << endl;
        }
    }

    return 0;
} 