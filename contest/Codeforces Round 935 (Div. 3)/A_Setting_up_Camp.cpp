#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c; cin>> a >> b >> c;
    int ans = a;
    ans+=(b/3);
    b = b%3;
    if((b==1 && (c==1 || c==0)) || (b==2 && c==0 ) )cout<< -1 <<endl;
    else{
        b = b + c;
        ans+=(b/3);
        if(b%3)ans++;
        cout<< ans <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}