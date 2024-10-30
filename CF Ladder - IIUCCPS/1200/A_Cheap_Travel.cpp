#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int double

void solve(){
    int n, m, a, b;cin>>n>>m>>a>>b;
    int v1 = (n * a);
    int v2 = (n * ceil( b/m ));
    cout<< min(v1, v2) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}