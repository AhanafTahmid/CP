#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n<k*k)cout<<"NO"<<endl;
    else if(n%2!=k%2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    cout<< ((n&1)^(k&1)) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}