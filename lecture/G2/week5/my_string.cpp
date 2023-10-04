#include <iostream>
#include <string>
using namespace std;

int main() {
    char a = 'G'; 
    cout << "ASCII number of variable a is "  << int(a) << endl;
    
    
    string s = "Hello";
    string s2("Hello world!");
    string s3(3, 'A');
    string s4(s2);

    cout << s << " " << s2 << " " << s3 << " " << s4 << endl;

    string hello = "hello";

    cout << "The length of word " << hello << " is " << hello.length() << endl;
    cout << "The length of word " << hello << " is " << hello.size() << endl;
    
    string hello_copy = hello;
    
    hello[0] = 'M';

    cout << hello << " " << hello_copy << endl;

    if (hello != hello_copy) {
        cout << "hello and hello_copy are not same!" << endl;
    }

    string my_var = "KBTU";

    my_var = "Hello " + my_var;
    
    my_var += '!';

    cout << my_var << endl;

    string kbtu = "KBTU";

    for (int i = 0; i < kbtu.size(); i++) {
        cout << "Character at index " << i << " is " << kbtu[i] << endl; 
    }


    cout << kbtu.front() << " " << kbtu.back() << endl; 
    string::iterator iterator_begin = kbtu.begin();
    string::iterator iterator_end = kbtu.end();


    cout << *(iterator_begin + 1) << " " << *(iterator_end - 1) << endl;
    
    return 0;
} 