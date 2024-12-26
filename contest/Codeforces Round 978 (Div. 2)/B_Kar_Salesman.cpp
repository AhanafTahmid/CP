#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.rbegin(),a.rend());
    int l = *max_element(a.begin(),a.end()) - 1, r = 1e18, m;
    int s = accumulate(a.begin(),a.end(),0LL);
    while(l+1<r){
        m = (l+r)>>1;
        if( (s+m-1)/m <= x ) r = m;
        else l = m;
    }
    cout<< r <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}