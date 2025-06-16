#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'A']++;
    }
    int odd_count = 0;
    char odd_char = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd_count++;
            odd_char = 'A' + i;
        }
    }
    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string half = "", middle = "";
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            middle += string(count[i], 'A' + i);
        } 
        else {
            half += string(count[i] / 2, 'A' + i);
        }
    }

    string result = half;
    if (!middle.empty()) result += middle;
    reverse(half.begin(), half.end());
    result += half;

    cout << result << endl;
    return 0;
}