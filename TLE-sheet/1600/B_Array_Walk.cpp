#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int ind, int k, int z, int n, vector<int>&a, vector<vector<int>>&dp){
    if(ind == n || k == 0 || ind<0 || z<0) return 0;
    if( dp[ind][z] != -1 ) return dp[ind][z];
    int v = 0;
    v = max(v, a[ind] + f(ind-1, k-1, z-1, n, a, dp)); 
    v = max(v, a[ind] + f(ind + 1, k-1, z, n, a, dp));
    return dp[ind][z] = v;
}

void solve(){
    int n, k, z;cin>>n>>k>>z;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<vector<int>>dp(n, vector<int>(z+1, -1));
    cout<< f(1, k, z, n, a, dp) + a[0] <<endl;
}   

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}