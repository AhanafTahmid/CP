#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i == j && s[i] == '0') ans++;
            else if( i!=j && s[i] == '1') ans++;
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