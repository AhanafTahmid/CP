#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int ans = a.back();
    int v = a.back()-1, tmp ;
    for(int i=n-2;i>=0;i--){
        tmp = min(v, a[i]);
        ans+= tmp;
        v = max(0LL, tmp-1);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}