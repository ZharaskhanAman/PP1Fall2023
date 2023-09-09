#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // float
    double x;
    cin >> x;

    cout << "Absolute value of x is " << abs(x) << endl;

    double result;
    // = is the assignment sign
    result = sqrt (x);

    // https://cplusplus.com/reference/iomanip/setprecision/
    cout << result << endl;

    return 0;
}