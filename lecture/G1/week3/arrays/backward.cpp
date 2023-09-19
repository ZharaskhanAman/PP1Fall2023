#include <iostream>
using namespace std;

int main( ) { 
    /*
     Read n and read n numbers then print them in backward way
    5
    10 -5 9 0 -3
    
    -3 0 9 -5 10
    */
    int n;
    cin >> n;
    
    // Creates integer array of size n
    int my_array[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Reading integer and storing it at position " << i << endl;
        cin >> my_array[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
