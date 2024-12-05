#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int>mp;
    vector<pair<int, int> >a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(mp[x]<2)mp[x]++;
    }
    int al = 0;
    for(auto [x,y]: mp){
        a.push_back({y,x});
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(i&1){
            if(a[i].first==2) al++;
        }
        else{
            if(a[i].first==1) al+=2;
            else if(a[i].first==2) al++;
        }
    } 
    
    cout<< al <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}