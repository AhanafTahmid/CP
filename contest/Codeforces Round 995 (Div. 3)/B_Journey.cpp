#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, a, b, c;cin>>n>>a>>b>>c;
    int ans = 3 * (n/(a+b+c));
    n %= (a+b+c);
    while(1){
        if(n<=0)break;
        n-=a;
        ans++;
        if(n<=0)break;
        n-=b;
        ans++;
        if(n<=0)break;
        n-=c;
        ans++;
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