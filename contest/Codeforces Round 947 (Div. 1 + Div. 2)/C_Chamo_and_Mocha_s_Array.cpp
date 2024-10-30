#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int &i: v)cin>>i;
    int ans = min(v.back(),v[n-2]);
    for(int i=n-1;i>=2;i--){
        vector<int> tmp = {v[i],v[i-1],v[i-2]};
        sort(tmp.begin(),tmp.end());
        ans = max(ans, tmp[1]);
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