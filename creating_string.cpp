#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<string> permutations;
    do {
        permutations.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << permutations.size() << endl;

    for (const string& p : permutations) {
        cout << p << endl;
    }

    return 0;
}