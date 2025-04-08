#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k, x;cin>>n>>k>>x;
    vector<int> a(n), s(n);
    for(int i=0;i<n;i++)cin>>a[i];
    s[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        s[i] = s[i+1] + a[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if( s[i] >= x ) ans+=k;
        else{
            int need = x - s[i];
            int cl = (need + s[0] - 1) / s[0];
            if( k - 1 - cl >=0 ) ans += (k - 1) - cl + 1;
        }
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