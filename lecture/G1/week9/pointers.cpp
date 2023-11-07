#include <iostream>
#include <algorithm>

#include <vector>
using namespace std;

int main() {
    int a[] = {55, 22, 324, 123, 21321};
    
    int *ptr = a;

    cout << ptr << " " << *ptr << " " << *ptr + 1 << " " << *(ptr + 1) << endl;

    vector<int> v;

    vector<int> ::iterator v_ptr;
    return 0;
} 