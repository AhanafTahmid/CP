#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ans = 0, ct = 0, j;
    for(int i=0;i<n;i++){
        if(++ct==a[i]) ans++, ct = 0;
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