#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

//think of like a chess board
void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>mat(n, vector<int>(m));
    vector<int>a(n*m+1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( (i && mat[i][j] == mat[i-1][j]) || (j && mat[i][j] == mat[i][j-1])){
                a[mat[i][j]] = 2;
            }
            a[mat[i][j]] = max(a[mat[i][j]], 1LL);
        }
    }
    int ans = accumulate(a.begin(),a.end(), 0LL) - *max_element(a.begin(),a.end());
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}