#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s1, s2;cin>>s1>>s2;
    cout<< s2[0] << s1[1] << s1[2] << ' ' << s1[0] << s2[1] << s2[2] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}