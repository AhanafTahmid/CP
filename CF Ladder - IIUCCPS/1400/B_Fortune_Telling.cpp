#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x, y;cin>> n >> x >> y;
    vector<int>a(n);
    int o = 0;
    for(int &i: a)cin>>i, (i&1?o++:0);
    if( (x+o)%2 == y%2 )cout<< "Alice" <<endl;
    else cout<< "Bob" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}