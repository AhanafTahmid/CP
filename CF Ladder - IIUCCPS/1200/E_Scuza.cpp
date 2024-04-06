#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    vector<int>a(n);
    vector<int>prfx(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        i ? a[i] = max(x,a[i-1]) : a[i] = x;
        i ? prfx[i] = prfx[i-1] + x : prfx[i] = x;
    }
    while(q--){
        int x;cin>>x;
        int up = upper_bound(a.begin(),a.end(), x) - a.begin() - 1;
        cout<< ((up==-1)?0:prfx[up]) <<' ';
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