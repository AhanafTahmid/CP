#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    char mat[105][105];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char ch;cin>>ch;
            if(ch=='-') mat[i][j] = ch;
            else if((i+j)%2==0)mat[i][j] = 'B';
            else mat[i][j] = 'W';
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<< mat[i][j];
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