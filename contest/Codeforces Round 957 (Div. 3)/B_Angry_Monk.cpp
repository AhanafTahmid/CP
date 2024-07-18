#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(k);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<k-1;i++){
        ans += a[i]*2 - 1;
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