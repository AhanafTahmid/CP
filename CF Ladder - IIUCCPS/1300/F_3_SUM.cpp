#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x%10]++;
    }

    bool ok = false;
    //0,1,2,3,4,5,6,7,8,9
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    if(mp[1]>=3) ok = true;
    //2 different
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)if((v[i]+v[i]+v[j])%10==3)if(mp[i]>=2 && mp[j]>=1 && i!=j) ok = true;
    }
    //3 different
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++)if((v[i]+v[j]+v[k])%10==3)if(mp[i]>=1 && mp[j]>=1 && mp[k]>=1 && set<int>{i,j,k}.size()==3) ok = true;
        }
    }
    cout<<(ok?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}