#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    vector<int>a(3);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    map<tuple<int, int,int>, int> mp;
    mp[{0, 3, 6}] = 1;
    mp[{1, 1, 6}] = 1;
    mp[{0, 4, 4}] = 1;
    mp[{1, 3, 4}] = 1;
    mp[{1, 2, 4}] = 1;
    mp[{3, 3, 3}] = 1;
    mp[{2, 2, 2}] = 1;
    if(mp.count({a[0],a[1],a[2]})) cout<< "perfectus" <<endl;
    else cout<< "invalidum" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout<< "Case " << i << ": ";
        solve();
    }
    return 0;
}