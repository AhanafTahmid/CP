#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    int ans = 0;
    for(int i=2;i<n;i++){
        for(int l = 0; l < i - 1; l++){
            int up = upper_bound(a.begin() + l + 1, a.begin() + i, max(a[i], a[n-1] - a[i]) - a[l]) - a.begin();
            ans += (i - up);
        }
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