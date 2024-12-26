#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<int>pr(n, 0);
    pr[0] = 0;
    for(int i=1;i<n;i++){
        pr[i] = pr[i-1] + (s[i]==s[i-1]);
    }
    int m;cin>>m;
    while(m--){
        int a,b;cin>>a>>b;
        cout<< pr[--b] - pr[--a] <<endl; 
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}