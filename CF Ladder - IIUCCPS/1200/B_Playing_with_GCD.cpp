#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n), b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i] = x;
    }
    for(int i=0;i<n-1;i++){
        b.push_back( lcm(a[i], a[i+1]) );
    }
    b.push_back( lcm(a.front(), a.back()) );
    for(int i=0;i<n;i++){
        if(__gcd(b[i],b[i+1]) != a[i] ){
            cout<< "NO" <<endl;
            return;
        }
    }
    cout<< "YES" <<endl; 
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}