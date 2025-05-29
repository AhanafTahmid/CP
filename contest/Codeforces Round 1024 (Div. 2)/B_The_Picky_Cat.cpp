#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int md = abs(a[0]);
    int m = (n+1)/2;
    int l = 0, r = 0;
    for(int i=1;i<n;i++){
        if( abs(a[i]) == md ) continue;
        else if( abs(a[i]) > md) l++;
        else r++;
    }
    if( m  <= l + 1 || m >= r + 1) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}