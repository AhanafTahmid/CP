#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a,b;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=n && mp[x]==0)mp[x] = -1;
        else a.push_back(x);
    }
    
    for(int i=1;i<=n;i++){
        if(mp[i]!=-1)b.push_back(i);
    }
    n = a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if( 2*b[i]+1 > a[i]){
            cout<< -1 <<endl;
            return;
        }
    }
    cout<< n <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}