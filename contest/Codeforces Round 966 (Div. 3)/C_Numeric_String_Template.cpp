#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int m;cin>>m;
    while(m--){
        string s;cin>>s;
        set<int>st;
        map<int, int>mp, mp2;
        int ln = s.size();
        bool ok = 1;
        if(ln!=n) ok = 0;
        for(int i=0;i<ln;i++){
            if(!st.count(s[i])){
                st.insert(s[i]);
                mp[s[i]] = a[i];
            }
            else if(st.count(s[i]) && mp[s[i]]!=a[i]){
                ok = 0;
                break;
            }
        }
        
        
        for(auto [x,y]:mp){
            if(mp2[y]==-1){
                ok = 0;
                break;
            }
            mp2[y] = -1;
        }

        cout<< (ok?"YES":"NO") <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}