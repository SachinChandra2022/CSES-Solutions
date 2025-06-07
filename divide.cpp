#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    if (total % 2 != 0) {
        cout << "NO" << endl;
    } 
    else {
        vector<int> set1, set2;
        long long target = total / 2;

        for (int i = n; i >= 1; --i) {
            if (target >= i) {
                set1.push_back(i);
                target -= i;
            } 
            else {
                set2.push_back(i);
            }
        }

        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (int x : set1) cout << x << " ";
        cout << endl;

        cout << set2.size() << endl;
        for (int x : set2) cout << x << " ";
        cout << endl;
    }
    return 0;
}