#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>p(n,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        i==0?p[i] = x: p[i] = p[i-1] + x;
    }
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        cout<< lower_bound(p.begin(),p.end(),x) - p.begin() + 1 <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}