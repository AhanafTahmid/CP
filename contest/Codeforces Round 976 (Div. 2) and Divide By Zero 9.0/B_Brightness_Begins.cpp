#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int l = 0, r = 1e19, m;
    while(l+1<r){
        m = l + (r-l)/2;
        int v = sqrt(m);
        if(m-v<n) l = m;
        else r = m;
    }
    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}