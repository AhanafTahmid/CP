#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int p,q,l,r;cin>>p>>q>>l>>r;
    vector<pair<int, int>>a,b;
    for(int i=1;i<=p;i++){
        int x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    for(int i=1;i<=q;i++){
        int x,y;cin>>x>>y;
        b.push_back({x,y});
    }
    int ans = 0;

    for(int i=l;i<=r;i++){
        bool f = 1;
        for(auto [x,y]:a){
            for(auto [s,t]:b){
                if((s+i>=x && s+i<=y) || (t+i>=x && t+i<=y) )ans++, f = 0;
                if(!f)break;
            }
            if(!f)break;
        }
    }
    cout << ans <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}