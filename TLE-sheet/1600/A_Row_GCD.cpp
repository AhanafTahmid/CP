#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    int g = 0;
    for(int i=1;i<n;i++){
        g = gcd(g, abs(a[0] - a[i]));
    }

    for(int i=0;i<m;i++){
        cout<< gcd( a[0] + b[i], g) << " \n"[i==m-1];
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}