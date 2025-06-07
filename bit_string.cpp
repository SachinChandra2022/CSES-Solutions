#include<iostream>
using namespace std;
const int mod = 1e9 + 7;
int main() {
    int n;
    cin >> n;
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result = (result * 2) % mod;
    }

    cout << result << endl;
    return 0;
}