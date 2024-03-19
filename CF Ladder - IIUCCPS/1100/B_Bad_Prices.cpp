#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int mn = a[n-1], ans = 0;
    for(int i=n-2;i>=0;i--){
        if(a[i]<=mn) mn = a[i];
        else ans++;
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