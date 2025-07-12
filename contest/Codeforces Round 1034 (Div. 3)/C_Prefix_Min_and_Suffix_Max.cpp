#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    //sort(a.begin(), a.end());
    int mx = a[n-1];
    int mn = a[0];
    string ans="1";
    for(int i=1; i+1<n; i++){
        if(a[i]<mn) ans += '1';
        else ans += '0';
        mn = min(mn, a[i]);
    }
    for(int i=n-1; i>=1; i--){
        if(a[i]>mx) ans[i] = '1';
        mx = max(mx, a[i]);
    }
    ans += "1";
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}