#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int mx = 0,endi=-1;
    for(int i=0;i<n;i++){
        int ct = 0;
        for(int j=0;j<m;j++){
            ct+= (mat[i][j] == '#');
        }
        if(mx<ct){
            mx = ct;
            endi = i;
        }
    }

    int st = 0, e = 0;
    for(int j=0;j<m;j++){
        if(mat[endi][j]=='#' && !st){
            st = j;
            e = j;
        }
        else if(mat[endi][j]=='#') e = j;
    }
    
    cout<< endi+1 << ' ' << ((st+e)/2) + 1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}