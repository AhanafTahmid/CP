#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    string s;cin>>s;
    string s2;cin>>s2;
    int ans = 0;
    for(int i=0,j=0;i<n && j<m;j++){
        if(s[i]==s2[j]){
            ans++;
            i++;
        }
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