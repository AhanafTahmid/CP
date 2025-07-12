#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin >> n;
    vector<int> a(n);
    vector<vector<int>> sparse(20, vector<int>(n));   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i) {
            sparse[0][i-1] = a[i] - a[i-1];
            if (sparse[0][i-1] < 0)
                sparse[0][i-1] *= -1;
        }
    }
    sparse[0][n-1] = 1;
    
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < n; j++)
            if (j + (1<<i) >= n)
                sparse[i+1][j] = 1;
            else 
                sparse[i+1][j] = __gcd(sparse[i][j], sparse[i][j + (1<<i)]);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        long long best = 0;
        int curi = i; 
        for (int j = 19; j >= 0; j--) {
            long long g = __gcd(best, sparse[j][curi]);
            if (g != 1) {
                best = g;
                curi += 1<<j;
            }
        }
        ans = max(ans, curi - i + 1);
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