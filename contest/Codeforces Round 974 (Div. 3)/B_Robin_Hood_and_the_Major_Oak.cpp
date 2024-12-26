#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int v = 0;
    if(n<=k){
        v = (n * (n+1)) / 2;
        if(v&1) cout<< "NO" <<endl;
        else cout<<"YES" <<endl;
    }
    else{
        v = (k * (k+1)) / 2;
        v+= (n*k-k*k);
        if(v&1) cout<< "NO" <<endl;
        else cout<<"YES" <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}