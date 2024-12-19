#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>adj[n+1];
    vector< int > ans(n+1,-1);
    for(int i=1;i<n;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(i);
        adj[v].push_back(i);
    }

    int v = 0;
    for(int i=1;i<=n;i++){
        if( adj[i].size() >= 3 ){
            ans[ adj[i][0] ] = 0;
            ans[ adj[i][1] ] = 1;
            ans[ adj[i][2] ] = 2;
            v = 3;
            break;
        }
    }

    for(int i=1;i<n;i++){
        if(ans[i]==-1) ans[i] = v++;
    }

    for(int i=1;i<n;i++) cout<< ans[i] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}