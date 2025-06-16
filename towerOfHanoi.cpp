#include <iostream>
using namespace std;

void hanoi(int n, int start, int end, int aux) {
    if (n == 0) return;
    hanoi(n - 1, start, aux, end);
    cout << start << " " << end << endl;
    hanoi(n - 1, aux, end, start);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    hanoi(n, 1, 3, 2);
    return 0;
}