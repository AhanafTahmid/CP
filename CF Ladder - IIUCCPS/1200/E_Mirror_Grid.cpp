#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1lld",&v[i][j]);
        }
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int fr[2]={};
            fr[v[i][j]]++;
            fr[v[n-1-j][i]]++;
            fr[v[j][n-1-i]]++;
            fr[v[n-1-i][n-1-j]]++;
            ans += min(fr[0], fr[1]);
        }
    }
    cout<< ans/4 <<endl;
}

int32_t main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}