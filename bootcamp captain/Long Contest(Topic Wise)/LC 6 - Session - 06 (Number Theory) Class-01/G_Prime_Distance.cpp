#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l,u;
    while(cin>>l>>u){

        vector<int> primes;
        vector<int> pr;
        
        //sieve till sq(u)
        int sq = sqrt(u);
        vector<int>prr(sq+1,0);
        prr[0] = prr[1] = 1;
        for(int i=2;i*i<=sq;i++){
            if(!prr[i]){
                for(int j=i*i;j<=sq;j+=i){
                    prr[j] = 1;
                }
            }
        }
        for(int k=2;k<=sq;k++){
            if(!prr[k]) primes.push_back(k);
        }

        //segmeted sieve
        if(l==1)l++;
        vector<int> isPrime(u-l+1,0);
        
        for(auto x: primes){
            int start = (l/x)*x;
            if(start<l) start+=x;
            for(int i=start;i<=u;i+=x){
                if(i!=x)isPrime[i-l] = 1;
            }
        }

        for(int i=0;i<isPrime.size();i++){
            if(!isPrime[i]) pr.push_back(i+l);//cout<< i+l <<" ";
        }

        if(pr.size()<=1)printf("There are no adjacent primes.\n");
        else{
            int n = pr.size();
            int cl = LONG_LONG_MAX, dis = LONG_LONG_MIN;//closest, distant
            int cla, clb , disa , disb;
            for(int i=0;i<n;i++){
                if(i+1<n && cl>pr[i+1]-pr[i]){
                    cla = pr[i];
                    clb = pr[i+1];
                    cl = pr[i+1]-pr[i];
                }
                if(i+1<n && dis<pr[i+1]-pr[i]){
                    disa = pr[i];
                    disb = pr[i+1];
                    dis = pr[i+1]-pr[i];
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",cla,clb,disa,disb);
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}