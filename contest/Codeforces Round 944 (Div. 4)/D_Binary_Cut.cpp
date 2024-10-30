#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    bool ok = false;
    int ct = 1;
    for(int i=0;i<n;i++){
        if(i+1<n && s[i]==s[i+1])continue;
        else if(i+1<n && s[i]=='1' && s[i+1]=='0')ct++;
        else if(i+1<n && s[i]=='0' && s[i+1]=='1' && ok) ct++;
        if(i+1<n && s[i]=='0' && s[i+1]=='1' && !ok) ok = true;
    }
    cout<< ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}