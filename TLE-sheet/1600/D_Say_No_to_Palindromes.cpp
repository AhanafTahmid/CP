#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    string s;cin>>s;
    vector<vector<int>>dp(n+1, vector<int>(6));
    //abc
    //bac
    //bca
    //cab
    //acb
    //cba
    vector<char> c0 = {'a','b','c'};
    vector<char> c1 = {'b','a','c'};
    vector<char> c2 = {'b','c','a'};
    vector<char> c3 = {'c','a','b'};
    vector<char> c4 = {'a','c','b'};
    vector<char> c5 = {'c','b','a'};
    for(int i=0;i<n;i++){
        dp[i+1][0] = dp[i][0] + (s[i]!=c0[i%3]);
        dp[i+1][1] = dp[i][1] + (s[i]!=c1[i%3]);
        dp[i+1][2] = dp[i][2] + (s[i]!=c2[i%3]);
        dp[i+1][3] = dp[i][3] + (s[i]!=c3[i%3]);
        dp[i+1][4] = dp[i][4] + (s[i]!=c4[i%3]);
        dp[i+1][5] = dp[i][5] + (s[i]!=c5[i%3]);
    }
    
    for(int i=0;i<m;i++){
        int l, r;cin>>l>>r;
        int ans = 1e9;
        ans = min({dp[r][0]-dp[l-1][0],dp[r][1]-dp[l-1][1],dp[r][2]-dp[l-1][2],
        dp[r][3]-dp[l-1][3], dp[r][4]-dp[l-1][4],dp[r][5]-dp[l-1][5]});
        cout<< ans <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}