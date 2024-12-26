#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    bool x = 0, y = 0;
    for(int i=1;i+1<n;i++){
        if(s[i]=='p') x = 1;
        if(s[i]=='s') y = 1;
    }
    if(s[0]=='p') x = 1;
    if(s[n-1]=='s') y = 1;
    cout<< (x & y? "NO": "YES") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}