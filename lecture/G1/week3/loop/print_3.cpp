#include <iostream>
using namespace std;

int main( ) { 
    /*
    Read n and print numbers from n to 1
    */
    int n;
    cin >> n;
    
    // for (initialization; statement; step)

    /*
        i-- is same as writing i = i - 1
        x++ is same as writing x = x + 1
    */
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    return 0;
}
