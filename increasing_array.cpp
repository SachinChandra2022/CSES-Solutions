#include<iostream>
#include<vector>
using namespace std;
long long increasing_array(vector<int> &arr) {
    long long count = 0;
    for(int i=1; i<arr.size();i++){
        if(arr[i] < arr[i-1]) {
            count += arr[i-1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << increasing_array(arr) << endl;
    return 0;
}