#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ans = 1, ct = 0, ok = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1) ok = 1;
        if(x==0 && ok) ct++;
        if(x==1 && ct)ans*=(ct+1), ct = 0;
    }
    if(!ok) cout<< 0 <<endl;
    else cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}