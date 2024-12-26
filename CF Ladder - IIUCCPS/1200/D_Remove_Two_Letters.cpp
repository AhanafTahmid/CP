#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    n--;
    set<string> st;
    for(int i=0;i<n;i++){
        string new_str = s.substr(0, i) + s.substr(i+2);
        st.insert(new_str);
    }
    cout<< st.size() <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}