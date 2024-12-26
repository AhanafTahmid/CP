#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 100000005;
vector<int> p;
bool primes [lim];

void solve(){
    int n;cin>>n;
    cout<< p[n-1] <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = true;
            }
        }
    }

    for(int i=2;i<=lim;i++){
        if(!primes[i]) p.push_back(i);
    }
    cin >> t;
    while(t--)solve(); 
    return 0;
}