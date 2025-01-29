#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l = a[0], g;
    for(int i=1;i<n;i++){
        l = lcm(l, a[i]);
    }
    g = l;
    for(int i=0;i<n;i++){
        g = gcd(g, a[i]);
    }
    cout<< l <<endl;
    cout<< g <<endl;
    cout<< lcm(40, 20) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}