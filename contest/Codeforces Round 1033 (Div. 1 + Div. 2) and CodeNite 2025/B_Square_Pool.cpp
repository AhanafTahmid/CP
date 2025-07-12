#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, s; cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a, b, x, y; cin >> a >> b >> x >> y;
        ans += (a != b && (x + y) % s == 0) || (a == b && (x - y) % s == 0);
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