#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l,r;cin>>l>>r;
    string s;cin>>s;
    reverse(s.begin()+l-1, s.begin()+r);
    cout<< s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}