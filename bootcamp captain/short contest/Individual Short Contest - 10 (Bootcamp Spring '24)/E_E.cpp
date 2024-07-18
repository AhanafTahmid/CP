#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x,y,a,b;cin>>x>>y>>a>>b;
    int ans = 0;
    y--;
    if(a == 1 || b == 1){
        y-=x;
        if(y<=0) cout<< 0 <<endl;
        else cout<< y <<endl;
        return;
    }

    while(1){
        int ta = x*a;
        
        ans++;
        x = ta;
        if(ta>b || ta>y)break;
    }
    if(x<=y) y-=x;
    cout<< (y/b) + ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}