#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>adj[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        int ln;cin>>ln;
        vector<int>a(ln);
        for(int &i: a)cin>>i,v.push_back(i);
        adj[i] = a;
    }
    sort(v.begin(),v.end());
    int s = 0, c = n-1;
    for(int i=0;i<n;i++){
        int ct = 0;
        int sz = adj[i].size();
        int lw = lower_bound(v.begin(),v.end(), adj[i][sz-1]) - v.begin();
        for(int j=sz-1;j>=0;j--){
            if(lw>=0 && v[lw--]==adj[i][j]) ct++;
            else break;
        }
        s+=(sz - ct);
    }
    cout<< s << ' ' << c+s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}