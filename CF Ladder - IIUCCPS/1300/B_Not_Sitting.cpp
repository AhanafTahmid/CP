#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int>ans;
    auto get = [&](int i, int j){
        return max({ (abs(1-i) + abs(1-j)), (abs(1-i) + abs(m-j)), 
        (abs(n-i) + abs(1-j))  , (abs(n-i) + abs(m-j))});
    };
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans.push_back(get(i,j));
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n*m;i++)cout<< ans[i] << " \n"[i==n*m-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}