#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int ans = 0;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x = x & x;
        cout<< x <<' ';
        x = x ^ x;
        cout<< x <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}