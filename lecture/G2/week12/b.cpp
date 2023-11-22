#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;
void print_function(int x) {
    cout << x << ' ';
}


int seed = 1;
//https://en.wikipedia.org/wiki/ZX81
int my_random() {
    seed = (75 * seed + 74) % ((1<<16) + 1);

    return seed;
}
int main() {
    vector<int> myvector(10);
    generate(myvector.begin(), myvector.end(), my_random);
    for_each(myvector.begin(), myvector.end(), print_function);
    cout << endl;
    vector<int> rand_vector(10);

    // Seed
    srand(time(NULL));
    generate(rand_vector.begin(), rand_vector.end(), rand);
    for_each(rand_vector.begin(), rand_vector.end(), print_function);
    cout << endl;
    vector<string> children;
    children.push_back("Adam");
    children.push_back("Bob");
    children.push_back("John");

    do {
        for (int i = 0; i < children.size(); i++) {
            cout << i << ":" << children[i] << ",";
        }
        cout << endl;
    } while (next_permutation(children.begin(), children.end()));


    sort(children.begin(), children.end());
    reverse(children.begin(), children.end());
    
    cout << endl;
    do {
        for (int i = 0; i < children.size(); i++) {
            cout << i << ":" << children[i] << ",";
        }
        cout << endl;
    } while (prev_permutation(children.begin(), children.end()));

    return 0;
}
