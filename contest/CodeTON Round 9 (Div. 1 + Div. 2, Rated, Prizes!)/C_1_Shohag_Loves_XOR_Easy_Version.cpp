#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, m;cin>>x>>m;
    int v = log2(x);
    v++;
    int v1 = (1 << v) - 1;
    int n = min(v1, m); 
    int ans = 0;
    for(int y=1;y<=n;y++){
        int d = (x^y);
        //cout<< x << " xor " << y << " = " << (x ^ y) <<endl;
        if( x!=y && ( y % d == 0 || x % d == 0) ) ans++;
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