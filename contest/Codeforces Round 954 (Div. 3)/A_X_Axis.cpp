#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c;cin>>a>>b>>c; 
    int ans = INT_MAX;
    for(int i=1;i<=10;i++){
        ans = min(abs(a-i)+abs(b-i)+abs(c-i), ans);
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