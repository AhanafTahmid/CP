#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    int mx = 0, s = 0;
    for(int &i: a)cin>>i, mx = max(mx, i), s += i;
    for(int i=n;i>=1;i--){
        int v = (s+k)/i;
        if( i*v >= s && v>=mx ){
            cout<< i <<endl;
            return;
        }
    }
    cout<< 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}