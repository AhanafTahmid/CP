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

    int v = n - 2;
    for(int i=1;i*i<=v;i++){
        if(v%i==0){
            int ct = 0;
            if( mp.find(i) != mp.end() ){
                mp[i]--;
                if(mp[i]==0) mp.erase(i);
                ct++;
            }
            if( mp.find(v/i) != mp.end() ){
                mp[v/i]--;
                if(mp[v/i]==0) mp.erase(v/i);
                ct++;
            }
            if(ct==2){
                cout<< i << ' ' << v/i <<endl;
                return;
            }
            mp[i]++;
            mp[v/i]++;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}