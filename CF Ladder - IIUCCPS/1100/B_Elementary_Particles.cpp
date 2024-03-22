#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i].first = x;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    int ans = -1;
    for(int i=0;i<n-1;i++){
        if(v[i].first==v[i+1].first){
            ans = max(ans, min(v[i].second,v[i+1].second )+min(n - v[i].second, n - v[i+1].second) );
        }
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