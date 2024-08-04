#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    stack<int>st,st2;
    st.push(1);
    s[0] = '(';
    for(int i=1;i<n;i++){
        if(s[i]=='_'){
            if( st.empty() ) s[i] = '(', st.push(1);
            else s[i] = ')', st.pop();
        }
        else if(s[i]==')') st.pop();
        else st.push(1);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') st2.push(i);
        else{
            ans+= (i - st2.top());
            st2.pop();
        }
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}