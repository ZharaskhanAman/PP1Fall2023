#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << endl;
    */
    int n;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        // v.at(i) = 10;   x
        // v[i] = 10;      v
    }
    
    cout << sum << endl;

    v.insert(v.begin() + 1, 42);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}