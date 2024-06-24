#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<int>upd;
    vector<char>v;
    map<int, int>mp;
    int mm = m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        upd.push_back(x);
        mp[x]++;
    }
    string s2;cin>>s2;
    sort(s2.begin(),s2.end());

    int i = 0;
    for(auto [x,y]:mp){
        s[x-1] = s2[i];
        i++;
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