#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    while(1){
        int n;cin>>n;
        if(n==0)break;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            pq.push(x);
        }
        int v1 = 0, v2 = 0, ans = 0;
        while(pq.size()!=1){
            v1 = pq.top();
            pq.pop();
            v2 = pq.top();
            pq.pop();

            ans+=(v1+v2);
            pq.push(v1+v2);
        }
        cout<< ans <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}