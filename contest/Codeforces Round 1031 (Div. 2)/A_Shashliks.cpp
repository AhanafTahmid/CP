#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int k, a, b, x, y; cin >> k >> a >> b >> x >> y;
    int ans = 0;
    if(k >= x){
        int xx = 0, yy = 0;
        if(min(x,y) == x) xx = x, yy = y;
        else xx = y, yy = x;

        int v = (k - min(a,b))/xx + 1;
        ans += v;
        k -= v * xx;
        cout<< ans << ' ';
        
        if(k >= max(x,y)) {
            ans += (k - max(a,b))/yy + 1;
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