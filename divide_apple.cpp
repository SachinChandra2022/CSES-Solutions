#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    long long total_sum = 0;
    for (long long w : weights) {
        total_sum += w;
    }

    long long min_diff = total_sum;

    for (int mask = 0; mask < (1 << n); ++mask) {
        long long subset_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset_sum += weights[i];
            }
        }
        long long other_sum = total_sum - subset_sum;
        long long diff = abs(subset_sum - other_sum);
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;

    return 0;
}