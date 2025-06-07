#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int max_len = 1, current_len = 1;
    for (size_t i = 1; i < dna.length(); ++i) {
        if (dna[i] == dna[i - 1]) {
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } 
        else {
            current_len = 1;
        }
    }

    cout << max_len << endl;
    return 0;
}