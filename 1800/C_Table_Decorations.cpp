#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int r,g, b;cin>>r>>g>>b;
    vector<int>a = {r, g, b};
    sort(a.begin(), a.end());
    int ans = 0;
    if( (a[1] + a[0]) * 2 >  a[2]) ans+= (a[0] + a[1] + a[2]) / 3;
    else ans += a[0] + a[1];
    cout<< ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}