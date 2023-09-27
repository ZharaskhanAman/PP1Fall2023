#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 0 --- 2^16 - 1
            a[i][j] = rand() % 20;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        int mx = a[i][0];
        for (int j = 0; j < m; j++) {
            if (a[i][j] > mx) {
                mx = a[i][j];
            }
        }
        cout << "Maximum number at row " << i << " is " << mx << endl; 
    }


    int global_sum = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
        
            sum += a[i][j];
            // sum = sum + a[i][j];

        }
        global_sum += sum;

        cout << "The sum of numbers at row " << i << " is " << sum << endl; 
    }

    cout << "The sum of all elements is " << global_sum << endl;
    return 0;
} 