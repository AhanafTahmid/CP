#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int ind, int k, int n,vector<int>&b,vector<int>&c, vector<vector<int>>&dp){
    if(ind == n) return 0;
    if(dp[ind][k]!=-1) return dp[ind][k];
    int not_take = f(ind+1, k, n, b, c, dp);
    int take = 0;
    if( k - b[ind] >= 0 ){
        take = c[ind] + f(ind+1, k - b[ind], n, b, c, dp);
    }
    return dp[ind][k] = max(not_take, take);
}

void solve(){
    int n, k;cin>>n>>k;
    vector<int>b(n), c(n), d(1001, 1001);
    for(int &i: b)cin>>i;
    for(int &i: c)cin>>i;

    d[1] = 0;
    for(int i=1;i<1001;i++){
        for(int j=1;j<=(i/2) + 1;j++){
            int v = i + i/j;
            if(v<1001)d[v] = min(d[v], d[i] + 1);
        }
    }
    for(int i=0;i<n;i++){
        b[i] = d[b[i]];
    }
    int s = accumulate(b.begin(), b.end(), 0LL);
    k = min(k, s);

    vector<vector<int>>dp(n, vector<int>(k+1, -1));
    cout<< f(0, k, n, b, c, dp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}