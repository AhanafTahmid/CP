//2sum - two pointer

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(vector<pair<int,int>> vp, int n, int x){
    sort(vp.begin(), vp.end());
    int l = 0, r = n - 1;
    while(l<r){
        int sum = vp[l].first + vp[r].first;
        if(sum==x){
            printf("%lld %lld\n",vp[l].second+1,vp[r].second+1);
            return;
        }
        else if(sum>x)r--;
        else if(sum<x)l++;
    }
    cout<<"IMPOSSIBLE"<<endl;
}

void solve(){
    int n;cin>>n;
    int x;cin>>x;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int val; cin>>val;
        vp.push_back({val, i});
    }
    two_pointer(vp, n, x);
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}