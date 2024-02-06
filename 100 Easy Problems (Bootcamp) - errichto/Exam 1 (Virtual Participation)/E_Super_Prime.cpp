#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define lim 10000000

int pr[20000000];
void precalc_primes(){
    for(int i=2;i*i<=lim;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=lim;j+=i){
                pr[j] = true;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    precalc_primes();
    int ans = 0;
    for(int i=3;i<=n;i++){
        if(!pr[i]) if( !pr[2 + i]) ans ++;
    }
    cout<< ans << endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}