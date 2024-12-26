#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(vector<bool>&primes){
    int n;cin>>n;
    vector<int>a;
    for(int i=1;i<=n;i+=2) a.push_back(i);
    int v = -1;
    for(int i=2;i<=n;i+=2){
        if( primes[a.back()+ i] ){
            a.push_back(i);
            v = i;
            break;
        }
    }

    if(v==-1){
        cout<< -1 <<endl;
        return;
    }

    for(int i=2;i<=n;i+=2){
        if( v!=i ){
            a.push_back(i);
        }
    }

    for(int i=0;i<n;i++) cout<< a[i] << " \n"[i+1==n];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    const int lim = 1000000;
    vector<bool>primes(lim, 0);
    primes[0] = primes[1] = 1;
    for(int i=2;i*i<=lim;i++){
        if(!primes[i]){
            for(int j=i*i;j<=lim;j+=i){
                primes[j] = 1;
            }
        }
    }
    int t=1;
    cin >> t;
    while(t--)solve(primes); 
    return 0;
}