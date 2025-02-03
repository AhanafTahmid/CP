#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool dfs(int i, int now,vector<int>&color,vector<int>adj[]){
    color[i] = now;
    for(auto x: adj[i]){
        if(color[x] == -1){
            if(!dfs(x, !now, color, adj))return false;
        }
        else if(now == color[x]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;cin>>n;
    bool ok = 1;
    vector<int>color(n, -1);
    vector<int> adj[n];

    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        if( adj[x].size() >= 3 || adj[y].size() >= 3) ok = 0;
    }

    for(int i=0;i<n;i++){
        if(color[i] == -1) {
            if(!dfs(i, 0, color, adj)){
                ok = 0;
                break;
            }
        }
    }

    cout<< (ok?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}