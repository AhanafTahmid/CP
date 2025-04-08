#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    mp[0] = 3;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[5] = 1;
    int ans = 1e10;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if( mp.find(x) != mp.end() ){
            mp[x]--;
            if( mp[x] == 0)mp.erase(x);
        }
        if( mp.size() == 0){
            ans = min(ans, i);
        }
    }
    cout<< (ans==1e10?0:ans) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}