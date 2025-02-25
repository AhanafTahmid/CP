#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int md = 998244353;

int power(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a) %m;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n; cin >> n;
    
    int ans = 0;
    int p = 0;
    int q = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1) {
            p += 1;
            q += 1;
            p%=md;
            q%=md;
        } else if (x == 2) {
            p = power(p,1/2,md);
            p%=md;
        } else {
            ans += p - q;
            ans%=md;
        }
    }
    cout << ans << "\n";
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}