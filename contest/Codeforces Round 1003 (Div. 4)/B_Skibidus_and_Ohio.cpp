#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int ind = -1, n = s.size();
    for(int i=0;i+1<n;i++){
        if( s[i] == s[i+1] ){
            ind = i+1;
        }
    }
    cout<< (ind==-1?n:1LL) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}