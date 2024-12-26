#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = (s[0] -'0') * 10 + s[1]-'0';
    string s2="";
    for(int i=2;i<s.size();i++) s2+= s[i];
    int n2 = 0;
    if(!s2.empty()) n2 = stoi(s2);
    if(n==10 && n2>=2 && (s.size()>=3 && s[2]!='0'))cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}