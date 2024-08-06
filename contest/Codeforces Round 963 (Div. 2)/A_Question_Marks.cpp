#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>v(200,0);
    for(int i=0;i<s.size();i++) v[s[i]]++;//why s[i]-'A' not working? for last tc
    int ans = 0;
    for(int i=65;i<69;i++) ans+= min(v[i], n);
    cout<< ans <<endl;
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}