#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n), v(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    vector<int> adj[n+1], p[n+1];

    for(int i=1;i<=n;i++) p[i].push_back(0);

    for(int i=0;i<n;i++){
        cin>>b[i];
        ans+=b[i];
        adj[a[i]].push_back(b[i]);
        p[a[i]].push_back(0);
    }
    for(int i=1;i<=n;i++) sort(adj[i].begin(), adj[i].end(),greater<int>());

    for(int i=1;i<=n;i++){
        for(int j=0;j<adj[i].size();j++){
            p[i][j+1] = p[i][j] + adj[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        int nn = adj[i].size();
        for(int j=1;j<=nn;j++){
            if(nn%j==0){
                v[j]+= p[i][nn];
            }
            else if(nn%j){
                v[j]+= p[i][nn - (nn%j)];
            }
        }
    }

    for(int i=1;i<=n;i++) cout<< v[i] << " \n"[i==n];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}