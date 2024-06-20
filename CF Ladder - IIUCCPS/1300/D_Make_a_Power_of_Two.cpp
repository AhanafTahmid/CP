#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(string&s, string&t){
    int n = s.size();
    int m = t.size();
    int ct = 0;
    int i = 0, j = 0;
    while(i<n && j<m){
        if(s[i]==t[j]){
            ct++;
            j++;
        }
        i++;
    }
    return n-ct + m-ct;
}   

void solve(){
    string s;cin>>s;
    int ans = INT_MAX;
    for(int i=1;i<=(int)1e18;i*=2){
        string tmp = to_string(i);
        int fun = f(s, tmp);
        ans = min(ans, fun);
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