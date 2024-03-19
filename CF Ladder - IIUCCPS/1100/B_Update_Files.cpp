#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    int uc = 1, ans = 0;
    while(uc<k){
        ans++;
        uc<<=1;
    }
    //if computer still remains to copy
    if(uc<n) ans = ans + ((n-uc)+k-1)/k;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}