#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<int, int> mp;
    int ans = 0, sum = 0;
    mp[0] = 1;
    for(int ch: s){
        sum+= ch - '0' - 1;
        ans+= mp[ sum ];
        mp[ sum ]++;
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