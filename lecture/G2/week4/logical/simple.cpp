#include <iostream>
using namespace std;

int main() {
    int x = 6; // 110
    int y = 5; // 101

    cout << x + y << endl;
    cout << x - y << endl;

    cout << x / y << endl;
    cout << x * y << endl;

    cout << x % y << endl;
    
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (!x) << endl;
    cout << (x ^ y) << endl;

    /*
     0 & 0 = 0
     0 & 1 = 0
     1 & 0 = 0
     1 & 1 = 1

     0 | 0 = 0
     0 | 1 = 1
     1 | 0 = 1
     1 | 1 = 1

    ! 
    !0  = 1
    !1  = 0

    xor ^

     0 ^ 0 = 0
     0 ^ 1 = 1
     1 ^ 0 = 1
     1 ^ 1 = 0

     &  110
        101
        ---
        100 (4)

    |   110
        101
        ---
        111 (7) 

    ^   110
        101
        ---
        011 (3) 
    */
    return 0;
} 