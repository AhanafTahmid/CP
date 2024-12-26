#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int k;cin>>k;
    
    int vis[30]={};
    while(k--){
        char ch;cin>>ch;
        vis[ch-'a'] = 1;
    }

    int ans = 0;
    int ct = 0;
    for(int i=0;i<n;i++){
        if(i+1<n && vis[s[i]-'a'] && vis[s[i+1]-'a'] && s[i]==s[i+1]) s[i+1]='0';
        if(!vis[s[i]-'a'])ct++;
        else ans = max(ans, ct), ct = 1;
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