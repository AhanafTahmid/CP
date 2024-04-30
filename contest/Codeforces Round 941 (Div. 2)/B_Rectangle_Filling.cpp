#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    bool ok = 1;
    int mat[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(j && mat[i][j] != mat[i][j-1])ok = 0;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else{
        //w
        
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}