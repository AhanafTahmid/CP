#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<array<int,2>> v1, v2, v3;
    for(int i=0;i<n;i++){
        if( s[i] == 'b' && v1.size()>=1) {
            v1.pop_back();
        }
        else if(s[i] == 'B' && v2.size()>=1){
            v2.pop_back();
        }
        else if( s[i] == 'b' || s[i] == 'B')continue;
        else if(s[i]>='a' && s[i]<='z')v1.push_back({i,s[i]});
        else if(s[i]>='A' && s[i]<='Z')v2.push_back({i, s[i]});
    }
    string ans = "";
    for(auto x: v1) v3.push_back({x[0], x[1]});
    for(auto x: v2) v3.push_back({x[0], x[1]});
    sort(v3.begin(), v3.end());
    for(auto x: v3) ans+=x[1];
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}