#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<string> v;
    map<string, int> mp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
        mp[s] = 1;
    }


    for(int i=0;i<n;i++){
        int ln = v[i].size();
        string tmp="";
        int f = 0;
        for(int j=0;j<ln;j++){
            tmp+=v[i][j];
            if(mp[tmp]==1){
                string tmpp = v[i].substr(0+j+1);
                //cout<<tmp<<" = "<<tmpp<<endl;
                if(mp[tmpp]==1){
                    cout<<1;
                    f = 1;
                    break;
                }
            }
        }
        if(!f)cout<<0;
    }
    cout<<endl;
}


int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}