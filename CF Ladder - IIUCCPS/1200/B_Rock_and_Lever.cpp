#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    int ans = 0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        mp[32 - __builtin_clz(x)]++;
    }
    for(auto [x,y]: mp) if(y>=2) ans += (y * (y-1)) / 2;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}