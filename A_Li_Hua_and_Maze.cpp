#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool can_reach(int n, int m, int x1, int y1, int x2, int y2, int k) {
    int dx = abs(x1 - x2), dy = abs(y1 - y2);
    int max_moves = (n - 2) / k + (m - 2) / k;
    int max_diag = max((dx + k - 1) / k, (dy + k - 1) / k);
    return max_diag <= max_moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        int lo = 1, hi = max(n, m);
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (can_reach(n, m, x1, y1, x2, y2, mid)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << lo - 1 << '\n';
    }
    return 0;
}
