#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int power(int b,int p, int m){
    int ans = 1;
    while(p>0){
        if(p&1) ans = (ans * b)%m;
        b = (b%m * b%m)%m;
        p>>=1;
    }
    return ans;
}

void solve(){
    int b,p,m;;
    while(cin>>b>>p>>m){
        cout<< power(b,p,m) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}