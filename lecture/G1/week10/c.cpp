#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {

    // FIFO
    queue<int> Q_int;
    queue<string> Q;

    Q.push("John");
    Q.push("Adam");
    Q.push("Smith");

    cout << Q.empty() << "  " << Q.size() << endl;

    cout << "Front: " << Q.front() << endl << "Last: " << Q.back() << endl;
    
    cout << "Removing the " << Q.front() << endl;
    Q.pop();

    cout << "Front: " << Q.front() << endl << "Last: " << Q.back() << endl;

    return 0;
}