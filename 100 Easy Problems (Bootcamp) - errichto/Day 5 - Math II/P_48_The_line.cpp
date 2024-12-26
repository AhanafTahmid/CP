#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    ll n, md;
    cin>> n >> md;
    int f[1000000]={};
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for(ll i=3;i<=n;i++){
        f[i] = (f[i-1] + f[i-2])%md;
        //cout<< f[i] <<endl;
    }
    cout<< f[n] <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}