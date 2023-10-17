#include <iostream>
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

void countTo(int n) {
    if (n <= 0) return;
    countTo(n - 1);
    cout << n << " ";
}

void printForward(int n) {
    if (n == 0) return;
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

void printReverse(int n) {
    if (n == 0) return;
    cout << n << " ";
    printReverse(n - 1);
}


// n! = 1 * 2 * 3 * .... (n - 1) * n
//5 * (4 * (3 * (2 * 1))) = 120
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int factorial_modified(int n, int value) {
    if (n <= 1) {
        return value;
    }
    return factorial_modified(n - 1, value * n);
}

// x^y = 2^10 = 1024
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
    // 2^10 --> 2 * (2 * (2 * 2^7...))
}


// 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fib(0) = 1
// fib(1) = 1
// fib(n) = fib(n - 1) + fib(n - 2)
int fibonacci(int n) {
    if (n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int findMin(int arr[], int n) {
    if (n == 1) return arr[0];
    return min(arr[n - 1], findMin(arr, n - 1));
}

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);
    cout << n % 2;
}

int main() {
    printForward(10);
    cout << endl;
    printReverse(10);
    cout << endl;
    cout << factorial(5) << " " << factorial_modified(5, 1) << endl;
    cout << power(2, 10) << endl;
    cout << fibonacci(6) << endl;

    int a[] = {1, 5, -1, 10, 44};
    cout << findMin(a, 5) << ' ' << findMax(a, 5) << endl;
    
    printBinary(10);

    // 1010
    // 8421
    // 8+2 = 10
    return 0;
}