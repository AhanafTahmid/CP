#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans = 0;
    int dp[200000]={};
    for(int i=n;i>=1;i--){
        if((a[i] + i)<=n) dp[i] = (dp[i] + dp[a[i] + i]);
        else dp[i] = a[i] + i;
        //cout<< dp[i] <<" = "<<dp[i]-i<<" = "<<i<<endl;
        ans = max(ans, dp[i]-i);
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