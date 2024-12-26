#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int lim = 1e8;
int N =lim; 
int status[3200000];
vector<int> prime;

bool check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

void bitwise_sieve(){
    int i, j; 
    for( i = 3; i * i <= N; i += 2 ) 
    {
        if(check(status[j>>5],i & 31)==0){
            for( j = i*i; j <= N; j += (i<<1)){
                status[j>>5]=Set(status[j>>5],j & 31);
            }
			prime.push_back(i);
        }
    }
}

int SOD( int n ) {
    int res = 1;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            int tempSum = 1; // Contains value of (p^0+p^1+...p^a)
            int p = 1;
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                p *= prime[i];
                tempSum += p;
            }
            sqrtn = sqrt ( n );
            res *= tempSum;
        }
    }
    if ( n != 1 ) {
        res *= ( n + 1 ); // Need to multiply (p^0+p^1)
    }
    return res;
}


void solve(){
    int n;cin>>n;
    int ans = 1;
    for(int i=2;i<=n;i++){
        int ct = 1;
        while(n%i==0){
            ct++;
            n/=i;
        }
        ans = ans * (pow(i, ct)-1)/(i-1);
        cout<< ans <<endl;
    }
    cout<< ans <<endl;
    cout<< SOD(n)  <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}