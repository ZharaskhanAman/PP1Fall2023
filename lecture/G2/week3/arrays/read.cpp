#include <iostream>
using namespace std;

int main() {
    /*
        Read n
        Read n numbers
        Print them in reverse order

        5
        10 -5 9 8 55

        55 8 9 -5 10
    
    */
    int n;
    cin >> n;

    int x[n];
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << "The element at position " << i << " is " << x[i] << endl;
    }

    return 0;
} 