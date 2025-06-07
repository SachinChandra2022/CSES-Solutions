#include <iostream>
using namespace std;
int weird_algorithm(long long n) {
    cout << n << " ";
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return weird_algorithm(n / 2);
    } else {
        return weird_algorithm(3 * n + 1);
    }
}
int main() {
    long long n;
    cin >> n;
    weird_algorithm(n);
    cout << endl;
    return 0;
}