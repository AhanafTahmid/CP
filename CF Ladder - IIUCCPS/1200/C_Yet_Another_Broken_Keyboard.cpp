#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s; cin>>s;
    set<char> st;
    for(int i=0;i<k;i++){
        char x;cin>>x;
        st.insert(x);
    }
    vector<int> v;
    int ct = 0;
    for(int i=0;i<n;i++){
        if(st.count(s[i]))ct++;
        else{
            v.push_back(ct);
            ct = 0;
        }
    }
    v.push_back(ct);
    int ans = 0;
    for(int i: v){
        ans = ans + (i * (i+1))/2;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}