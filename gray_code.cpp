#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 1 << n; 
    for (int i = 0; i < total; ++i) {
        int c = i ^ (i >> 1);
        bitset<16> b(c); 
        cout << b.to_string().substr(16 - n) << endl; 
    }

    return 0;
}