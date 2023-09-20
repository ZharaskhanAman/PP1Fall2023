#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

 
    
    int result;
    result = 1;

    // for (init; condition; step)
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        //result = result * x;
        result *= x; 
    }

    return 0;
} 