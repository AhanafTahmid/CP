#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    vector<int>a(n), intell(m+1), strn(m+1);
    for(int &i: a)cin>>i;
    vector<vector<int>>dp(m+1, vector<int>(m+1, 0));

    int tot = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            tot++;
            for(int j=1;j<=m;j++){
                intell[j]+= intell[j-1];
                strn[j]+= strn[j-1];
            }
            for(int j=0;j<tot;j++){
                int v = tot-1-j;
                dp[j+1][v] = max(dp[j+1][v], dp[j][v]+strn[j]+intell[v]);
                dp[j][v+1] = max(dp[j][v+1], dp[j][v]+strn[j]+intell[v]);
            }
            for(int j=1;j<=m;j++){
                intell[j] = 0;
                strn[j] = 0;
            }
        }
        else if(a[i]>0) intell[a[i]]++;
        else if(a[i]<0) strn[-a[i]]++;
    }

    for(int j=1;j<=m;j++){
        intell[j]+=intell[j-1];
        strn[j]+=strn[j-1];
    }
    for(int j=0;j<=tot;j++){
        int v=tot-j;
        dp[j][v]+=strn[j]+intell[v];
    }

    int ans=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j+i<=m;j++) ans=max(dp[i][j],ans);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}