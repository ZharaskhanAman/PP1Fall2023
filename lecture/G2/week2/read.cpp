#include <iostream>
using namespace std;

int main() {
    // This is the comment
    /* This 
        is
        multi 
        line
        comment
    */
    // variable declaration 
    int a;
    int b;
    int third_variable;

    // reading the input
    cin >> a;
    cin >> b >> third_variable;
    // EQ: cin >> a >> b >> third_variable;

    cout << a * b - third_variable << endl;
    return 0;
} 