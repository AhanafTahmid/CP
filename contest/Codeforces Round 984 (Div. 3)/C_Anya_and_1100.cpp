#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s,s2;cin>>s;
    s2 = s;
    int q;cin>>q;
    int n = s.size();
    set<int>st;
    for(int i=0;i<n-3;i++){
        if(s.substr(i, 4) == "1100") st.insert(i);
    }
    while(q--){
        int x;cin>>x;
        char v;cin>>v;
        s[--x] = v;
        for(int i=max(0LL, x-3);i<min(n, x+3); i++){
            if(s2.substr(i, 4) == "1100") st.erase(i);
        }
        s2 = s;
        for(int i=max(0LL, x-3);i<min(n, x+3); i++){
            if(s2.substr(i, 4) == "1100") st.insert(i);
        }
        cout<< (st.size()?"YES":"NO") <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}