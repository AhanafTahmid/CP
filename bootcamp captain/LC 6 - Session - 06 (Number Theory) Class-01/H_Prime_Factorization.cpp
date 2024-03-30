#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int> prime_factors;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            prime_factors.insert(i);
            n = n/i;
        }
    }
    if(n>1)prime_factors.insert(n);
    for(auto x: prime_factors)cout<<x<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}