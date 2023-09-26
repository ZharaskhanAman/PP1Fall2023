#include <iostream>
using namespace std;

int main() {
    int a[4][5] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
        {4, 8, 12, 16, 20},
    };
    string s[3][3] = {
        {"Adam", "John", "Smith"},
        {"Apple", "C++", "Pascal"},
        {"Erkin", "Amanzhol", "Aliya"},
    };

    int my_3d_array[2][2][2] = {
        { {1, 2}, {2, 3} },
        { {1, 2}, {2, 3} },
    };


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
} 