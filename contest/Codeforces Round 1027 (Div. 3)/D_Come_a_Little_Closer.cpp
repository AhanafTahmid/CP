#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n), b(n), c(n), d(n);
    map<int, int>mp, mp2;
    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        a[i] = x, c[i] = x;
        b[i] = y, d[i] = y;
        mp[x]++;
        mp2[y]++;
    }
    if( n == 1){
        cout<< 1 <<endl;
        return;
    }
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    int ans = (c[n-1] - c[0] + 1) *  (d[n-1] - d[0] + 1);
    //cout<< ans <<endl;
    for(int i=0;i<n;i++){
        int x, xx;
        if( a[i] == c[0] && mp[c[0]] == 1) x = c[1];
        else x = c[0];
        if( a[i] == c[n-1] && mp[c[n-1]] == 1) xx = c[n-2];
        else xx = c[n-1];

        int y, yy;
        if( b[i] == d[0] && mp2[d[0]] == 1) y = d[1];
        else y = d[0];
        if( b[i] == d[n-1] && mp2[d[n-1]] == 1) yy = d[n-2];
        else yy = d[n-1];
        
        int tans = (xx - x + 1) * (yy - y + 1);
        if( tans == n - 1) tans += min((xx - x + 1) , (yy - y + 1));
        ans = min(ans, tans);
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