#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    double nn = n;
    int ans = ceil(nn/15) * 3;
    if( n % 15 == 0 && n % 5 == 0 && n % 3 == 0) ans++; 
    else if( n % 15 == 1 && n % 5 == 1 && n % 3 == 1) ans--; 
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}