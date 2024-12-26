#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }

    int ans = (mp[0] * (mp[0] - 1 )) / 2;
    for(int i=1;i<=10;i++) ans +=  (mp[i] * mp[-i]);

    cout << ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}