#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, s, m;cin>>n>>s>>m;
    vector<pair<int, int>>vp;
    vp.push_back({0, 1});
    for(int i=0;i<n;i++){
        int l, r;cin>>l>>r;
        vp.push_back({l,r});
    }
    sort(vp.begin(),vp.end());
    vp.push_back({m, 0});
    n = vp.size();
    vector<int>v;
    v.push_back(vp[1].first - vp[0].second + 1);
    for(int i=1;i<n-1;i++){
        v.push_back(vp[i+1].first - vp[i].second);
    }
    sort(v.begin(),v.end());
    n = v.size();
    int lw = lower_bound(v.begin(),v.end(), s) - v.begin();
    if(lw<n) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}