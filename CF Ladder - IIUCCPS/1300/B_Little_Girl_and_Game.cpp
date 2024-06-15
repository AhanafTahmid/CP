#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    map<char, int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    bool ok = 0;
    for(auto &[x,y]: mp){
        if(y%2==0) y = 0;
        else if(y%2 && !ok) y = 0, ok = 1;
    }
    int ct = 0;
    ok = 0;
    for(auto &[x,y]: mp){
        if(y%2 && !ok) ct++, ok = 1;
        else if(y%2) ct+=y;
    }
    cout<< (ct%2==0?"First":"Second") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}