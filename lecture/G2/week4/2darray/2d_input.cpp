#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    /*
        3 5
        10 20 30 40 50
        5   7  2  4 5
        44 23  3 -1 2
    */

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }



    return 0;
} 