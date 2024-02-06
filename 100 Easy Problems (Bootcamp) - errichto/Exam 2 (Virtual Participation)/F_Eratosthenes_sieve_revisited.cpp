#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define lim 10000000

vector<int>prr;

void precalc_sieve(int n){
    vector<bool>pr(n+1, 0);
    pr[1] = 1;
    for(int i=2;i*i<=n;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                pr[j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(!pr[i])prr.push_back(i);
    }
}

void seg_sieve(int l, int r, int&ans){
    if(l==1) l++;
    vector<bool> primes(r-l+1,0);

    for(auto x: prr){
        int start = (l/x)*x;
        if(start<l)start+=x;
        for(int i=start;i<=r;i+=x){
            if(i!=x)primes[i-l] = 1;
        }
    }  

    for(int i=0;i<primes.size();i++){
        //cout<< i+l << " = "<<primes[i]<<endl;
        if(!primes[i])ans++;
    }
}

void solve(){
    int l,r;
    cin>>l>>r;
    int ans = 0;
    int sq = sqrt(r);
    precalc_sieve(sq);
    seg_sieve(l,r, ans);
    cout<< ans <<endl;

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}