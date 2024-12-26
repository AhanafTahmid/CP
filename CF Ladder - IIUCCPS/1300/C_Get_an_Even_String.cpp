#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<int>dp(n+1,0), pos(30,-1);
    for(int i=0;i<n;i++){
        dp[i+1] = dp[i]; 
        if(pos[s[i]-'a']!=-1){
            dp[i+1] = max(dp[i+1], 2 + dp[pos[s[i]-'a']]);
        }
        pos[s[i]-'a'] = i;
    }
    cout<< n - dp[n] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}