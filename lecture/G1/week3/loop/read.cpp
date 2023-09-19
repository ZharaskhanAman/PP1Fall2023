#include <iostream>
using namespace std;

int main( ) { 

    /*
    Read n and calculate the sum of given n numbers
    5
    10 -5 13 8 9
    
    =35
    */

    int n;
    cin >> n;
    int i = 1;
    int sum = 0;

    while (i <= n) {
        int x;
        cin >> x;
        //sum = sum + x;
        sum += x;

        i = i + 1;
    } 

    cout << sum << endl;
    /*
    5
    10 -5 13 8 9
    
    35
    */
    return 0;
}
