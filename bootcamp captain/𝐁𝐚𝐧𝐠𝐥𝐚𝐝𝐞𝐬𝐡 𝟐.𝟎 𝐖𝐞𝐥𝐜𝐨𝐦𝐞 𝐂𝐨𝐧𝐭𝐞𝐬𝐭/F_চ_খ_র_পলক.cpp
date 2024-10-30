#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<long double, int>>v;
    for(int i=1;i<=n;i++){
        long double  a,b;cin>>a>>b;
        long double x = a / (a+b);
        v.push_back({x, -i});
    }
    sort(v.rbegin(),v.rend());
    for(auto [x,y]: v) cout << -y << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}