#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long double

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int s = (a+b+c);
    int aa = s * (s-a) *  (s-b)  * (s-c);
    int g = __gcd(aa, s*s/4);
    cout<< (aa)/g <<  '/' << (s*s) / g <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}