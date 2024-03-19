#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int, int>> p;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        p.push_back({x,-y});
    }
    sort(p.rbegin(),p.rend());
    int v1 = p[k-1].first, v2 = p[k-1].second;
    int ans = 0;
    for(auto [x,y]: p){
        if(x==v1 && y==v2)ans++;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}