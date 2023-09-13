#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    /*
        if x is less than 0 then print -x
        else print x
    */

    if (x < 0) {
        
        if (x % 2 == 0) {
            cout << "This number is even" << endl;
        } else {
            cout << "This number is odd" << endl;
        }

        cout << "x < 0: " << -x << endl;



    }
    if (x > 0) {
        cout << "x > 0: " << x << endl;
    }

    return 0;
} 