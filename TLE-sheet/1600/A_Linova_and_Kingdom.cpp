#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int>sz(2e5+10);
vector<int>dep(2e5+10);

void dfs(int child, int par, vector<int>&a, vector<int>adj[]){
    sz[child] = 1;
    dep[child] = 1 + dep[par];
    for(int neighbours: adj[child]){
        if( neighbours == par ) continue;
        dfs(neighbours, child, a, adj);
        sz[child]+= sz[neighbours];
    }
    a.push_back( dep[child] - sz[child] );
}

void solve(){
    int n, k;cin>>n>>k;
    vector<int>adj[n+1];
    vector<int>a;
    for(int i=0;i+1<n;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0, a, adj);
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for(int i=0;i<k;i++)ans+= a[i];
    cout<< ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}