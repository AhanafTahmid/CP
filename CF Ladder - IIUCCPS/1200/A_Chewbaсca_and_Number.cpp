#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i==0 && s[0]==57)ans.push_back(9);
        else ans.push_back( min( 57 - s[i], s[i] - '0') );
    }
    for(int i=0;i<n;i++)cout<< ans[i];
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}