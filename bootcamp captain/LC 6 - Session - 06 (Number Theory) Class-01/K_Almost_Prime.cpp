#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int lim = 100000;
vector<bool>primes(lim, 0);
vector<int> vc;

void almost_prime(){
    primes[0] = primes[1] = 1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
        }
    }

    for(int i=2;i<=lim;i++){
        int ct = 0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                if(!primes[j])ct++;
                if(i/j != j)if(!primes[i/j])ct++;
            }
        }
        if(ct==2)vc.push_back(i);
    }
}

void solve(){
    almost_prime();
    int n;cin>>n;
    int lw = lower_bound(vc.begin(),vc.end(), n) - vc.begin();
    (vc[lw]==n)?lw++:lw;
    cout<< lw <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}