#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void dfs(int u, int p, vector<vector<int>>& adj, vector<array<int, 2>>& ans, int a){
    for(int v: adj[u]){
        if(v == p) continue;
        if(u == v) continue; 
        if(v == u) continue;
        if(a % 2 == 0) ans.push_back({u, v});
        else ans.push_back({v, u});
        dfs(v, u, adj, ans, a + 1);
    }
}

void solve(){
    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int v = -10;
    for(int i = 1; i <= n; i++){
        if(adj[i].size() >= 2){
            v = i;
            break;
        }
    }
    if( v == -10 || n == 2){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    vector<array<int, 2>> ans;
    int v1 = adj[v][0], v2 = adj[v][1];
    ans.push_back({v1, v2});
    dfs(v1, v, adj, ans, ans[0][0], 0);
    dfs(v2, v, adj, ans, ans[0][1], 0);
    for(auto [x, y]: ans) cout << x << " " << y << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}