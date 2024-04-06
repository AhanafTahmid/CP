#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int double

void solve(){
    int n, l;cin>>n>>l;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    int ans = max(a.front(), l - a.back()), prev = a.front();
    for(int i=1;i<n;i++){
        ans = max(ans, (a[i] - prev)/2);
        prev = a[i];
    }
    cout<< fixed << setprecision(10) << ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}