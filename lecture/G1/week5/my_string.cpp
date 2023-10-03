#include <iostream>
#include <string>
using namespace std;

int main() {
    char a = '5';
    cout << "ASCII number of variable a is "  << int(a) << endl;
    
    string s = "Hello, C++!";
    string s2("Hello, World!");
    string s3(s2);
    string s4(3, 'G');
    
    cout << s << endl << s2 << endl << s3 << endl << s4 << endl;

    string hello = "Hello";

    cout << "The length of hello is " << hello.size() << endl;
    cout << "The length of hello is " << hello.length() << endl;
    
    string hello_copy = hello;
    hello[0] = 'M';
    cout << hello << " " << hello_copy << endl;

    if (hello == hello_copy) {
        cout << "Hello and hello_copy are same!" << endl;
    } else {
        cout << "Hello and hello_copy are not same!" << endl;
    }

    string my_var = "Hello";
    char c = '!';
    
    my_var += c;

    cout << my_var << endl;

    string hello2 = "Hello ", kbtu = "KBTU!";
    cout << hello2 + kbtu << endl;

    for (int i = 0; i < kbtu.size(); i++) {
        cout << "Character at index " << i << " is " << kbtu[i] << endl; 
    }

    cout << kbtu.front() << " " << kbtu.back() << endl; 
    
    string::iterator iterator_begin = kbtu.begin();
    string::iterator iterator_end = kbtu.end();

    cout << *(iterator_begin + 1) << " " << *(iterator_end - 1)<< endl;
    return 0;
} 