#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, l , r;cin >> n >> m >> l >> r;
    int ct = 0;
    int ll = -l, lll = m;
    // while( m != ct){
    //     if(l<0)ll--,l++;
    //     ct++;
    // }
    if( lll > ll ) cout<< -ll << ' ' << m - ll << endl;
    else cout<< -lll << ' ' << m - lll << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}