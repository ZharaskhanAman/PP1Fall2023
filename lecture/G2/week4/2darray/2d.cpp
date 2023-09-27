#include <iostream>
using namespace std;

int main() {
    int x[] = {1, 2, 3, 4, 5};

    int mult[3][5] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
    };

    int array3d[2][5][2] = {
        { {1, 1}, {2, 2}, {3, 4}, {4, 6}, {5, 10}},
        { {1, 1}, {2, 2}, {3, 4}, {4, 6}, {5, 10}},
    };

    string my_string_array[2][2] = {
        {"week1", "week2",},
        {"week3", "week4"},
    };


    return 0;
} 