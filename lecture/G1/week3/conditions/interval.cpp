#include <iostream>
using namespace std;

int main( ) { 
    int x;
    int l, r;
    cin >> x >> l >> r;

    // if x between l and r;  l <= x <= r 
    
    bool is_inside = false;

    /*
    if (l <= x) {
        if (x <= r) {
            is_inside = true;
        }
    }
    */

    /*
        Not correct
    if (l <= x <= r) {
        is_inside = true;
    }
    */

    
    // && is equals to and 
    if (l <= x && x <= r) {
        
        is_inside = true;
    }
    cout << "Is " << x << " between " << l << " and " <<r << "?" <<endl;

    // Note that you need to put double = sign for comparing

    if (is_inside == true) {
        cout << "YES :)" << endl;
    } else {
        cout << "NO :(" << endl; 
    }

    return 0;
}
