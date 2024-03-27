#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    int mat[1005][1005]={};
    int ct = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
        }
    }
    int req = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(mat[i][j]!=mat[n+1-i][n+1-j])req++;
        }
    }
    req>>=1;    
    if(n&1 && req<=k || (!(n&1) && !((k-req)&1)) && req<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}