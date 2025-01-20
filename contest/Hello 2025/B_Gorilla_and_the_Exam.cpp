#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    vector<int>a(n),b;
    for(int i=0;i<n;i++) cin>>a[i];
    
    map<int, int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int mx = 0, d = 0;
    for(auto [x,y]: mp){
        b.push_back(y);
    }

    sort(b.begin(),b.end());
    int ans = 1;
    for(int i=0;i+1<b.size();i++){
        if( b[i]<=k ) k-=b[i];
        else{
            ans+= (b.size() - 1 - i);
            break;
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