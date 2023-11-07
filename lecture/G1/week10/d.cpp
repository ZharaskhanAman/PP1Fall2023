#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

    deque <int> Q;

    Q.push_front(10);
    Q.push_back(42);
    Q.push_front(66);

    cout << Q.size() << endl;
    // 66, 10, 42

    cout << "Front element: " << Q.front() << endl;
    cout << "Last element: " << Q.back() << endl;
    
    cout << "Removing the front element: " << Q.front() << endl;
    Q.pop_front();


    cout << "Front element: " << Q.front() << endl;
    cout << "Last element: " << Q.back() << endl;
    
    cout << "Removing the back element: " << Q.back() << endl;
    Q.pop_back();

    cout << "Front element: " << Q.front() << endl;
    cout << "Last element: " << Q.back() << endl;
    
    return 0;
}