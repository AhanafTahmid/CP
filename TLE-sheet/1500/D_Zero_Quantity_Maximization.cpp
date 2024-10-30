#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long double

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    map<int, int>mp;
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    
    int az = count(a.begin(),a.end(),0);
    int bz = count(b.begin(),b.end(),0);
    if(az==n && bz==0){
        cout<< 0 <<endl;
        return;
    }

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(!a[i] && !b[i])cnt++;
        else if(a[i]){
            int x = b[i]/a[i];
            mp[x]++;
        }
    }
    int ans = 0;
    for(auto [x,y]:mp) ans = max(ans, y);
    cout<< ans + cnt <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}