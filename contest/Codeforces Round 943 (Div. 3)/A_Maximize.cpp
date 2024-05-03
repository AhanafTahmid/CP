#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x;cin>>x;
    int v = 1, ans = 1;
    for(int i=1;i<x;i++){
        if(v<(__gcd(i, x) + i)){
            v = __gcd(i, x) + i;
            ans = i;
        }
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