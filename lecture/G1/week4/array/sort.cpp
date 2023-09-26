#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     /*
        Sort the given array of size n

        Input: 
        5
        5 10 -3 6 7
        
        Output: -3, 5, 6, 7, 10
    
    */

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j + 1 < n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    

    
    //sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }


    return 0;
} 