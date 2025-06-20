#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, k; cin >> n >> m >> k;
    int l = 0;
    int r = n * m + 1;
    while(l + 1 < r){
        const int mid = (l + r) / 2;
        int count = 0;
        for(int i = 1; i <= n; ++i) count += min(m, mid / i);
        if(count >= k) r = mid;
        else  l = mid;
    }
    cout << r <<  endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}