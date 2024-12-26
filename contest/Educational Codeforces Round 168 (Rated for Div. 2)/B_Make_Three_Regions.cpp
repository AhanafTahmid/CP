#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<char>> mat(2, vector<char>(n));

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++)cin>>mat[i][j];
    }

    int ans = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j && j+1<n && mat[i][j]=='.'){
                if(mat[i+1][j]=='.' && mat[i][j-1]=='x' && mat[i][j+1]=='x' && mat[i+1][j-1]=='.' && mat[i+1][j+1]=='.')ans++;
            }
            else if(i==1 && j && j+1<n && mat[i][j]=='.'){
                if(mat[i-1][j]=='.' && mat[i][j-1]=='x' && mat[i][j+1]=='x' && mat[i-1][j-1]=='.' && mat[i-1][j+1]=='.')ans++;
            }
        }
    }
    cout<< ans <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}