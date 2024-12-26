#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int fib[1000]={};
    fib[0] = fib[1] = 1;
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout<< fib[n] <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}