#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int> adj[n];
    vector<int>vis(n, 1);
    for(int i=0;i<m;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++){
        if(vis[i]==1){
            
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}