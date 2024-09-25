#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int i, int n, vector<int>&a, vector<int>&dp){
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int take = INT_MAX;
    if(i+1+a[i]<=n) take = 0 + f(i+1+a[i], n, a, dp);
    int not_take = 1 + f(i+1, n, a, dp);
    return dp[i] = min(take, not_take);
}

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<int>dp(n,-1);
    cout<< f(0, n, a, dp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}