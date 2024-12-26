#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int mx = 0, cnt = 0, mn = 1e9;
int f(int ind, int n, vector<int>&a, vector<int>&dp) {
    if (ind >= n) return 0;
    
    if (dp[ind] != -1) return dp[ind];
    
    int take = a[ind] + f(ind + 2, n, a, dp);
    mx = max(a[ind], mx);
    mn = min(a[ind], mn);
    int not_take = f(ind + 1, n, a , dp);
    return dp[ind] = max(take, not_take);
}

int f2(int ind, int n, vector<int>&a, vector<int>&dp) {
    if (ind >= n) return 0;
    
    if (dp[ind] != -1) return dp[ind];
    
    int take = 1 + f2(ind + 2, n, a, dp);
    int not_take = f2(ind + 1, n, a , dp);
    return dp[ind] = max(take, not_take);
}

void solve(){
    int n;cin>>n;
    vector<int>a(n),dp(n,-1),dp2(n,-1);
    for(int &i: a)cin>>i;
    cout<< mn << ' ' << mx << ' ';
    cout<< f(0, n, a, dp) + f2(0, n, a, dp2) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}