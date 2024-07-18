#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1000000007;

void solve(){
    int n;cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    int st = 1, ans = 0, r = 1;
    for(auto [x,y]:mp){
        r*=y;
        if(st==x){
            r%=md;
            ans+=r,st++;
            ans%=md;
        }
        else break;
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