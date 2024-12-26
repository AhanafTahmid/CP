#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Count how many integers are missing
        unordered_set<int> s(a.begin(), a.end());
        int k = 0;
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                k++;
            }
        }

        // Calculate the cost of inserting new integers
        int insert_cost = k * d;

        // Remove duplicates from the array
        unordered_set<int> seen;
        vector<int> b;
        for (int x : a) {
            if (seen.find(x) == seen.end()) {
                seen.insert(x);
                b.push_back(x);
            }
        }

        // Calculate the cost of removing existing integers
        int remove_cost = (n - seen.size()) * c;

        // Output the minimum cost
        cout << min(insert_cost, remove_cost) << endl;
    }
    return 0;
}
