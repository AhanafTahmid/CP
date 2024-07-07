#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

vector<int>vis(101000);
//vector <int> adj[10100];
map<int, vector<int>>adj;
vector<int>a;

void dfs(int s, int &v) {
    if (vis[s]) return;
    vis[s] = true;
    for (auto u: adj[s]) {
        v = min(a[u], v);
        dfs(u,v);
    }
}

void solve(){
    int n,m;cin>>n>>m;
    a.resize(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];

    int ans = 0, ct = 0;
    map<int, int>mp;
    while(m--){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(adj[i].size()==0) ans+=a[i];
        else{
            int v = 1e10;
            dfs(i,v);
            if(v!=1e10)ans+=v;            
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}