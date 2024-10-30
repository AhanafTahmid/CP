#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int ans = 1;
    int l = max(a,c);
    int r = min(b,d);
    if(l>r){
        cout<< ans <<endl;
        return;
    }
    ans = r-l;
    if(min(a,c) < l ) ans++;
    if(max(b,d) > r ) ans++;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}