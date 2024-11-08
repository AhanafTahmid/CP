#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    priority_queue< pair<int, int> > pq;
    map<int, int>mp;
    for(int i=0;i<k;i++){
        int x, y;cin>>x>>y;
        mp[x] += y;
    }
    for(auto [x,y]: mp)pq.push({y, x});
    int ans = 0;
    while(!pq.empty() && n--){
        ans+= pq.top().first;
        pq.pop();
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