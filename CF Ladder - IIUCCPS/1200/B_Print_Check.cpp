#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    int mat[n+1][m+1] = {};

    while(k--){
        int v,select,color; cin>> v >> select >> color;
        if(v&1){
            for(int i=1;i<=m;i++){
                mat[select][i] = color;
            }
        }
        else{
            for(int i=1;i<=n;i++){
                mat[i][select] = color;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<< mat[i][j] << ' ';
        }
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}