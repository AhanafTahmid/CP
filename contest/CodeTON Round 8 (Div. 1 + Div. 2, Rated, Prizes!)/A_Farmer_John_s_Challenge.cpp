#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n==k){
        for(int i=1;i<=n;i++) cout<<1<<" \n"[i==n];
    }
    else if(n>k && k==1){
        for(int i=1;i<=n;i++) cout<<i<<" \n"[i==n];
    }
    else cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}