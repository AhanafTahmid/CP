#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ans = 1e18;
    for(int i=0; i < n; i++) {
        int j = i;
        while(j+1<n && a[j] == a[j+1]) j++;
        int v = (n-1-j) * a[i] + i * a[i];
        ans = min(ans, v);
        i = j;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}