#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, k;
    cin>> n >>k;

    if(k==0)cout<< 1 <<endl;
    else if(n>k*2) cout<< n - (n-k) <<endl;
    else cout<< n-k <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}