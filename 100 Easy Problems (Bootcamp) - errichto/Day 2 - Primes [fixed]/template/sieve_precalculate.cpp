//#######-------Version 1--------########

ll pr [1000000]={};
void precalculated_primes(ll n){
    for(int i=2;i*i<=n;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                pr[j] = 1;
            }
        }
    }
}

//#######-------Version 2--------########


ll pr[10000000]={};
bool sieve(int n){
    for(int i=2;i*i<=n;i++){
        if(pr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                pr[j] = 1;
            }
        }
    }
    return pr[n];
}

sieve(10000000);