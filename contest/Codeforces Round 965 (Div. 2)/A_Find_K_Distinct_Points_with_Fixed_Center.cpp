#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x, y, k;cin>>x>>y>>k;

    if(k&1) cout<< x << ' ' << y <<endl, k--;
    for(int i=1;i<=k;i+=2){
        cout<< x+i << ' ' << y-i <<endl;
        cout<< x-i << ' ' << y+i <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}