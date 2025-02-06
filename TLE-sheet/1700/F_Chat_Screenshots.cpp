#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool isCyclic(int V, vector<int> adj[]) {
    vector<int> indegree(V);
    for(int i=0;i<V;i++){
       for(int x: adj[i]) indegree[x]++;
    }
    int ct = 0;
    queue<int>q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0)q.push(i);
    }
    while(!q.empty()){
        int v = q.front();
        q.pop();
        ct++;
        for(int x: adj[v]){
            indegree[x]--;
            if(indegree[x] == 0)q.push(x);
        }
    }
    
    return (ct==V?false:true);
}

void solve(){
    int n, k;cin>>n>>k;
    vector<int>adj[n];
    for(int i=0;i<k;i++){
        vector<int>a(n);
        for(int &i: a)cin>>i;
        for(int j=1;j+1<n;j++){
            adj[a[j]-1].push_back(a[j+1]-1);
        }
    }
    
    cout<< (!isCyclic(n, adj)?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}