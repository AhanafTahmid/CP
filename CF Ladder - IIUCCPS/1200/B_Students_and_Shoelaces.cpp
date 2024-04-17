#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int fr[105] = {}, ans = 0;
    vector<pair<int,int>>vp;
    while(m--){
        int a,b;cin>>a>>b;
        ++fr[a];
        ++fr[b];
        vp.push_back({a,b});
    }
    
    while(1){
        vector<pair<int,int>>tmp;
        for(auto [x,y]: vp){
            if(fr[x]==1 || fr[y]==1){
                tmp.push_back({x,y});
            }
        }

        if(tmp.size()==0){
            cout<< ans <<endl;
            return;
        }
        else{
            ans++;
            for(auto [x,y]: tmp) fr[x]--, fr[y]--;
            }
        }
    }

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}