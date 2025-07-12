#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin >> n >> m;
    vector<int> a(n), b(m), f(m - 1);
    for(int i = 0;i < n;++i) cin >> a[i];
    for(int i = 0;i < m;++i) cin >> b[i];

    if(m == 1){
        cout << max(n - m + 1,0LL) << endl;
        return;
    }
    
    for(int i = 0;i + 1 < n;++i)
        a[i] = a[i + 1] - a[i];
    for(int i = 0;i + 1 < m;++i)
        b[i] = b[i + 1] - b[i];
    
    f[0] = 0;
    
    for(int i = 1,k = 0;i + 1 < m;++i){
        while(k > 0 && b[k] != b[i]) k = f[k - 1];
        if(b[k] == b[i]) ++k;
        f[i] = k;
    }
    
    int ans = 0;
    
    for(int i = 0,k = 0;i + 1 < n;++i){
        while(k > 0 && b[k] != a[i]) k = f[k - 1];
        if(b[k] == a[i]) ++k;
        
        if(k == m - 1){
            ++ans;
            k = f[k - 1];
        }
    }
    
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}