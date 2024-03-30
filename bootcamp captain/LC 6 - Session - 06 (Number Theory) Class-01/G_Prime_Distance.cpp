//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1081
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l,u;
    while(cin>>l>>u){
        const int lim = 100000;
        bool primes[lim];
        vector<int> pr;
        primes[0] = primes[1] = 1; 

        for(int i=2;i*i<=lim;i++){
            if(!primes[i]){
                for(int j=i*i;j<=lim;j+=i){
                    primes[j] = 1;
                }
                pr.push_back(i);
            }
        }

        int lwstart = lower_bound(pr.begin(),pr.end(),l) - pr.begin();
        //pr[lwstart]==l?lwstart++:0;
        int lwend = lower_bound(pr.begin(),pr.end(),u) - pr.begin();
        pr[lwend]==u?lwend++:0;

        if(lwend-lwstart<=1)printf("There are no adjacent primes.\n");
        else{
            int n = lwend;
            int cl = LONG_LONG_MAX, dis = LONG_LONG_MIN;//closet, distant
            int cla, clb , disa , disb;
            for(int i=lwstart;i<n;i++){
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