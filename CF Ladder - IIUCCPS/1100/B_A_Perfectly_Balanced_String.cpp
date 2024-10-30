#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int st = set<char>(s.begin(),s.end()).size();
    if(st==1 || st==n)cout<<"YES"<<endl;
    else{
        vector<int> idx(30,0);
        int mn = n;
        for(int i=0;i<n;i++){
            char x = s[i] - 'a';
            if(!idx[x]) idx[x] = i+1;
            else{
                mn = min(mn, (i+1) - idx[x]);
                idx[x] = i+1;
            }
        }
        if(mn>=st)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}