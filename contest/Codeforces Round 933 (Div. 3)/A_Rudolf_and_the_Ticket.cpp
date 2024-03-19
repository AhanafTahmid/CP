#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(n);
    vector<int>b(m);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j]<=k) ans++;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}