#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    map<int, int>mp;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        mp[x]++;
    }
    int left = n - mp.size(); 
    int ans = 0;
    int ct = 1;
    bool ok = 0;
    while(1){
        ok = 0;
        int lft = left;
        for(auto &[x,y]: mp){
            if(y==0)continue;
            y--;
            ok = 1;
            
            if(ct&1 && y>1 && lft>0){
                y--;
                lft--;
            }
        }
        ct++;
        if(ok==0)break;
        else ans++;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}

