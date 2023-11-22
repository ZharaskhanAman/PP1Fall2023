#include <algorithm>
#include <vector>
#include <iostream>
/*
- [ ] generate(begin, end, gen_func) - http://www.cplusplus.com/reference/algorithm/generate/
- [ ] lib <cstdlib> - srand(time(0))
- [ ] next_permutation, prev_permutation - http://www.cplusplus.com/reference/algorithm/next_permutation/ 
*/
using namespace std;

int c = 0;

int get_next() {
    c++;
    return c;
}
void print_function(int x) {
    cout << x << ' ';
}

int seed = 4;
int my_random() {
    seed = (seed * 42 + 15) ^ 123123;
    return seed; 
}
int get_rand() {
    return rand() % 10;
}
int main() {
    
    srand(time(0));

    vector <int> myvector(10);

    generate(myvector.begin(), myvector.end(), get_rand);
    
    for_each(myvector.begin(), myvector.end(), print_function);
    cout << endl;
    
    vector<int> my_perm (3);
    generate(my_perm.begin(), my_perm.end(), get_next);
    
    for_each(my_perm.begin(), my_perm.end(), print_function);
    cout << endl;

    /*
        n => permutation number is n!

        1, 2, 3
        1, 3, 2
        2, 1, 3
        2, 3, 1
        3, 1, 2
        3, 2, 1

        1, 2, 3
    */


    cout << "Next permutation:\n";
    do {
        for_each(my_perm.begin(), my_perm.end(), print_function);
        cout << endl;
    } while(next_permutation(my_perm.begin(), my_perm.end()));

    c = 0;
    generate(my_perm.begin(), my_perm.end(), get_next);
    reverse(my_perm.begin(), my_perm.end());
    cout << "Prev permutation:\n";
    do {
        for_each(my_perm.begin(), my_perm.end(), print_function);
        cout << endl;
    } while(prev_permutation(my_perm.begin(), my_perm.end()));


    return 0;
}