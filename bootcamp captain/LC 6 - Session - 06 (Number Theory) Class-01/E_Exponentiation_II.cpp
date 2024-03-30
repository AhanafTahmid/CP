#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9+7;

int power(int a,int b, int md){
    int ans = 1;
    while(b>0){
        if(b&1) ans = (ans * a)%md;
        a = (a * a)%md;
        b>>=1;
    }
    return ans;
}

void solve(){
    int a,b,c;cin>>a>>b>>c;
    cout<< power(a, power(b,c, md-1), md) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}