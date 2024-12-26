#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int nn = n, i = 0, ans = 0;
    if(k==1){
        cout<< n <<endl;
        return;
    }
    if(n<k){
        cout<< n <<endl;
        return;
    }
    while(n!=0){
        if(n%k!=0) ans+= (n%k);
        n/=k;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}