#include <iostream>
using namespace std;

int main( ) { 
    int x;
    cin >> x;
    /*
    if (x > 0) {
        cout << "X is positive" << endl;
    } else {
        if (x < 0) {
            cout << "X is negative" << endl;
        } else {
            cout << "X is zero" << endl;
        }
    }
    */

    if (x > 0) 
        cout << "X is positive" << endl;
    else if (x < 0) 
        cout << "X is negative" << endl;
    else 
        cout << "X is zero" << endl;
    
    
    

    return 0;
}
