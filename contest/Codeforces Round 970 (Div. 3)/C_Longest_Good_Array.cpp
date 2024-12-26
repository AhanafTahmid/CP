#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a, b;cin>>a>>b;
    int l = 0, r = (b-a)+100,m, la = b-a;
    while(l+1<r){
        m = (l+r)>>1;
        int v = (m * (m + 1))/2;
        if ( v<=la ) l = m;
        else r = m;
    }
    cout<< l + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}