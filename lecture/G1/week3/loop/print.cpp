#include <iostream>
using namespace std;

int main( ) { 
    
    cout << "1 2 3 4 5" << endl;
    cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
    
    /*
    Read n and print numbers from 1 to minimum of n and 10 
    */
    int i = 1;
    int n;
    cin >> n;

    while (i <= n && i <= 10) {
        cout << i << " ";
        i = i + 1;
        // code
    } 
    return 0;
}
