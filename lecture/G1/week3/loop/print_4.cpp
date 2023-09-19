#include <iostream>
using namespace std;

int main( ) { 
    /*
    Read n and x
    Print numbers from 1 to n until their sum is not divisible by x
    */
    int n, x;
    cin >> n >> x;
    
    /*
        10  21

        1 2 3 4 5 6 
    
        1 3 6 10 15 21
    */
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;


        cout << i << ' ';

        if (sum % x == 0) {
            break;
        }
    }
    

    return 0;
}
