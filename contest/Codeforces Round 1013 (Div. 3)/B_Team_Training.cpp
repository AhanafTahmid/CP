#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;
    vector<int>a;
    int ans = 0;
    for(int i=0;i<n;i++){
        int v;cin>>v;
        if( v >= x) ans++;
        else a.push_back(v);
    }
    sort(a.rbegin(),a.rend());
    int tot = 1;
    for(int i=0;i<a.size();i++){
        if( a[i] * tot >= x)ans++, tot = 1;
        else tot++;
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