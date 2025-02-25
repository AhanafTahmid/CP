#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n), b(m);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    sort(b.begin(), b.end());
    int p = -1e10;
    for(int i=0;i<n;i++){
        int lw = lower_bound(b.begin(),b.end(), p + a[i]) - b.begin();
        int p2 = 1e10;
        if(a[i] >= p) {
            p2 = a[i];
        }
        p = p2;
        if( lw < m ){
            p = b[lw] - a[i];
        }
        if( min(p, p2) == 1e10 ){
            cout<< "NO" <<endl;
            return;
        }
        p = min(p, p2);
    }
    cout<< "YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}