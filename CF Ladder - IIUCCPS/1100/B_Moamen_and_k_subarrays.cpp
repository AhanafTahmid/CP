#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v[i].first = x;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    int inv = 1;
    for(int i=0;i<n-1;i++){
        if(v[i].second+1!=v[i+1].second)inv++;
    }
    if(inv<=k)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}