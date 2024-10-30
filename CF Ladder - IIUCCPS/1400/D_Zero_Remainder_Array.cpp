#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    map<int, int>mp;
    int mx = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%k)mp[k - x%k]++, mx = max(mx, mp[k - x%k]);
    }
    int ans = 0;
    int x = 0;    
    for(auto [x,y]: mp){
        if(y==mx) ans = (k * (y-1)) + x + 1;
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