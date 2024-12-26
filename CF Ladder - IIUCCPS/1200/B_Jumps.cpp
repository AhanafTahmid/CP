#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int st = 0;
    while( (st * (st + 1))/2 < n ) st++;
    cout<< ( (st * (st + 1))/2 == n + 1 ?++st: st) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}