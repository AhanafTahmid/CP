#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x, y; cin>>n>>x>>y;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(), a.end());
    int ans = 0;
    int s = accumulate(a.begin(),a.end(), 0LL);
    for(int i=0;i<n;i++){
        if( s - a[i] < x)continue;
        int v1 = s - a[i] - x;
        int v2 = 0;
        if( s - a[i] > y) v2 = s - a[i] - y;
        // if(a[i]<=x) l = x - a[i];
        // if(a[i]<=y) r = y - a[i];
        int up2 = upper_bound(a.begin(),a.end(), v1) - a.begin();
        int up = upper_bound(a.begin(),a.end(), v2-1) - a.begin();
        --up2;
        if(up<=up2){
            ans+= (up2-up+1);
            if(i>=up && i<=up2)ans--;
        }
        //cout<< a[i] << ' ' << l << ' ' << r << ' ' << lw << ' ' << lw2 <<endl;
    }
    cout<< ans/2 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}