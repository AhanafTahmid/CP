#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void dfs(int ind, int parent, vector<int>&sz, vector<int>adj[]){
    sz[ind] = 1;
    for(int x: adj[ind]){
        if(x!=parent)dfs(x,ind, sz, adj);
    }
    sz[parent] += sz[ind];
}

void solve(){
    int n;cin>>n;
    vector<int>adj[n+1];
    vector<int>sz(n+1, 0);
    for(int i=0;i<n-1;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n&1){
        cout<< -1 <<endl;
        return;
    }
    dfs(1,0, sz,adj);
    int ans = 0;
    for(int i=2;i<=n;i++) if(sz[i]%2==0)ans++;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}