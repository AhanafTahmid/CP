#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b(n,1e10), p(n);
    for(int &i: a)cin>>i;
    int mn = a[0];
    //cout<< mn <<endl;
    for(int i=0;i<n;i++){
        mn = min(mn, a[i]);
        b[i] = mn;
        p[i] = i > 0 ? p[i-1] + b[i] : b[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<< b[i] << " ";
    // }
    int s = 0;
    int ans = accumulate(b.begin(), b.end(), 0LL);
    //cout<< ans <<endl;
    for(int i=0;i+1<n;i++){
        if( !i ) ans = min(ans, a[i] + a[i+1]);
        else ans = min(ans, p[i-1] + min(b[i-1], a[i] + a[i+1]));
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