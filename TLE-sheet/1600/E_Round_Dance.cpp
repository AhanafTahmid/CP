#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

 
void dfs(int ind, vector<int>&visited, vector<int>adj[],bool &ok){
    if(visited[ind]) return;
    visited[ind] = true;
    if( adj[ind].size() == 1){
        ok |=1;
    }
    for(int x: adj[ind]){
        dfs(x, visited, adj, ok);
    }
}
    
void solve(){
    int n;cin>>n;
    vector<int>adj[n];
    set<int>adj2[n];
    vector<int>visited(n,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x--;

        if(adj2[i].count(x) == 0)
        adj[i].push_back(x);

        if(adj2[x].count(i) == 0)
        adj[x].push_back(i);

        adj2[i].insert(x);
        adj2[x].insert(i);
    }

    int mx = 0, cnt = 0, mn = 0;
    for(int i=0;i<n;i++){
        bool ok = 0;
        if( visited[i] == 0){
            dfs(i, visited, adj, ok);
            cnt+=ok;
            mx++;
        }
    }
    if(cnt == 0) mn = mx;
    else mn = mx - cnt + 1;

    cout<< mn << ' ' << mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}