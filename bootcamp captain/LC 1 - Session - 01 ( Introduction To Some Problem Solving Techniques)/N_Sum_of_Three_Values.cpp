//basically triplet sum

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void two_pointer(vector<pair<int,int>> vp, int n, int x){
    sort(vp.begin(), vp.end());
    for(int i=0;i<n;i++){
        int l = i+1, r = n-1, v = vp[i].first;
        while(l<r){
            int sum = v + vp[l].first + vp[r].first;
            if(sum==x){
                printf("%lld %lld %lld\n",vp[l].second+1,vp[r].second+1,vp[i].second+1);
                return;
            }
            else if(sum>x)r--;
            else if(sum<x)l++;
        }
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