#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, nn;cin>>n;
    vector<pair<int, int>> a(1), b(1), v;
    a[0].first = a[0].second = b[0].first = b[0].second = -1;
    nn = n;
    while(nn--){
        int l, r;cin>>l>>r;
        v.push_back({l,r});
    }
    sort(v.begin(),v.end());
    int p = 0, q = 0;
    for(int i=0;i<n;i++){
        if(a[p].second<v[i].first) a.push_back({v[i].first, v[i].second}),p++;
        else if(b[q].second<v[i].first) b.push_back({v[i].first, v[i].second}),q++;
        else{
            cout<< "NO" <<endl;
            return;
        }
    }
    cout<< "YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}