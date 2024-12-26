#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,a,b;cin>>n>>a>>b;
    if(2*a<=b)cout<< a*n <<endl;
    else{
        if(n&1)cout<< (n/2)*b + a <<endl;
        else cout<< (n/2)*b <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}