#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,a,b;cin>>n>>a>>b;
    int g = __gcd(a,b), ans = 0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i] = x%g;
    }
    sort(v.begin(),v.end());
    ans = v[n-1] - v[0];
    for(int i=0;i<n-1;i++){
        int d = v[n-1] - v[i];
        int d2 = (v[i]+g) -  v[i+1];
        // if( d > d2 ) v[i] = (v[i]+g);
        ans = min(ans, d2);
    }
    //sort(v.begin(),v.end());
    // for(int x: v)cout << x << ' ';
    // cout<<endl;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}