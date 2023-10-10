#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {    
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        
        int digit_sum = 0;
        while (x > 0) {
            // 12324
            digit_sum += x % 10;
            x /= 10;
            // x = 1232
        }
        sum += x; 
    }
    int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        string number;
        cin >> number;
        int digit_sum = 0;
        for (int j = 0; j < number.size(); j++) {
            digit_sum += number[j] - '0';
        }
        sum2 += digit_sum;
    }
    cout << sum << " " << sum2 << endl;
    return 0;
} 