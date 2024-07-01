#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s1, s2;cin>>s1>>s2;
    int n = s1.size(), m = s2.size(), mx = 0;
    vector<vector<int>>dp(n+1, vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            mx = max(dp[i][j], mx);
        }
    }
    cout<< s1.size() + s2.size() - mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}