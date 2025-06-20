#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            dp[i][i + len - 1] = min(dp[i][i + len - 2] + a[i + len - 1] - a[i], dp[i + 1][i + len - 1] + a[i + len - 1] - a[i]);
        }
    }

    cout << dp[0][n - 1] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)solve();
    return 0;
}