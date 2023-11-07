#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> a;

    cout << a.size() << endl;
    cout << a.empty() << endl;

    a.push_back(10);
    a.push_back(54);
    a.push_back(30);

    // std::out_of_range error
    // cout << a.at(5) << endl;
    // 
    // UB -> Undefined Behaviour
    // cout << a[5] << endl;

    for (int i = 0; i < a.size(); i++) {
        cout << a.at(i) << " ";
    }
    cout << endl;

    cout << "First element of vector a is: " << a.at(0) << " " << a.front() << endl;
    cout << "The last element of vector a is " << a.at((int)a.size() - 1) << " " << a.back() << endl;
    

    vector <int> ::iterator it_begin = a.begin(); 
    vector <int> ::iterator it_end = a.end();
    vector <int> ::iterator it;
    
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    vector <int> copy_a = a;

    a.erase(a.begin() + 1); // Remove the second element

    
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    
    for (it = copy_a.begin(); it != copy_a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    copy_a.erase(copy_a.begin(), copy_a.begin() + 2);
    

    for (it = copy_a.begin(); it != copy_a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    

    copy_a.clear();

    cout << "Printing copy_a" << endl;
    for (it = copy_a.begin(); it != copy_a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}