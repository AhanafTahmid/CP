#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), in, dec;
    map<int, int>mp;
    int mx = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;
    }

    int ans = 0, tot = 0, curr = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            mp[a[i]-a[i+1]]++;
            tot++;
            a[i+1] = a[i];
        }
    }
    
    for(auto [x,y]: mp){
        ans+= ( (tot+1) *  (x - curr) );
        curr = x;
        tot-=y;
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