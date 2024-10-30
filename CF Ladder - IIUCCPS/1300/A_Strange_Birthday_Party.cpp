#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int>k(n);
    for(int &i: k)cin>>i;
    sort(k.rbegin(),k.rend());
    
    map<int, int>mp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;

    for(int i=1;i<=m;i++){
        int x;cin>>x;
        pq.push({i,x});
        mp[i] = x;
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        if( !pq.empty() && pq.top().first<=k[i]){
            sum+= min(pq.top().second, mp[k[i]]);
            pq.pop();
        }
        else sum+=mp[k[i]];
    }
    cout<< sum << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}