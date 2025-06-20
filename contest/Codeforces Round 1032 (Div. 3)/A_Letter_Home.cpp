#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, s;cin>> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if( n == 1) cout<< abs(a[0] - s) << endl;
    else{
        int v1 = abs(a[0] - s) + abs(a[0] - a[n-1]);
        int v2 = abs(a[n-1] - s) + abs(a[n-1] - a[0]);
        cout<< min(v1, v2) << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}