#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {55, 22, 324, 123, 21321};
    
    int *ptr = a;

    cout << *ptr << " " << *ptr + 1 << " " << *(ptr + 1)endl;

    return 0;
} 