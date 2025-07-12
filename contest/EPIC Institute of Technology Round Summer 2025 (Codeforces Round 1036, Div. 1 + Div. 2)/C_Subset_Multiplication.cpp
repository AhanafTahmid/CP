#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int ans = 1;
    for(int &i: a)cin>>i;
    for(int i=0;i+1<n;i++){
        int v = a[i] / __gcd(a[i], a[i+1]);
        int v2 = __gcd(ans, v);
        ans = ans / v2 * v;
    }
    cout<< ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}