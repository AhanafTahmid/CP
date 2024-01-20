#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        long long distinct_strings = 0;
        for (char c : s) {
            distinct_strings += n + 1 - freq[c];
        }

        cout << distinct_strings << endl;
    }

    return 0;
}
