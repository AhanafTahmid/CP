#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(is_sorted(s.begin(),s.end())) cout<< s <<endl;
    else{
        int ct0 = 1, ct1 = 0;
        int l = 0LL;
        while(s[l]=='0')ct0++,l++;
        l = n - 1;
        while(s[l]=='1')ct1++,l--;
        cout<< string(ct0, '0') + string(ct1, '1') <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}