#include <iostream>
using namespace std;

int main( ) { 
    int n;
    cin >> n;
    
    int my_array[n];


    for (int i = 0; i < n; i++) {
        cout << "The value of element at position " << i << " = " <<  my_array[i] << endl;
    }
    return 0;
}
