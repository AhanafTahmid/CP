#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    set<int>st(s.begin(),s.end());
    if(st.size() == n){
        char ch;
        if(s[0]=='z') ch = 'a';
        else ch = s[0]+1;
        cout<<  ch << s <<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                char ch;
                if(s[i]=='z') ch = 'a';
                else ch = s[i]+1;
                cout<< s.substr(0,i+1) << ch << s.substr(i+1, n) <<endl;
                return;
            }
        }
        char ch;
        if(s[0]=='z') ch = 'a';
        else ch = s[0]+1;
        cout<<  ch << s <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}