//https://www.shafaetsplanet.com/?p=855

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1e8;

int N =lim,prime[lim]; 
int status[3200000];

bool check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

void bitwise_sieve()
{
    int i, j; 
    for(i = 3; i * i <= N; i += 2 ) 
    {
        if(check(status[i/32],i%32)==0){
            for( j = i*i; j <= N; j += 2*i){
                status[j/32]=Set(status[j/32],j % 32);
            }
        }
    }
    cout<<"2"<<endl;
    int ct = 2;
    for(i=3;i<=N;i+=2)
        if( check(status[i/32],i%32)==0){
        if(ct%100==1) printf("%d\n",i);
        ct++;
    }

}

void solve(){
    bitwise_sieve();
}

int32_t main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}