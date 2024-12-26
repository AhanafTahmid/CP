#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    ll n, x;
    cin>> n >> x;
    ll ans = 0;
    for(ll i=1;i<=min(n,x);i++){
        if(i*n>=x && x%i==0) ans++;
    }
    cout<< ans <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}