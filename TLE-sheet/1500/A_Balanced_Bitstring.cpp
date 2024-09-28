#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int q = 0, z = 0, o = 0, mx = 0, half = k/2;
    for(int i=0;i+k<n;i++){
        if(a[i]=='1' && a[i+k]=='?') a[i+k]='1';
        else if(a[i]=='0' && a[i+k]=='?') a[i+k]='0';
    }

    for(int i=0;i<k;i++){
        if(s[i]=='?') q++;
        if(s[i]=='0') z++;
        if(s[i]=='1') o++;
        if()
    }

    // for(int i=0;i<min(n,k);i++){
    //     if(s[i]=='?') q++;
    //     if(s[i]=='0') z++;
    //     if(s[i]=='1') o++;
    // }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}