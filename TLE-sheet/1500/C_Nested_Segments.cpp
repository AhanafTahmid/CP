#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector< tuple<int , int, int> > v;
    for(int i=1;i<=n;i++){
        int l, r;cin>>l>>r;
        v.push_back({l, r, i});
    }
    sort(v.begin(),v.end());
    auto [st, end, t1] = v[0];
    for(int i=1;i<n;i++){
        auto [st2, end2, t2] = v[i];
        if(st==st2 && end<=end2){
            cout<< t1 << ' ' << t2 <<endl;
            return;
        }
        else if(end>=end2){
            cout<< t2 << ' ' << t1 <<endl;
            return;
        }
        else st = st2, end = end2, t1 = t2;
    }
    cout<< -1 << ' ' << -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}