#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


//return_type function_name (arguments)
// arguments = [type variable_name, ...]

int square(int x);


void printHello(string name) {
    cout << "Hello " << name << "!" << endl;
}

bool is_seven(char c) {
    if (c == '7') {
        return true;
    }

    return false;
}

int global_var = 0;

int numbers[] = {5, 2, 8, 1, 9};

int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    // (condition) ? a : b
    // return (a > b) ? a : b;
}

// 5
// factorial(5) => 5 * factorial(4) ||| 5 * 24 = 120
// factorial(4) => 4 * factorial(3) ||| 4 * 6 = 24 
// factorial(3) => 3 * factorial(2) ||| 3 * 2 = 6
// factorial(2) => 2 * factorial(1) |||  2 * 1 = 2
// factorial(1) = 1;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return factorial(n - 1) * n;
}


void dream_level(int n) {

    cout << n << ": Entering dream level " << n << endl;
    if (n <= 5) {
        cout << n << ": Calling dream level " << n + 1 << endl;
        dream_level(n + 1);
        cout << n << ": Returned from dream level " << n + 1 << endl;;
    }
    cout << n << ": Quitting dream level " << n << endl;

}

void print() {
    //local variable
    int numbers[] = {1, 1, 1, 1, 1};

    for (int i = 0; i < 5; i++) {
        //prints local
        cout << numbers[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        //prints global
        cout << ::numbers[i] << " ";
    }

    cout <<endl;
}

int add(int x, int y) {
    return x + y;
}
int main() {    

    cout << "50 + 120 = " << add(50, 120) << endl;

    print();

    printHello("C++");

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " " << square(numbers[i]) << endl;
    }

    char lowercaseChar = 'a';
    char uppercaseChar = toupper(lowercaseChar);
    cout << lowercaseChar << " " << uppercaseChar << endl;
    
    
    char character = '7';
    bool isSeven = is_seven(character);
    bool isAlpha = isalpha(character);
    bool isDigit = isdigit(character);
    bool isAlphanumeric = isalnum(character);
    bool isPunctuation = ispunct(character);
    cout << isSeven << " " << isAlpha << " " << isDigit << " " << isAlphanumeric << " " << isPunctuation << endl;

    double squareRoot = sqrt(16.0);
    int maximum = max(max(5, 8), max(7, 44));
    int minimum = min(3, 7);
    double powerResult = pow(2.0, 3.0);



    // factorial(n) => 1 * 2 * 3 * .... * (n - 1) * n
    // n! 
    // 0! = 1
    // 1! = 1
    // 2! = 2
    // 3! = 6 
    // 5 != 120 
    // 5! = 120
    // 0!=1

    int res = 1;
    int n = 5;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    cout << n << " factorial is " << res << endl;
    cout << n << " _factorial is " << factorial(n) << endl;

    dream_level(1);
    return 0;
} 




int square(int x) {
    int res = x * x; // x^2
    return res;
}
