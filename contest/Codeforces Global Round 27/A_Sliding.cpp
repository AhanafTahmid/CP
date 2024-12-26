#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, r, c;cin>>n>>m>>r>>c;
    int ex = m - c;
    int v = (1 + (m - 1)) + m - 1;
    cout<< ex + v * (n - r) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}