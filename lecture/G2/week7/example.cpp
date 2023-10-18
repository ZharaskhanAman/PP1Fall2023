#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
/*
    n = 3
        n = 2
            n = 1
                n = 0
            -> 1
        -> 2
    -> 3
 
 
*/
 
void printForward(int n) {
    if (n == 0) {
        return;
    }
    printForward(n - 1);
    cout << n << " ";
}
 
/*
    n = 3
    -> 3
        n = 2
        -> 2
            n = 1
            -> 1
                n = 0
 
*/
void printBackward(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printBackward(n - 1);
}
// n! = 1 * 2 * 3 ... * n
// 5 * (4 * (3 * (2 * (1)))) = 120
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
 
/*
n = 5, res = 1
n = 4, res = 5
n = 3, res = 5 * 4 = 20
n = 2, res = 60
n = 1, res = 120
*/
int factorial_extended(int n, int res) {
    if (n <= 1) return res * 1;
    return factorial_extended(n - 1, res * n);
}
 
// x^y = 2^10 = 1024 
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
    // 2^10 = 2 * (2 * 2^8)
}
 
// 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fib(1) = 1
// fib(2) = 1
// fib(n) = fib(n - 1) + fib(n - 2)
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int findMin(int a[], int n) {
    if (n == 1) return a[0];
    return min(a[n - 1], findMin(a, n - 1));
}
 
int findMax(int a[], int n) {
    if (n == 1) return a[0];
    return max(a[n - 1], findMax(a, n - 1));
}
 
void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);
    cout << n % 2;
}
 
void complex_function(int x, int y, int z) {
    if (x <= 2) {
        return complex_function(x  + 10, y / 2, z * 10);
    }   else {
        return complex_function(x  - 10, y % 2, z / 55);    
    } 
}
int main() {
    printForward(10);
    cout << endl;
    printBackward(10);
    cout << endl;
 
    cout << factorial(5) << " " << factorial_extended(5, 1) << endl;
 
    cout << power(2, 10) << endl;    
 
    cout << fibonacci(6) << endl;
 
    int a[] = {1, 5, -1, 10, 44};
    cout << findMin(a, 5) << ' ' << findMax(a, 5) << endl;
 
    printBinary(10);
    // 1010
    // 8421
    // 8 + 2 = 10;
    return 0;
}