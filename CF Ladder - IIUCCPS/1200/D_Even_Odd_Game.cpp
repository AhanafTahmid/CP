#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pq.push(x);
    }

    int a = 0, b = 0;
    int ct = 1;
    while(!pq.empty()){
        int v = pq.top();
        if(ct&1){
            if(v%2==0)a+=v;
        }
        else{
            if(v&1) b+=v;
        }
        pq.pop();
        ct++;
    }
    cout<< ((a==b)?"Tie": ((a>b)?"Alice":"Bob")) <<endl;
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}