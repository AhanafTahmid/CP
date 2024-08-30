#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    map<char, int>mp;
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        mp[ch]++;
    }

    string ans = "";
    bool ok = 0;
    int ct = 1;
    int mn = 1e9;
    char ch;
    for(auto [x,y]:mp){
        if(mn>=y){
            ch = x;
            mn = y;
        }
    }
    mp[ch]--;
    if(mp[ch]==0)mp.erase(ch);
    ans+=ch;

    while(1){
        ok = 0;
        char ch='1';
        if(ct&1){
            int mx = -1;
            for(auto [x,y]:mp){
                if(mx<=y && ans.back()!=x){
                    ch = x;
                    mx = y;
                    ok = 1;
                }
            }
            mp[ch]--;
            if(mp[ch]==0)mp.erase(ch);
        }
        else{
            int mn = 1e9;
            for(auto [x,y]:mp){
                if(mn>=y && ans.back()!=x){
                    ch = x;
                    mn = y;
                    ok = 1;
                }
            }
            mp[ch]--;
            if(mp[ch]==0)mp.erase(ch);
        }
        ct++;
        if(ch!='1')ans+=ch;
        if(!ok)break;
    }
    for(auto [x,y]:mp){
        for(int i=0;i<y;i++)ans+=x;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}