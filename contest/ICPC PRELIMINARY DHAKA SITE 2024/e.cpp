#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, p;cin>>n>>p;
    if(n==1){
        cout<< (p==2?"Oddius":"Evenius") <<endl;
    }
    else cout<< (n%4!=1 && p==1?"Oddius":"Evenius") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout<< "Case " << i << ": ";
        solve();
    }
    return 0;
}