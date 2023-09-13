#include <iostream>
using namespace std;

int main() {
    cout << "1 2 3 4 5" << endl;
    cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
    
    // while (condition) {statement}
    int i;

    i = 1;
    while (i <= 5) {
        cout << i << " ";
        i = i + 1;
    }
    return 0;
} 