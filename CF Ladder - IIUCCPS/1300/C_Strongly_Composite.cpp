#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        for(int i=2;i*i<=x;i++){
            while(x%i==0){
                mp[i]++;
                x/=i;
            }
        }
        if(x>1)mp[x]++;
    }
    int ans = 0, r = 0;
    for(auto [x,y]: mp){
        ans+=(y/2);
        r+=y&1;
    }
    ans+=(r/3);
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}