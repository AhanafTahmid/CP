#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int w = 1, h = 1;
    for(int i=1;i<=n;i++){
        int x,y;cin>>x>>y;
        w = max(x, w);
        h = max(y, h);
    }
    cout<< 2 * (w+h) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}