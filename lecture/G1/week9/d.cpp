#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // key => value

    map <int, string > M;

    M[1] = "one";
    M[-1] = "minus_one";
    M[555555] = "magic";

    for (map <int, string> ::iterator it = M.begin(); it != M.end(); it++) {
        cout << it-> first << " => " << it->second << endl;       
    }

    
    map <string, int > name2score;

    name2score["John"] = 10;
    name2score["Smith"] = 15;
    name2score["Harry"] = -10;
    
    for (map <string, int> ::iterator it = name2score.begin(); it != name2score.end(); it++) {
        cout << it-> first << " => " << it->second << endl;       
    }
    return 0;
}