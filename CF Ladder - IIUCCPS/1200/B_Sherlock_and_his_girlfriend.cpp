#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1e6 + 10;
vector<bool>primes(lim+1000);

void sieve(){
    primes[0] = primes[1] = 1;
    for(int i=2;i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
        }
    }
}

void solve(){
    sieve();
    int n;cin>>n;
    set<int> st;
    vector<int> ans;
    for(int i=2;i<=n+1;i++){
        if(primes[i]) ans.push_back(2),st.insert(2);
        else ans.push_back(1),st.insert(1);
    }
    cout<< st.size() <<endl;
    for(int i=0;i<n;i++) cout<< ans[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}