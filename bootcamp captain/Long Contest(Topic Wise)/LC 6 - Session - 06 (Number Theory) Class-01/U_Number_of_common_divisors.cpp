#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    int ans = 0;
    int n = __gcd(a,b);
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans++;
            if(n/i != i) ans++;
        }
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