#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, q; cin >> n >> q;
    vector<int>a(n);
    int sum = 0;
    for(int &i: a)cin>>i, sum+=i;
    sort(a.rbegin(),a.rend());
    int p[200000]={};
    for(int i=0;i<n;i++){
        if(i==0) p[i] = a[i];
        else p[i] = p[i-1] + a[i];
    }
    while(q--){
        int x;cin>>x;
        if(sum<x)cout<<-1<<endl;
        else cout<< lower_bound(p,p+n,x) - p + 1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}