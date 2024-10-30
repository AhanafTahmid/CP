#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<array<int, 3>> v(n);
    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        v[i][0] = x + y;
        v[i][1] = x;
        v[i][2] = y;
    }
    sort(v.begin(),v.end(), cmp);
    for(int i=0;i<n;i++) cout<< v[i][1] << ' ' << v[i][2] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}