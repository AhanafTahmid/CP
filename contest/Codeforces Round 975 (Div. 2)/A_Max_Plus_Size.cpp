#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int ans = 0;
    for(int k=0;k<2;k++){
        int mx = 0, cnt = 0;
        for(int i=k;i<n;i+=2){
            mx = max(a[i], mx);
            cnt++;
        }
        ans = max(ans, mx+cnt);
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