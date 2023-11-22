#include <algorithm>
#include <vector>
#include <iostream>
/*
- [ ] Library <algorithm>
- [ ] count_if (begin, end, function) - http://www.cplusplus.com/reference/algorithm/count_if/
- [ ] rotate (begin, middle, last) - http://www.cplusplus.com/reference/algorithm/rotate/
- [ ] fill (begin, end, val) - http://www.cplusplus.com/reference/algorithm/fill/
- [ ] unique (begin, end) - http://www.cplusplus.com/reference/algorithm/unique/
- [ ] for_each(begin, end, function) - http://www.cplusplus.com/reference/algorithm/for_each/
*/
using namespace std;


bool IsEven(int i) {
    return i % 2 == 0;
}

void print_function(int x) {
    cout << x << ", ";
}

int main() {
    vector<int> a;
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


    vector<int> myvector;
    for (int i= 1 ; i < 10; i++) {
        myvector.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9
    }

    int cnt_even = 0;
    for (int i = 0; i < myvector.size(); i++) { 
        if (IsEven(myvector[i])) {
            cnt_even++;
        }
    }
    cout << cnt_even << endl;

    cout << count_if(myvector.begin(), myvector.end(), IsEven) << endl;

    for (int i = 0; i < myvector.size(); i++) {
        cout << myvector[i] << " ";
    }
    cout << endl;

    // begin, middle, end
    rotate(myvector.begin(),myvector.begin()+5,myvector.end());
    
    for (int i = 0; i < myvector.size(); i++) {
        cout << myvector[i] << " ";
    }
    cout << endl;


    vector<int> test_vector(8);
    for (int i = 0; i < test_vector.size(); i++) {
        cout << test_vector[i] << " ";
    } 
    cout << endl;

    /*
    for (int i = 1; i < test_vector.size(); i++) {
        test_vector[i] = 15;
    }
    */

    fill(test_vector.begin() + 1, test_vector.begin() + 3, 15);
    
    for (int i = 0; i < test_vector.size(); i++) {
        cout << test_vector[i] << " ";
    } 
    cout << endl;


    vector <int> test_unique;
    test_unique.push_back(10);
    test_unique.push_back(20);
    test_unique.push_back(30);
    test_unique.push_back(40);
    test_unique.push_back(50);

    test_unique.push_back(10);
    test_unique.push_back(30);
    test_unique.push_back(30);
    test_unique.push_back(50);
    
    for (int i = 0; i < test_unique.size(); i++) {
        cout << test_unique[i] << ' ';
    }
    cout << endl;

    // 10 20 30 40 50 10 30 30 50 
    // 10 20 30 40 50 10 30 50 ? 

    sort(test_unique.begin(), test_unique.end());

    for (int i = 0; i < test_unique.size(); i++) {
        cout << test_unique[i] << ' ';
    }
    cout << endl;

    vector<int> ::iterator it = unique(test_unique.begin(), test_unique.end());

    cout << "Distance is: " << distance(test_unique.begin(), it) << endl;
    test_unique.resize( distance(test_unique.begin(), it) );
    
    for (int i = 0; i < test_unique.size(); i++) {
        cout << test_unique[i] << ' ';
    }

    cout << endl;

    // for_each
    for_each(test_unique.begin(), test_unique.end(), print_function);
    cout << endl;
    return 0;
}