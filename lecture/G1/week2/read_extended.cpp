#include <iostream>
using namespace std;

int main( ) { 
    int x;
    int y;
    int third_variable;
    cin >> x;
    cin >> y;
    cin >> third_variable;

    cout << x * y  << endl;

    int the_last_digit = third_variable % 10;
    
    cout << the_last_digit << endl;
    return 0;
}
