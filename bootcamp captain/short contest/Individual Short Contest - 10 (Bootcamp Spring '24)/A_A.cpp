#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int x,y,h;cin>>x>>y>>h;
    int ct = 0;
    if(h>=y)x-=h,ct++;
    if(x<=0) cout<< ct <<endl;
    else cout<< (x+y-1)/y + ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}