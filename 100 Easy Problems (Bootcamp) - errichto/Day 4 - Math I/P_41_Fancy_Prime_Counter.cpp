#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define lim 300005

vector<bool>pr(lim,0);
vector<int>pf(lim,0);//prefix sum


void precalc_sieve(){
    for(int i=2;i*i<=lim;i++){
        if(!pr[i]){
            for(int j=i*i;j<=lim;j+=i){
                pr[j] = 1;
            }
        }
    }
    pf[0] = pf[1] = 0;
   
    for(int k=2;k<lim;k++) pf[k] = pf[k-1] + !pr[k];
}

void solve(){
    int l, r;
    cin>> l >> r;
    cout<< pf[r] - pf[l-1] <<endl;
    //for(int i=l;i<=r;i++)cout<< i <<" = "<< pf[i] <<endl;
}


int main(){
    precalc_sieve();
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}