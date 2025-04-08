#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if( n % 2 == 0) cout<< -1 <<endl;
    else{
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            a[i] = (i * (n - 1)) % n;
            if (a[i] == 0) a[i] = n;
        }
        vector<int> ans(n+1);
        for (int i = 1; i<= n;i++) {
            ans[a[i]] = i;
        }
        for (int i = 1; i<= n;i++) {
            cout<< ans[i] << " \n"[i==n];
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}