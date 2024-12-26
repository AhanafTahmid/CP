#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int k, l1, r1, l2, r2;cin>>k>>l1>>r1>>l2>>r2;
    int v = 1;
    vector<int>a;
    while(v<=r2 ){
        a.push_back(v);
        if (v > r2 / k) break;
        v*=k;
    }
    int ans = 0;
    for (int x : a) {
        int v1 = (l2 + x - 1) / x;
        int xx = max(l1, v1);
        int yy = min(r1, r2 / x);
        if (xx <= yy) {
            ans += (yy - xx + 1);
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}