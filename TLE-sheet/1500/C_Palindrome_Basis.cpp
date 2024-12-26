#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9+7;

int f(int i, int target,vector<int>&arr, vector<vector<int>>&dp){
    if(i==0){
        if(target%arr[0]==0) return 1;
        else return 0;
    }
    if(target == 0) return 1;
    if(target < 0) return 0;
    if(dp[i][target]!=-1) return dp[i][target];
    int not_taken = f(i-1,target,arr,dp);
    int taken = f(i, target-arr[i],arr, dp);
    return dp[i][target] = (taken + not_taken)%md;
}

void solve(vector<int>&a){
    int target;cin>>target;
    vector<vector<int>>dp(500, vector<int>(4e4+1, -1));
    cout<< f(a.size() - 1, target, a, dp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    vector<int>a;
    for(int i=1;i<=4e4;i++){
        string s = to_string(i);
        string s2 = s;
        reverse(s2.begin(),s2.end());
        if( s == s2 ) a.push_back(i);
    }
    while(t--)solve(a); 
    return 0;
}