#include <iostream>
using namespace std;

int main() {
    int x, y;
    /*
    int y;
    int x;
    */

    cin >> x >> y;
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;
    cout << "The multiplication of x and y is " << x * y << endl;
    cout << "The math operations with x and y " << x + y + 1 << " " << x / y << " " << y - x << endl;
    // % is the modulo operation
    cout << "The modulo of x by y is " << x % y << endl;
    cout << "The last digit of x is " << x % 10 << endl; 
    cout << "The last bit of x is " << x % 2 << endl;


    return 0;
}