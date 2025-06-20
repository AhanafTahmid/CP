#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    vector<array<int,2>>a;
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            mx = max(mx,mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == mx){
                a.push_back({i+1, j+1});
            }
        }
    }
    //cout<< mx <<endl;
    if(a.size() == 0) cout << mx <<endl;
    else{
        for(int i=1;i<=n;i++){
            set<int>st;
            for(auto x: a){
                if( x[0] == i ) continue;
                else st.insert(x[1]);
            }
            if(st.size() <= 1){
                cout<< mx - 1 <<endl;
                return;
            }
        }
    }
    //cout<< mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}