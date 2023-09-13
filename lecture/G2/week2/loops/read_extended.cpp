#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int i;
    i = 1;
    
    int result;
    result = 1;

    while (i <= n) {
        int x;
        cin >> x;

        result = result * x;

        i = i + 1;
    }

    cout << result << endl;;
    return 0;
} 