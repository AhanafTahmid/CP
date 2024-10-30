#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k1, k2;cin>>n>>k1>>k2;
    vector<int>a(n),b(n),c(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;

    for(int i=0;i<n;i++) c[i] = abs(a[i]-b[i]);
    
    sort(c.rbegin(),c.rend());
    int k = k1 + k2;

    int s = accumulate(c.begin(),c.end(),0LL);
    if(s<=k){
        k-=s;
        cout<< (k&1? 1:0) <<endl;
        return;
    }

    priority_queue<int>pq;
    for(int x:c)pq.push(x);
    while(!pq.empty()){
        int v = pq.top(); 
        if(k==0)break;
        pq.pop();
        v--;
        k--;
        if(v>0)pq.push(v);
    }
    s = 0;
    while(!pq.empty()){
        int v = pq.top(); pq.pop();
        s+= (v * v);
    }
    cout<< s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}