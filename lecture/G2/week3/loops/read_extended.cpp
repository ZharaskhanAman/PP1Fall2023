#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int i;
    i = 1;
    
    int result;
    result = 1;


    do {
        int x;
        cin >> x;

        result = result * x;

        i++;
    } while (i <= n);

    cout << result << endl;
    return 0;
} 