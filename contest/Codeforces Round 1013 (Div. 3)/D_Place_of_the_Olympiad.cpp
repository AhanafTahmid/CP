#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, k;cin>>n>>m>>k;
    int l = 0, r = m, ans = r, mid;
    while(l+1<r){
        mid = (l+r)/2;
        int v = ( (m + 1) * mid ) / (mid + 1);
        //cout<< m + 1 << ' ' << mid << ' ' <<endl;
        if (n*v >= k) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}
