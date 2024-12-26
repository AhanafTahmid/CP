#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        mp[x] = i;
    }
    for(auto [x,y]: mp){
        if(mp[y]==x){
            cout<< 2 <<endl;
            return;
        }
    }
    cout<< 3 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}