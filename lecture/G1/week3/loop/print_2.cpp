#include <iostream>
using namespace std;

int main( ) { 
    /*
    Read n and print numbers from 1 to n
    */
    int n;
    cin >> n;
    int i = 1;

    do {
        cout << i << " ";
        i = i + 1;
    } while (i <= n);

    return 0;
}
