#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int g = a[0];
    for(int x: a) g = gcd(g, x);
    int ind = -1;
    for(int i=0;i<n;i++){
        if( g != a[i] ){
            ind = i;
            break;
        }
    }
    if( ind == -1 ){
        cout<< "No" <<endl;
        return;
    }
    cout<< "Yes" <<endl;
    for(int i=0;i<n;i++){
        if( ind == i) cout<< 2 << ' ';
        else cout<< 1 << ' ';
    }
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}