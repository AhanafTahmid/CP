#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), dp(n+1);
    for(int &i: a)cin>>i;
    dp[0] = 1;
    for(int i=0;i<n;i++){
        if( i+a[i]<n && dp[i]) dp[ i + a[i] + 1 ] = 1;
        if( i-a[i]>=0 && dp[i - a[i]]) dp[ i + 1 ] = 1;
    }
    cout<< (dp[n]?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}