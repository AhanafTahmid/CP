#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int x, int n){
    while(n>0 && x>0) x = x/2,n--;
    return x;
}

int c(int x, int m){
    while(m>0 && x>1) x = (x+1)/2,m--;
    return x;
}

void solve(){
    int x,n,m;cin>>x>>n>>m;
    cout<< f(c(x,m),n) << ' ' << c(f(x,n), m) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}