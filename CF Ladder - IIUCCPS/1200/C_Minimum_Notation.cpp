#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int mx = 9;
    int ans[10]={};
    for(int i=n-1;i>=0;i--){
        if((s[i] - '0') > mx){
            ans[ min(s[i] - '0' + 1, 9) ]++;
        }
        else{
            ans[s[i] - '0']++;
            mx = s[i] - '0';
        }
    }
    for(int i=0;i<=9;i++) cout<<string(ans[i], i+'0');
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}