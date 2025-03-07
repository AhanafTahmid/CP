#include <bits/stdc++.h>
using namespace std;

bool ok(int x, int n, const string& s, const vector<int>& a, int k) {
    int ct = 0;
    bool reg = false;
    bool req = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'R' && a[i] > x) {
            if (reg) {
                if (req) {
                    ct++;
                }
                reg = false;
                req = false;
            }
        } else {
            if (!reg) {
                reg = true;
                req = false;
            }
            if (s[i] == 'B' && a[i] > x) {
                req = true;
            }
        }
    }
    if (reg && req) {
        ct++;
    }
    return ct <= k;
}

void solve() {
    int n, k;cin >> n >> k;
    string s;cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ma = *max_element(a.begin(), a.end());
    int low = 0, high = ma;
    int ans = ma;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ok(mid, n, s, a, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}