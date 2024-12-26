#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int v = 1, ct = 0;
    if(n<=3){
        cout<< 1 <<endl;
        return;
    }

    while(1){
        n/=4;
        ct++;
        if(n<=3)break;
    }
    cout<< (1LL<<ct) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}