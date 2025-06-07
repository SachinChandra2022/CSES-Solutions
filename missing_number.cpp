#include<iostream>
using namespace std;

long long missing_number(long long n, long long arr[]) {
    long long total = n * (n + 1) / 2;
    for (long long i = 0; i < n - 1; i++) {
        total -= arr[i];
    }
    return total;
}

int main() {
    long long n;
    cin >> n;
    long long arr[n - 1];
    for (long long i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    cout << missing_number(n, arr) << endl;
    return 0;
}