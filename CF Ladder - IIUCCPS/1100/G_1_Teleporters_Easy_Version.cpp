#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, c;cin>>n>>c;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x + i + 1;
    }
    sort(a.begin(),a.end());
    vector<int> pr(n);
    pr[0] = a[0];
    for(int i=1;i<n;i++){
        pr[i] = pr[i-1] + a[i];
    }
    int lw = lower_bound(pr.begin(),pr.end(),c) - pr.begin();
    if(pr[lw]==c)cout<<lw+1<<endl;
    else cout<< lw <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}