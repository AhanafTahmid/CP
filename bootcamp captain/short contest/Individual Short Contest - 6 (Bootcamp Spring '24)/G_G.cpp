#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    map<int, int> ma,mb,mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ma[a[i]] = i + 1;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        mb[a[i]] = i + 1;
    }
    
    for(int i=0;i<n;i++) mp[a[i]-b[i]]++;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans, mp[i+1] + mp[i+1-n]);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}