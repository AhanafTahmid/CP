#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int dp[100000]={};

void solve(){
    int n,k;cin>>n>>k;
    int prev = 0;
    set<int>st;
    for(int i=0;i<=k;i++){
        dp[i] = pow(n, i);
        st.insert(dp[i]);
        dp[i + prev] = pow(dp[i] + prev, i);
        st.insert(dp[i]);
        //st.insert(dp[i] + prev);
        prev = dp[i];
        
    }
    for(auto x: st)cout<<x<<" ";

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}