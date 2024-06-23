#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int mn = INT_MAX, mx = -1;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mn = min(x,  mn);
        mx = max(x,  mx);
        mp[x]++;
    }
    if(mn==mx) cout<< mx - mn << ' ' << (mp[mx]*(mp[mx]-1))/2 <<endl;
    else cout<< mx - mn << ' ' << mp[mx] * mp[mn] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}