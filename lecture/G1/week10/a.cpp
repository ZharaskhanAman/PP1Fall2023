#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <int> st;

    st.push(42);
    st.push(30);
    st.push(60);

    /*
    60
    30
    42
    */
    cout << st.size() << " " << ' ' << st.empty() << endl;

    cout << st.top() << endl;
    cout << endl;

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}