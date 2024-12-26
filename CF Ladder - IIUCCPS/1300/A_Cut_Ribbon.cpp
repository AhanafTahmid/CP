#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>a(3),dp(5000);
    for(int &i: a)cin>>i;

    sort(a.begin(),a.end());
    dp[a[0]] = dp[a[1]] = dp[a[2]] = 1;
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            if(i-a[j]>=0 && dp[i-a[j]]!=0){
                dp[i] = max(dp[i-a[j]] + 1, dp[i]);
            }
        }
        //cout<< i << ' ' << dp[i] <<endl;
    }
    cout<< dp[n] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}