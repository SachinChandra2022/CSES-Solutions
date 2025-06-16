#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n, int a, int b) {
    if (a + b > n) {
        cout << "NO\n";
        return;
    }

    vector<int> p1, p2;
    vector<int> available;
    for (int i = 1; i <= n; ++i) available.push_back(i);

    for (int i = 0; i < a; ++i) {
        p1.push_back(available[n - i - 1]); 
        p2.push_back(available[i]);         
    }

    for (int i = 0; i < b; ++i) {
        p1.push_back(available[i]);         
        p2.push_back(available[n - a - i - 1]); 
    }

    int used = a + b;
    for (int i = used; i < n; ++i) {
        p1.push_back(available[i]);
        p2.push_back(available[i]);
    }

    cout << "YES\n";
    for (int x : p1) cout << x << " ";
    cout << "\n";
    for (int x : p2) cout << x << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        solve(n, a, b);
    }
    return 0;
}