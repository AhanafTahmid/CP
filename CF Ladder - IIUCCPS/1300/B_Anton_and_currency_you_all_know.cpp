#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int mx = INT_MAX, ind = -1;
    for(int i=0;i<s.size();i++){
        if((s[i]-'0')%2==0 && mx>=s[i]-'0'){
            mx = s[i]-'0';
            ind = i;
        }
    }
    if(ind==-1)cout<< -1 <<endl;
    else{
        bool ok = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0' == mx && s.back()-'0' > mx){
                swap(s.back(),s[i]);
                ok = 1;
                break;
            }
        }
        if(!ok) swap(s.back(), s[ind]);
        cout<< s <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}