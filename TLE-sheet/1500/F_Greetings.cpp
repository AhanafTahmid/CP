#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector< array<int, 2> > v;
    set<int>st;
	ordered_set o;
    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        v.push_back({x,y});
        o.insert(y);
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        int val = o.order_of_key(v[i][1]);
        ans+= val;
        o.erase(v[i][1]);
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
