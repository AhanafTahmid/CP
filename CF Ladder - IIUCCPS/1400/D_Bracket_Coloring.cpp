#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>a;
    stack<int>st;
    int ct = 0, ct2 = 0;
    for(int i=0;i<n;i++) if(s[i]==')') ct2++;
    if(ct2 != n-ct2){
        cout<< -1 <<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        if(s[i]=='(' && ct==0) st.push(i);
        else if(!st.empty() && s[i]==')'){
            a.push_back(st.top());
            a.push_back(i);
            st.pop();
        }
        else if( s[i] == ')' ) ct++;
        else if( s[i] == '(' ) ct--;
    }
    if(a.size() == n || a.size()==0){
        cout<< 1 <<endl;
        for(int i=1;i<=n;i++)cout<< 1 << " \n"[i==n];
    }
    else{
        cout<< 2 <<endl;
        vector<char> t(n, '2');
        for(auto x: a) t[x] = '1';
        for(int i=0;i<n;i++)cout<< t[i] <<' ';
        cout<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}