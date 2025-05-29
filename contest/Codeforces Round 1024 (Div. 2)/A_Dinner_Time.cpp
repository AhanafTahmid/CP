#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, p, q;cin>>n>>m>>p>>q;
    int v = (n / p) * q;
    if( n % p || v == m) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}