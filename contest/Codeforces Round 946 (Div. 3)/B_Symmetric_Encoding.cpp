#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s,s2,ans;cin>>s;
    set<char> st(s.begin(),s.end());
    for(auto ch: st) s2.push_back(ch);

    map<char, char>mp;
    for(int i=0;i<=s2.size()/2;i++){
        mp[s2[i]] = s2[s2.size()-1-i];
        mp[s2[s2.size()-1-i]] = s2[i];
    }
    for(int i=0;i<s.size();i++){
        ans.push_back(mp[s[i]]);
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