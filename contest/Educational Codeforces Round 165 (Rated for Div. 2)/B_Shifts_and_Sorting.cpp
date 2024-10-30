#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    int ans = 0, l = 0, r = 0;
    while(r<n){
        if(s[l]=='0')l++;
        if(s[l]=='1' && s[r]=='0' && l<r){
            ans = ans + (r-l+1);
            swap(s[l],s[r]);
            l++;
        }
        r++;
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