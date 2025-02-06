#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 0;

    set<int>st;
    for(int i=1;i*i<=n;i++){
        if( n%i == 0 ){
            st.insert(i);
            st.insert(n/i);
        }
    }

    for(int k: st){
        int g = 0;
        for(int i=k;i<n;i++){
            g = gcd(g, a[i] - a[i - k]);
        }
        if( g != 1) ans++;
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