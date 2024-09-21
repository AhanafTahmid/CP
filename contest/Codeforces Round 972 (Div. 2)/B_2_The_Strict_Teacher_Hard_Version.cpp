#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, q;cin>>n>>m>>q;
    vector<int>a(m);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    while(q--){
        int x; cin>>x;
        int lw = lower_bound(a.begin(),a.end(), x) - a.begin();
        //dtt
        if( lw == 0 && a[lw]!= x) {
            cout<< a.front() - 1 <<endl;
        }
        //ttd
        else if(lw==m){
            cout<< n - a.back() <<endl;
        }
        //tdt
        else{
            int v = (a[lw] - a[lw-1]);
            cout<< v/2 <<endl;
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