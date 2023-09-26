#include <iostream>
#include <random>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 20;
        }
    }

    for (int i = 0; i < n; i++) {
        int mx = a[i][0];

        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";

            if (a[i][j] > mx) {
                mx = a[i][j];
            }
        }
        cout << ": max number in row #" << i << " is " << mx << endl; 
    }

    for (int j = 0; j < m; j++) {
        int mx = a[0][j];

        for (int i = 0; i < n; i++) {
            if (mx < a[i][j]) {
                mx = a[i][j];
            }
        }
        cout << "Max number in column " << j << " is " << mx << endl;
    }


    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }
        cout << ": sum in row #" << i << " is " << sum << endl; 
    }
    return 0;
} 