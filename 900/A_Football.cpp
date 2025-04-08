#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int s1 = 0, s0 = 0;
    for(char ch: s){
        if( ch == '1') s1++, s0 = 0;
        else s0++, s1 = 0;
        if(s1 == 7 || s0 == 7){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}