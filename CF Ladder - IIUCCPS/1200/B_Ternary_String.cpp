#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s;cin>>s;
    int n = s.size();
    unordered_map<char, int>um;
    int l = 0, r = 0, ans = LLONG_MAX;
    while(l<n && r<n){
        um[s[r]]++;
        while(um.size()==3){
            ans = min(ans, r-l+1);
            um[s[l]]--;
            if(um[s[l]]==0)um.erase(s[l]);
            l++;
        }
        r++;
    }
    cout<< (ans==LLONG_MAX?0:ans) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}