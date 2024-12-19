#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int sum = 0, ok = 1, ans = 0;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        sum+= s.size();
        if(sum<=m && ok)ans++;
        else ok = 0;
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