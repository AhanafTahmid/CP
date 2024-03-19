#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int ans = 0;
    //maximum answer can the half length*2
    for(int i=1;i<=n/2;i++){
        int ct = 0;
        for(int j=n-i-1;j>=0;j--){
            if(s[j]==s[j+i] || s[j]=='?' || s[j+i]=='?')ct++;
            else ct = 0;
            if(ct==i){
                ans = ct;
                break;
            }
        }
    }

    cout<< ans * 2 <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}