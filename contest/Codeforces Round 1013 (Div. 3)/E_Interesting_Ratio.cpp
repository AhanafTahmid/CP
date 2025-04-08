#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 10000000;

void solve(vector<int>&p){
    int n;cin>>n;
    int ans = 0;
    for(int x: p){
        if( x > n ) break;
        ans+= n / x;
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;

    vector<bool>primes(lim, 0);
    primes[0] = primes[1] = 1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
        }
    }

    vector<int>p;
    for (int i = 1; i <=lim; ++i) {
        if(!primes[i])p.push_back(i);
    }

    while(t--)solve(p); 
    return 0;
}