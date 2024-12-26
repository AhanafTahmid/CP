#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void rec(ll n){
    if(n==1) {cout<<n <<endl;return;}
    cout<< n <<endl;
    if(n%2==0) rec(n/2);
    else if(n%2==1) rec(n*3+1);
}

void solve(){
    ll n;
    cin >> n;
    rec(n);
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}