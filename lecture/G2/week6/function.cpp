#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// f(x) -> x
// f(x, t) -> g(x) * t
// f(x) -> x * x (x^2, the square of a number) 
// square(x) -> x * x


// return_type function_name(arguments)
// arguments = [type variable_name, ..]
// declaration
int square(int x);

int add(int x, int y) {
    return x + y;
}

bool is_seven(char c) {
    if (c == '7') {
        return true;
    }

    return false;
}


void printHello(string name) {
    cout << "Hello " << name << endl;
}

// f(x) -> g(x) -> f(x)

// declare
void f(int x);

void g(int x) {
    f(x);
}

//implement
void f(int x) {
    g(x);
}



//global variable
int arr[] = {1, 100, 300, 7, 5};

void printArray() {
    // local variable
    int arr[] = {1, 1, 1, 1, 1}; 
    cout << "Printing the array:";
    for (int i = 0; i < 5; i++) {
        //prints local arr
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < 5; i++) {
        //prints global arr
        cout << ::arr[i] << " ";
    }
    cout << endl;
}
// 5
// factorial(5) => 5 * factorial(4) --> 5 * 24 = 120
// factorial(4) => 4 * factorial(3) --> 4 * 6 = 24
// factorial(3) => 3 * factorial(2) --> 3 * 2 = 6
// factorial(2) => 2 * factorial(1) --> 2 * 1 = 2
// factorial(1) => 1
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {

    printHello("KBTU");
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " " << square(arr[i]) << endl;
    }

    printArray();

    cout << "50 + 120 = " << add(50, 120) << endl;
    
    sort(arr, arr + 5);
    reverse(arr, arr + 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    char lowercaseChar = 'a';
    char uppercaseChar = toupper(lowercaseChar);

    cout << lowercaseChar << " " << uppercaseChar << endl;
    
    char character = '7';
    cout << is_seven(character) << " " <<  isalpha(character) << ' ' << isdigit(character) << ' ' << isalnum(character) << ' ' << ispunct(character) << endl;  
    

    double squareRoot = sqrt(16.0);
    int maximum = max(156, max(154, 454));
    
    int minimum = min(156, min(154, 454));
    double powerResult = pow(2.0, 5);

    // factorial(n) => 1 * 2 * 3 * ... (n - 1) * n
    // n!
    // 0! = 1
    // 1! = 1
    // 2! = 2
    // 3! = 6
    // 4! = 24
    // 5! = 120
    //  0!=1

    int res = 1;
    int n = 5;
    for (int i = 1; i <= 5; i++) {
        res *= i;
    }
    cout << n << " factorial is " << res << endl;

    cout << n << " _factorial is " << factorial(n) << endl;
    return 0;
}

// implementation
int square(int x) {
    return x * x;
}