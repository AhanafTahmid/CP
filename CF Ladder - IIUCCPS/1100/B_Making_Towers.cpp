#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>ans(n+1,0);
    vector<int>found_idx(n+1,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(!ans[x])found_idx[x] = i, ans[x]++;
        else{
            ((i - found_idx[x] - 1)%2)? ans[x] : ans[x]++;
            found_idx[x] = i;
        }
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" \n"[i==n];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}