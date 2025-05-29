#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>> n >> x;
    for(int i=0;i<x;i++) cout<< i << ' ';
    for(int i=n-1;i>=x;i--) cout<< i << ' ';
    cout<< endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}