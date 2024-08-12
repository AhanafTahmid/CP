#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int k = 1, nn = n;
    
    auto get = [](int num, int base){
        int ct = 0;
        while(num>0 && num%base==0){
            ct++;
            num/=base;
        }
        return ct;
    };
    int c2 = get(n, 2);
    int c5 = get(n, 5);
    while(c2<c5 && k*2<=m)k*=2, c2++;
    while(c2>c5 && k*5<=m)k*=5, c5++;
    while(k*10<=m)k*=10;
    k = (m/k)*k;
    cout<< nn * k <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}