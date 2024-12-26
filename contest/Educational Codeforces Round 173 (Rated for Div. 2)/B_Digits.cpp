#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, d;cin>>n>>d;
    cout<< 1 << ' ';
    if(n>=3 || d%3==0) cout<< 3 << ' ';
    if(d%5==0) cout<< 5 << ' ';
    if(n>=3 || d%7==0) cout<< 7 << ' ';
    if(n>=6 || d%9==0) cout<< 9 << ' ';
    else{
        int v = 1;
        for(int i=1;i<=n;i++){
            v*=i;
        }
        v*=d;
        if( v % 9 == 0) cout<< 9 << ' ';
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}