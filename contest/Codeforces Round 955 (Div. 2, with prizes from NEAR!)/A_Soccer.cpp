#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int ct = (a<=b && d<=c) | (b<=a && c<=d);
    if(ct)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}