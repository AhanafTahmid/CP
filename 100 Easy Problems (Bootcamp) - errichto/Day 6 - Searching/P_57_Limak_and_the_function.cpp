#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

ll check(ll n, ll mid){
    ll val = mid*mid + 100*mid + (mid/3);
    return val<=n;
}

void solve(){
    ll n;
    cin>>n;
    ll l = 0, r = INT_MAX, m;
    while(l+1<r){
        m = (l+r)>>1;
        if( check(n,m) ) l = m;
        else r = m;
    }
    cout<< l <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}