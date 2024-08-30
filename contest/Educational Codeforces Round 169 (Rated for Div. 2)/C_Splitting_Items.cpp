#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.rbegin(),a.rend());
    int asum = 0, bsum = 0, ans = 0;
    for(int i=0;i<n-(n%2);i++){
        if(i&1)bsum+=a[i];
        else asum+=a[i];
    }
    ans = max(0LL, asum - bsum - k);
    if(n%2) ans = ans + a.back();
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}