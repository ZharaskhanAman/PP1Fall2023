#include <iostream>
using namespace std;

int main() {
     /*
        Reverse the given array of size n

        Input: 
        6
        "C++", "Rust", "HTML", "PHP", "JS", "C#"
        
        Output: "C#", "JS", "PHP", "HTML", "Rust", "C++"
    
    */

    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0, j = n -1; i < j; i++, j--) {
        /*
            string tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        */
        swap(s[i], s[j]);
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }

    return 0;
} 