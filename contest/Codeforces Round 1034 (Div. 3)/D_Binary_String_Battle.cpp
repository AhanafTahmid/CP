#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>> n >> k;
    string s;cin >> s;
    int ct1 = count(s.begin(), s.end(), '1');
    int ct0 = n - ct1;
    bool ok = 0;
    if( ct1 <= k ||  2*k>n ) ok = 1;
    cout<< (ok?"Alice":"Bob") << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}