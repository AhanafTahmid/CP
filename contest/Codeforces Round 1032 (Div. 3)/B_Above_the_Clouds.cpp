#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin >> n;
    string s;cin>>s;
    map<char,int>mp;
    for(int i = 1; i +1 < n; i++) mp[s[i]] = i;
    for(int i=0;i<n;i++){
        if( mp.find(s[i]) != mp.end() && mp[s[i]] != i){
            cout<< "Yes" << endl;
            return;
        }
    }
    cout<< "No" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}