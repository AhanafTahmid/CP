#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<pair<char, int> > vp;

    int v1 = s[0], v2 = s.back();
    if(v1>=v2)swap(v1,v2);

    vp.push_back({s[0], 1});
    for(int i=1;i<n-1;i++){
        if( s[i]>=v1 && s[i]<=v2 ) vp.push_back({s[i], i+1});
    }
    vp.push_back({s.back(), n});
    if(s[0]<=s.back() && n>2) sort(vp.begin()+1, --vp.end());
    else if(s[0]>s.back() && n>2) sort(vp.begin()+1, --vp.end(),greater<pair<char,int>>());
    
    int tot = 0, ln = vp.size();
    for(int i=0;i<ln-1;i++){
        tot+=abs(vp[i].first - vp[i+1].first);
    }
    cout<< tot <<' '<< ln <<endl;
    for(int i=0;i<ln;i++)cout<<vp[i].second<<" \n"[i==ln-1];
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}