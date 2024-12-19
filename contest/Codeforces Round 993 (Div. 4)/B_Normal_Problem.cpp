#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    reverse(s.begin(),s.end());
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='p') s[i] = 'q';
        else if(s[i]=='q') s[i] = 'p';
    }
    cout<< s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}