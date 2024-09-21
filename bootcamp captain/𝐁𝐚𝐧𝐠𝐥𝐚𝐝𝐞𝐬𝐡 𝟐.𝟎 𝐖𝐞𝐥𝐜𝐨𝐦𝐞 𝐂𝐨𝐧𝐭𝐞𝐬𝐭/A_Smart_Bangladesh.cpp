#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int>a(3);cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    if( a[2] + a[1] >= 10) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}