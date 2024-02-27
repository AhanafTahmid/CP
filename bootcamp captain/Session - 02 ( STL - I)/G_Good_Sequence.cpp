#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    int ans = 0;
    for(auto [x,y]: mp){
        //cout<< x << " "<<y<<endl;
        if(x==y)continue;
        int tmp = max(x,y);
        if(tmp==x) ans+=y;
        else ans+=abs(x-y);
    }
    cout<< ans <<endl;

}

int32_t main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}