#include <bits/stdc++.h>
using namespace std;

const int MAX_STEPS = 40;

vector<int> findSpells(int curCandies, int targetCandies, int numSteps) {
    if (curCandies == targetCandies) {
        return vector<int>();
    }
    if (numSteps == 0) {
        return vector<int>(1, -1); // impossible
    }
    // try both options recursively
    vector<int> res = findSpells(2*curCandies-1, targetCandies, numSteps-1);
    if (res.empty()) {
        res.push_back(1);
        return res;
    }
    res = findSpells(2*curCandies+1, targetCandies, numSteps-1);
    if (res.empty()) {
        res.push_back(2);
        return res;
    }
    return vector<int>(1, -1); // impossible
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> spells = findSpells(1, n, MAX_STEPS);
        if (spells[0] == -1) {
            cout << "-1\n";
        } else {
            int m = spells.size();
            cout << m << "\n";
            for (int i = 0; i < m; i++) {
                cout << spells[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
