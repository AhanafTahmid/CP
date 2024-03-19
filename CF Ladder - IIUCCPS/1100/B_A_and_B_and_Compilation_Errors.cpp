#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int> mp;
    map<int,int> mp2;
    map<int,int> tmp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    tmp = mp;
    for(int i=0;i<n-1;i++){
        int x;cin>>x;
        tmp[x]--;
        if(tmp[x]==0)tmp.erase(x);
        mp2[x]++;
    }
    cout<< tmp.begin()->first <<endl;
    tmp = mp2;
    for(int i=0;i<n-2;i++){
        int x;cin>>x;
        tmp[x]--;
        if(tmp[x]==0)tmp.erase(x);
    }
    cout<< tmp.begin()->first <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}