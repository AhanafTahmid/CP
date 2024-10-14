#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f2(char a, char b, char c){
    return (a == 'A') +  (b == 'A') + (c == 'A') >=2;
} 

int f(int i, int j,int n, string s[],map<pair<int,int>,int>&dp){
    if(i>=n) return 0;
    if( dp.count({i,j}) ) return dp[{i,j}];

    int option1 = 0;
    int option2 = 0;
    int option3 = 0;

    if(i+2<n){
        option1 = f2(s[0][i], s[0][i+1], s[0][i+2]) + f2(s[1][j], s[1][j+1], s[1][j+2] )  + f(i+3,j+3, n, s, dp);
    }

    if(i==j){
        option2 = f2(s[0][i], s[0][i+1], s[1][j]) + f(i+2,j+1, n, s, dp);
        option3 = f2(s[0][i], s[1][j], s[1][j+1]) + f(i+1,j+2, n, s, dp);
    }
    else if(i+1==j){
        option2 = f2(s[0][i], s[0][i+1], s[1][j]) + f(i+2,j+1, n, s, dp);
    }
    else if(i-1==j){
        option3 = f2(s[0][i], s[1][j], s[1][j+1]) + f(i+1,j+2, n, s, dp);
    }
    
    return  dp[{i,j}] = max({option1, option2, option3});
}

void solve(){
    int n;cin>>n;
    string s[2];cin>>s[0]>>s[1];
    //vector<vector<int>>dp(2, vector<int>(n,-1)); this would not be possible to store in vector
    map<pair<int,int>,int>dp;
    cout<< f(0, 0, n, s, dp) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}