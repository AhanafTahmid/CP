#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Initialize data structures
    vector<set<int>> cards(n+1);
    multiset<int> numbers;

    // Process queries
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            cards[b].insert(a);
            numbers.insert(a);
        } else if (t == 2) {
            int a;
            cin >> a;
            for (int x : cards[a]) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            int a;
            cin >> a;
            auto it = numbers.lower_bound(a);
            while (it != numbers.end() && *it == a) {
                for (int j = 1; j <= n; j++) {
                    if (cards[j].count(a)) {
                        cout << j << " ";
                    }
                }
                it++;
            }
            cout << endl;
        }
    }

    return 0;
}
