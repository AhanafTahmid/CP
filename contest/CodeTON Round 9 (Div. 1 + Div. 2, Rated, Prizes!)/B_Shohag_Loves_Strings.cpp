#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    for(int i=0;i+1<n;i++){
        if(s[i]==s[i+1]){
            cout<< s[i] << s[i] <<endl;
            return;
        }
    }
    for(int i=0;i+2<n;i++){
        set<char>st;
        st.insert(s[i]);
        st.insert(s[i+1]);
        st.insert(s[i+2]);
        if(st.size()==3){
            cout<< s[i] << s[i+1] << s[i+2] <<endl;
            return;
        }
    }
    cout<< -1 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}  