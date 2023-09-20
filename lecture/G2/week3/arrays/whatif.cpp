#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int my_array[n];

    for (int i = n - 1; i >= 0; i--) {
        cout << "The element at position " << i << " is " << my_array[i] << endl;
    }

    return 0;
} 