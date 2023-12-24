#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)//if it is odd
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
        
    }
    return res;
}


void solve(){
    int a,b,c;
    while(cin>>a>>b>>c){
        cout<<binpow(a,b,c)<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}