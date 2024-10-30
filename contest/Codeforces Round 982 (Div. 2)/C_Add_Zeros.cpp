#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector< pair<int, int> >a(n);// {length_demand, legnth add hobe}
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i>1)a[i-1] = {x+i-1, i - 1};
    }
    sort(a.begin(),a.end());
    map<int, int>mp;
    mp[n] = 1;
    for(auto [x,y]:a){
        if(mp.find(x)!=mp.end()){
            mp[x+y] = 1;
        }
    }
    int ans = 0;
    for(auto [x,y]:mp) ans = max(ans, x);
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}