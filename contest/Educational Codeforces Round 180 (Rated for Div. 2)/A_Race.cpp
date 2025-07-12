#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a, c, d;cin>>a>>c>>d;
    if(c>d) swap(c, d);
    if( c<=a && d>=a) cout<< "NO" <<endl;
    else cout<< "YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}