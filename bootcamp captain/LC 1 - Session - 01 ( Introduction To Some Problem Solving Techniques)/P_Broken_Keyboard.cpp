#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    s+='0';
    int ln = s.size()-1;
    set<char> ans;
    for(int i=0;i<ln;){
        if(s[i]==s[i+1])i+=2;
        else ans.insert(s[i]),i++;
    }
    for(auto x: ans)cout<<x;
    cout<<endl;
}


signed main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}