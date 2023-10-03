#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {55, 22, 324, 123, 21321};

    reverse(a, a + 5);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
} 