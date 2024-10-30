#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>>mat(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int s = 0, mx;
    for(int k=0;k<n;k++){
        int i = k, j = 0;
        mx = 0;
        while(i<n && j<n){
            if(mat[i][j]<0) mx = max(mx, -mat[i][j]);
            i++, j++;
        }
        s+= mx;
    }

    for(int k=1;k<n;k++){
        int i = 0, j = k;
        mx = 0;
        while(i<n && j<n){
            if(mat[i][j]<0) mx = max(mx, -mat[i][j]);
            i++, j++;
        }
        s+= mx;
    }
    cout<< s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}