#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k, p;cin>>n>>k>>p;
    k = abs(k);
    if( (k + p - 1) / p  > n ) cout<< -1 <<endl;
    else cout<< (k + p - 1) / p  <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}