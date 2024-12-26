#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int ind,int n, vector<int>&a, vector<int>&dp){
    if(ind>n) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int ct = 0;
    for(int j=2*ind;j<=n;j+=ind){
        if(a[ind]<a[j]){
            ct = max(ct, 1+f(j, n, a, dp));
        }
    }
    return dp[ind] = ct;
}

void solve(){
    int n;cin>>n;
    vector<int>a(n+1),dp(n+1, -1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=i+i;j<=n;j+=i){
            if(a[i] < a[j]) dp[j] = max(dp[j], 1+dp[i]);
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans = max(ans, dp[i]);
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