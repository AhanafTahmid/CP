#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 10000000;
bool primes[lim];

int solve(){
    int n;cin>>n;
    int ct = 0;
    int ln = n/2;
    for(int i=2;i<=ln;i++){
        if(!primes[i])if(!primes[n-i])ct++;
    }
    return ct;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    primes[0] = primes[1] = 1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = true;
            }
        }
    }
    cin >> t;
    for(int i=1;i<=t;i++){
        printf("Case %lld: %lld\n",i,solve());
    }
    return 0;
}