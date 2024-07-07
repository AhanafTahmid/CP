#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l, r;cin>>l>>r;
    int ll = sqrt(l) + 1 , rr = sqrt(r)-1;
    int d = sqrt(l);    
    if(d*d == l) ll = d;

    int ans = (rr - ll + 1)*3;
    if(ll>rr) ans = 0;

    map<int, int>mp;
    for(int i=(ll*ll)-1;i>=l;i-=d){
        if(i>=l && i<=r && mp[i]==0)ans++,mp[i]=1;
    }

    int up = sqrt(r);
    for(int i=up*up;i<=r;i+=up){
        if(i>=l && i<=r && mp[i]==0)ans++,mp[i]=1;
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