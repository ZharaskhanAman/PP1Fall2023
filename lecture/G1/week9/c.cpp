#include <iostream>
#include <set>

using namespace std;

int main() {

    set <int> s;
    
    cout << s.size() << " " << s.empty() << endl;
    
    s.clear(); 
    
    
    s.insert(5); // O(logN)
    s.insert(5);
    s.insert(-1);
    s.insert(10);

    for (set <int> ::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    s.erase(5); // O(logN)
    s.erase(5464654);

    for (set <int> ::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    set<int> ::iterator it = s.find(10);

    if (it == s.end()) {
        cout << "Element not found" << endl;
    } else {
        cout << *it << endl;
    }
    return 0;
}