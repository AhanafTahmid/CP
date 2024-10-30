#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x,y,k;cin>>x>>y>>k;
    if(x== 0 && y==0)cout<< 0 <<endl;
    else if(x== 0 || y==0) {
        int v = max(x,y);
        v = (v+k-1)/k;
        v = v * 2;
        if(max(x,y)==x) v--;
        cout<< v <<endl;
    }
    else{
        x = x/k + (x%k!=0);
        y = y/k + (y%k!=0);
        int v = 0;
        if(x>y) v--;
        v+= x + y +  max(x,y) - min(x,y);
        cout<< v <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}