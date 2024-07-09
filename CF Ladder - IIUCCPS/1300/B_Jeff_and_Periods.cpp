#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, vector<int>>mp;
    vector<array<int, 2>>v;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        mp[x].push_back(i);
    }

    for(auto [x,y]: mp){
        map<int, int> mp2;
        int diff = 0;
        if(y.size()==1){
            v.push_back({x,diff});
            continue;
        }
        else diff = y[1] - y[0];

        for(int i=0;i<y.size()-1;i++){
            mp2[y[i+1] - y[i]]++;
        }

        if(mp2[diff] == y.size() - 1 ) v.push_back({x,diff});
    }

    cout<< v.size() <<endl;
    for(auto x: v)cout<< x[0] << ' ' << x[1] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}