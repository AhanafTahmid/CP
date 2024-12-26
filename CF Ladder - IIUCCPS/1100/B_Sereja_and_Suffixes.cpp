//suffix sum
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<int>vis(100005, 0);
    vector<int>pr(n, 0);
    pr[n-1] = 1;
    vis[a[n-1]] = 1;
    for(int i=n-2;i>=0;i--){
        if(!vis[a[i]]) vis[a[i]] = 1, pr[i] = pr[i+1] + 1;
        else pr[i] = pr[i+1];
    }
    while(m--){
        int x;cin>>x;
        cout<< pr[--x] <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}