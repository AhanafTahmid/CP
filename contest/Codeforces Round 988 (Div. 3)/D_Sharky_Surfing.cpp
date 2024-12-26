#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, r;cin>>n>>m>>r;
    vector<pair<int ,int> >h(n), p(m);
    priority_queue<int> pq;

    for(int i=0;i<n;i++){
        int x, y;cin>>x>>y;
        h[i] = {x, y - x + 1};
    }

    for(int i=0;i<m;i++){
        int x, y;cin>>x>>y;
        p[i] = {x, y};
    }
    
    int ans = 0, curr = 0;
    for(int i=0,j=0;i<n;i++){
        while(j<m && p[j].first<=h[i].first ){
            pq.push(p[j++].second);
        }

        if(h[i].second>curr){            
            while(!pq.empty() && h[i].second>curr){
                curr+= pq.top();
                pq.pop();
                ans++;
            }
            if(h[i].second>curr){
                cout<< -1 <<endl;
                return;
            }
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