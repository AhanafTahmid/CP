#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b(n), pos(n+1, n);
    for(int &i: a) cin>>i;
    for(int i=n-1;i>=0;i--){
        b[i] = pos[a[i]];
        pos[a[i]] = i;
        //cout<< b[i] << " ";
    }

    int l = 0, r = 0, ans = 0;
    while(1) {
        int t = 0;
        for (int i = l; i <= r; i++) {
            t = max(t, b[i]);
        }
        ans++;
        if (t == n) break;
        l = r + 1;
        r = t;
    }
    cout<< ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}