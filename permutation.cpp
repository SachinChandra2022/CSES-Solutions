#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    vector<int> arr;  
    for (int i = 2; i <= n; i += 2) {
        arr.push_back(i);
    }
    for (int i = 1; i <= n; i += 2) {
        arr.push_back(i);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}