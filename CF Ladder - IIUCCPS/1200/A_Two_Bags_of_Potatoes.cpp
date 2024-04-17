#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int y, k, n;cin>> y >> k >> n;
    int lim = n - y, st = 0;
    st = k - (y%k);
    if(st + y > n)cout<< -1 <<endl;
    else for(int i=st;i<=lim;i+=k)cout<< i << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}