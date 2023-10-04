#include <iostream>
#include <string>
using namespace std;

int main() {

    // find
    string text = "Find me if you can.";
    string search_text = "me";
    int found = text.find(search_text);
    if (found != string::npos) {
        // Found "me" at index 'found'
        for (int i = found; i < text.size(); i++) {
            cout << text[i];
        }
        cout << endl;
    }


    string text2 = "How many many times times?";
    string search_text2 = "many";
    int pos = 0;
    int count = 0;
    while ((pos = text2.find(search_text2, pos)) != string::npos) {
        cout << "Found at position starting from " << pos << endl;
        count++;
        pos += search_text2.size(); // Move past the last found occurrence
    }


    string my_input;
    // read the string with spaces
    //getline(cin, my_input);

    cout << "Your input is **" << my_input << "**" << endl;
    
    string ex_text = "This_is_example_text!";
    //      beginning position and the length
    cout << ex_text.substr(1, 7) << endl;

    cout << ex_text.erase(4, 11) << endl;



    string palindrome = "racecar";
    string palindrome_copy = palindrome;


    reverse(palindrome_copy.begin(), palindrome_copy.end());
    
    cout << palindrome << " " << palindrome_copy << endl;
    if (palindrome == palindrome_copy) {
        cout << "The word " << palindrome << " is palindrome" << endl; 
    } else {
        cout << "The word " << palindrome << " is not palindrome" << endl; 
    }


    bool is_palindrome = true;
    for (int i = 0, j = palindrome.size() - 1; i < j; i++, j--) {
        if (palindrome[i] != palindrome[j]) {
            is_palindrome = false;
            break;
        }
    }

    string str = "Hello";
    
    //str += " World"
    str.append(" World");

    str.insert(5, ", C++");
    cout << str << endl;



    string numStr = "42";
    int num = stoi(numStr);
    string numStr2 = to_string(num);
    return 0;
}