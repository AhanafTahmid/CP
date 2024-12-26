#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1e7;
bool primes[lim+1];
vector<int>pr;

void solve(){
    int n;cin>>n;
    primes[0] = primes[1] = 1;
    for(int i=2;i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
            pr.push_back(i);
        }
    }
    for(int i=0;i<n;i++) cout<< pr[i] <<" \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}