#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void dfs(int i, vector<bool> &visited, vector <set<int>> &adj){
    if(visited[i]) return;
    visited[i] = 1;
    for(auto x: adj[i]) dfs(x, visited,adj);
}

void solve(){
    int n;cin>>n;
    vector<bool> visited(10005);
    vector <set<int>> adj(10005);
    for(int i=0;i+1<n;i++){
        int x,y;cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    int times = 2;
    for(int i=1;i<=n;i++){
        if(adj[i].size() > 2 && times>0){
            times--;
            for(int x: adj[i]){
                adj[x].erase(i);
                if(adj[x].size()==0) adj[x].insert(-1);
            }
            adj[i].clear();
        }
    }

    if(times>0){
        for(int i=1;i<=n;i++){
            if(adj[i].size() > 1 && times>0){
                times--;
                //cout<< i <<endl;
                for(int x: adj[i]){
                    adj[x].erase(i);
                    if(adj[x].size()==0) adj[x].insert(-1);
                }
                adj[i].clear();
            }
        }
    }

    if(times>0){
        for(int i=1;i<=n;i++){
            if(adj[i].size() == 1 && times>0){
                times--;
                adj[i].clear();
            }
        }
    }

    int ans = 0;
    for(int i=1;i<=n;i++){
        if(adj[i].size() == 1 && *adj[i].begin() == -1){
            ans++;
        }
        else if(adj[i].size()>0 && !visited[i]){
            dfs(i, visited,adj);
            ans++;
        }
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