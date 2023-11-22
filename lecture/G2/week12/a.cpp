#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_function(int x) {
    cout << x << ' ';
}

bool IsOdd(int x) {
    return x % 2 == 1;
}

int global_cnt = 0;
int my_generator() {
    global_cnt++;
    return global_cnt;
}
int main() {
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(435);
    a.push_back(521);
    a.push_back(-123);

    sort(a.begin(), a.end());
    // O(NlogN)

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }

    cout << endl;



    for (vector<int> :: iterator it = a.begin(); it != a.end(); it++) {
        cout << *it << ' ';
    }

    cout << endl;

    for_each(a.begin(), a.end(), print_function);
    cout << endl;


    vector <int> myvector;
    for (int i = 1; i <= 10; i++) {
        myvector.push_back(my_generator());
    }

    for_each(myvector.begin(), myvector.end(), print_function);
    cout << endl;


    int cnt_odd = 0;
    for (int i = 0; i < myvector.size(); i++) {
        if (IsOdd(myvector[i])) {
            cnt_odd++;
        }
    }
    cout << cnt_odd << endl;

    cout << count_if(myvector.begin(), myvector.end(), IsOdd) << endl;

    vector<int> gen_vector(11);

    global_cnt = 0;
    generate(gen_vector.begin(), gen_vector.end(), my_generator);
    for_each(gen_vector.begin(), gen_vector.end(), print_function);
    cout << endl;

    rotate(gen_vector.begin(), gen_vector.begin() + 3, gen_vector.end());
    for_each(gen_vector.begin(), gen_vector.end(), print_function);
    cout << endl;

    fill(gen_vector.begin(), gen_vector.end(), -42);
    for_each(gen_vector.begin(), gen_vector.end(), print_function);
    cout << endl;

    vector<int> test_unique;
    test_unique.push_back(1);
    test_unique.push_back(1);
    test_unique.push_back(2);
    test_unique.push_back(3);
    test_unique.push_back(2);
    test_unique.push_back(5);
    test_unique.push_back(5);

    for_each(test_unique.begin(), test_unique.end(), print_function);
    cout << endl;
    vector<int> ::iterator it;
    it = unique(test_unique.begin(), test_unique.end());
    
    cout << "Before remove:" << endl;
    for_each(test_unique.begin(), test_unique.end(), print_function);
    cout << endl;
    
    test_unique.erase(it, test_unique.end());

    // 1 1 2 3 2 5 5
    // 1 2 3 2 5 1 5
    
    cout << "After remove:" << endl;
    for_each(test_unique.begin(), test_unique.end(), print_function);
    cout << endl;
    return 0;
}
