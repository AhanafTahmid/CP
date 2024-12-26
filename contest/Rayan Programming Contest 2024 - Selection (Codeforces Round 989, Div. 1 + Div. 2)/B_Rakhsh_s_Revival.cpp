#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, k;cin>>n>>m>>k;
    string s;cin>>s;
    int ct = 0, ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ct++;
            if(ct==m){
                ans++, ct = 0;
                i+=k-1;
            }
        }
        else ct = 0;
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