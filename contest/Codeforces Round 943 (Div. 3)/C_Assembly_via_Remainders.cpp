#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n-1), ans;
    for(int &i: a)cin>>i;
    int v = 1e4;
    ans.push_back(v);
    for(int i=1;i<n;i++){
        ans.push_back(ans[i-1]+a[i-1]);
    }
    for(int i=0;i<n;i++)cout<< ans[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}