#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int m;cin>>m;
    vector<int>pr1(m+1),pr2(m+1);
    vector<int>a[2];
    for(int i=1;i<=m;i++){
        int x;cin>>x;
        i==1?pr1[i] = x: pr1[i] = x + pr1[i-1];
        a[0].push_back(x);
    }

    for(int i=1;i<=m;i++){
        int x;cin>>x;
        i==1?pr2[i] = x: pr2[i] = x + pr2[i-1];
        a[1].push_back(x);
    }

    int ans = INT_MAX, mx = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<m;j++){
            mx = max(pr1[m] - pr1[j+1], pr2[j]);
            ans = min(ans, mx);
        }
    }
    cout<< (ans==INT_MAX?0:ans) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}