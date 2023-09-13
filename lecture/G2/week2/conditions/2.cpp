#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x % 3 == 0) {
        cout << "X is divisble by 3" << endl;
    } else if (x % 2 == 0) {
        cout << "X is divisble by 2 but not by 3" << endl;
    } else {
        cout << "I don't know :( ";
    }
    return 0;
} 