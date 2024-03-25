#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    set<int> st;
    st.insert(-1);
    int mx = -1;
    int ct = st.size();
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(mx<=x){
            mx = x;
        }
        else{
            st.insert(x);
            ct = st.size();
        }
        cout<< x<<' '<<ct<<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    // cin >> t;
    while(t--)solve(); 
    return 0;
}