#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1000050;
vector<bool> primes(lim,0);
vector<int> p;
set<int> st;
vector<int> prfx(lim,0);

void sieve(){
    primes[0] = primes[1] = 1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
            p.push_back(i);
        }
    }

    int n = p.size()-1;

    for(int i=0;i<n;i++){
        if(!primes[1 + p[i] + p[i+1]]) st.insert(1 + p[i] + p[i+1]);
    }

    for(int i=1;i<=lim;i++){
        st.count(i)? prfx[i] = prfx[i-1] + 1  : prfx[i] = prfx[i-1];
    }


}

void solve(){
    sieve();
    int n,k;cin>>n>>k;
    cout<< (prfx[n]>=k?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}