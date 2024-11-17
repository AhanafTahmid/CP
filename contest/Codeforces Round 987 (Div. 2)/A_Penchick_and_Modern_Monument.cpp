#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int mx = 1, ct = 1;
    for(int i=0;i+1<n;i++){
        if(a[i]==a[i+1]) ct++;
        else ct = 1;
        if(ct>=mx) mx = ct;
    }
    cout<< n - mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}