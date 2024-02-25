#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a)cin>>i;
    sort(a.begin(),a.end());
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        cout<< upper_bound(a.begin(),a.end(),x) - a.begin() <<endl;
    }
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}