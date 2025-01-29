#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n), b, c;
    for (int &i : a) cin >> i;
    
    int v = r - l + 1;
    for (int i = 0; i < r; i++) b.push_back(a[i]);
    for (int i = l-1; i < n; i++) c.push_back(a[i]);

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int ls = 0, rs = 0, ans = 1e10;
    for (int i = 0; i < v && i < b.size(); i++) {
        ls += b[i];
    }
    for (int i = 0; i < v && i < c.size(); i++) {
        rs += c[i];
    }
    ans = min(ls, rs);
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
