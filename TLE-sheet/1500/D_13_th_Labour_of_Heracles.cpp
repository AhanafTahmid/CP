#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,nn;cin>>n;
    vector<int>a(n+1),ans;
    map<int, int> mp;
    nn = n;
    int s = 0;
    for(int i=1;i<=n;i++)cin>>a[i], s+=a[i];
    while(--nn){
        int u, v;cin>>u>>v;
        mp[u]++;
        mp[v]++;
    }
    
    priority_queue< pair<int, int> >pq;
    for(auto [x,y]: mp){
        if(y>1)pq.push({a[x], y});
    }

    ans.push_back(s);
    int ct = 1;
    for(int i=1;i<n-1;i++){
        ct++;
        s += pq.top().first;
        ans.push_back(s);
        if(pq.top().second - ct == 0)pq.pop(), ct = 1;
    }
    
    for(int x: ans) cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}

make video