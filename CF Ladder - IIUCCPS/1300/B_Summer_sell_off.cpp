#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,f;cin>>n>>f;
    vector<pair<int,int>>vp,vp2;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        vp.push_back({x,y});
        if(x<y)vp2.push_back({min(x, y-x), i});
        ans+= min(x,y);
    }
    sort(vp2.rbegin(),vp2.rend());
    for(auto [x,y]: vp2){
        if(!f)break;
        f--;
        ans+=x;
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