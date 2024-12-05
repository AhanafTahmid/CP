#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, m;cin>>x>>m;
    int n = (1<<20)-1;
    cout<< n <<endl;
    n = min(n, m);
    int ans = 0;
    for(int i=1;i<=n;i++){
        int d = (x^i);
        if( d % i == 0 || d % x == 0 ) ans++;
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