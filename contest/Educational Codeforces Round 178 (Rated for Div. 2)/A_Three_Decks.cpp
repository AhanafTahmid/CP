#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a, b, c;cin>>a>>b>>c;
    if( (a+b+c) % 3 != 0 || a + c < 2 * b) cout<< "NO" << endl;
    else cout<< "YES" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}