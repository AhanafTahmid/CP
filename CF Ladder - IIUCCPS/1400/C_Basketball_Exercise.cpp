#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>>v(2,vector<int>(n)), dp(2,vector<int>(n+1));
    for(int i=0;i<n;i++) cin>>v[0][i];
    for(int i=0;i<n;i++) cin>>v[1][i];
    dp[0][1] = v[0][0];
    dp[1][1] = v[1][0];
    for(int i=2;i<=n;i++){
        dp[0][i] = max(v[0][i-1] + dp[1][i-1] , dp[0][i-1]);
        dp[1][i] = max(v[1][i-1] + dp[0][i-1] , dp[1][i-1]);
    }
    cout<< max(dp[0][n], dp[1][n+3]) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}