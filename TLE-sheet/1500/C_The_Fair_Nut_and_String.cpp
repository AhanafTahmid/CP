#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int md = 1e9+7;

void solve(){
    string s, s1;cin>>s;
    for(char ch: s){
        if(ch=='a' || ch=='b') s1.push_back(ch);
    }

    int n = s1.size();
    int ans = 0, ct = 0;

    vector<int>a;
    for(int i=0;i<n;i++){
        if(s1[i]=='b'){
            if(ct)a.push_back(ct);
            ct = 0;
        }
        else ct++;
    }
    if(s1.back()!='b') a.push_back(ct);

    for(int i=0;i<a.size();i++){
        ans = (ans + ((a[i]* ans) + a[i])%md)%md;
    }

    cout<< ans <<endl;
}


int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}