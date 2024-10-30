#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int dp[10000];
int rec(int n){
    
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = rec(n-1) + rec(n/2) + rec(n/3);
}

void solve(){
    int n;
    cin>> n;
    memset(dp,-1,sizeof(dp));
    cout<< rec(n) <<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}