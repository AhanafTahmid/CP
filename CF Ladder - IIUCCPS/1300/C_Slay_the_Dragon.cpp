#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int tot = 0;
    for(int &i: a)cin>>i, tot+=i;
    sort(a.begin(),a.end());
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int def,at;cin>>def>>at;

        int ans = 1e19;
        int lw = lower_bound(a.begin(),a.end(), def) - a.begin();
        //choose everything or choose nothing
        //Choose hero to increase 0 coins, in this case ai>=x
        //choose hero to increase coins, in this case lw-1
        if(lw<n) ans = max(0LL, at - tot + a[lw]);//everything is higher
        if(lw>0) ans = min(ans, (def-a[lw-1] + max(0LL, at - tot + a[lw-1])));
        cout<< ans <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}