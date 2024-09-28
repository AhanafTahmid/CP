#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int i, int n, vector<int>&a, vector<vector<int>>&dp, int person){
    if(i>=n) return 0;
    if(dp[i][person]!=-1) return dp[i][person];
    int one = 0, two = 0, ans = INT_MAX;

    if(person==1){
        int v1 = (a[i]==1);
        one = v1 + f(i+1, n, a, dp, 0);
        int v2 = (a[i]==1) + (a[i+1]==1);
        two = v2 + f(i+2, n, a, dp,0);
    }
    else{
        one = 0 + f(i+1, n, a, dp,1);
        two = 0 + f(i+2, n, a, dp,1);
    }
    
    return dp[i][person] = ans = min(one, two);;
}

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<vector<int>>dp(n,vector<int>(2,-1));

    for(int &i: a)cin>>i;
    cout<< f(0, n, a, dp, 1) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}