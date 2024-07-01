//Take, Not take approach
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int i, int bob, vector<int>&a, vector<vector<int>>&dp){
    if(i==a.size()) return 0;
    if(dp[i][bob]!=-1) return dp[i][bob];
    int not_take = f(i+1,bob+1,a,dp);
    int take = 0;
    if(bob-a[i]>=0)take = 1 + f(i+1, bob-a[i],a,dp);
    return dp[i][bob] = max(take, not_take);
}

void solve(){
    int n;cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    vector<int>a;
    vector<vector<int>>dp(mp.size()+1,vector<int>(mp.size()+1,-1));
    for(auto [x,y]: mp)a.push_back(y);
    cout<< a.size() - f(0, 0,a,dp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}