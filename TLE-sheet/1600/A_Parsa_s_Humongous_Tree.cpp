#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int dfs(int ind, int par, map< int, array<int, 2>>&mp, vector<int>adj[],
    vector<vector<int>>&dp){
    for(int x: adj[ind]){
        if( x == par ) continue;
        dfs(x, ind, mp, adj, dp);

        int v1 = abs(mp[ind][0] - mp[x][0]);
        int v2 = abs(mp[ind][0] - mp[x][1]);
        int v3 = abs(mp[ind][1] - mp[x][0]);
        int v4 = abs(mp[ind][1] - mp[x][1]);
        //left
        dp[ind][0] += max( v1 + dp[x][0] , v2 + dp[x][1]);
        //right
        dp[ind][1] += max( v3 + dp[x][0] , v4 + dp[x][1]);
    }
    return max(dp[ind][0], dp[ind][1]);
}

void solve(){
    int n;cin>>n;
    vector<int>adj[n+1];
    map< int, array<int, 2> > mp;
    for(int i=1;i<=n;i++){
        int l, r;cin>>l>>r;
        mp[i] = {l,r};
    }

    for(int i=1;i+1<=n;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>>dp(n+1, vector<int>(2));
    cout<< dfs(1, 0, mp, adj, dp) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}