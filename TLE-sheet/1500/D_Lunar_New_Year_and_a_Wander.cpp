#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int> adj[n+1];
    vector<int>visited(n+1,0), ans;
    for(int i=0;i<m;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(1);
    visited[1] = 1;
    while(!pq.empty()){
        int node = pq.top();
        pq.pop();        
        ans.push_back(node);
        for(int x: adj[node]){
            if(!visited[x]){
                pq.push(x);
                visited[x] = 1;
            }
        }
    }

    for(int x: ans) cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}