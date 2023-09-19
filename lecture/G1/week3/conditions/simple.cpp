#include <iostream>
using namespace std;

int main( ) { 
    int x;
    cin >> x;
    

    if (x > 0) {
        cout << "X is positive number:" << x << endl;

        if (x % 10 == 5) {
            cout << "The last digit is five" << endl;
        } else {
            cout << "The last digit is not five" << endl;
        }
    } 

    if (x < 0) {
        cout << "X is negative number:" << -x << endl;
    }

    

    return 0;
}
