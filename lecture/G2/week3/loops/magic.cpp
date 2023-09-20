#include <iostream>
using namespace std;

int main() {
    // (i <= 10) or (i % 10 == 1)
    for (int i = 1; (i <= 10) || (i % 10 == 1); i += 2) {
        cout << i << ' ';
    }
    cout << endl;

     // (i <= 10) and (i % 10 == 1)
    for (int i = 1; (i <= 10) && (i % 10 == 1); i += 2) {
        cout << i << ' ';
    }
    cout << endl;
     // (i <= 10) or (i % 10 == 1)
    for (int i = 1; (i <= 10) || (i % 10 == 1); i += 2) {
        cout << i << ' ';
    }
    cout << endl;

    cout << "--------------------------" << endl;
    for (int i = 10; i >= 10; i += 1000000) {
        
    //    cout << i << endl;
    }

    cout << "--------------------------" << endl;

    for (int i = 1; i <= 10; i++) {

        if (i == 4) {
            cout << "This line was skipped!\n";
            continue;
        }

        for (int j = 1; j <= i; j++) {
            cout << j << " ";

            if (j == 5) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
} 