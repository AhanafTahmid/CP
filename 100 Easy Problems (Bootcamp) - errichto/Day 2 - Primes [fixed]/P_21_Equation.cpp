#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;  
    if(!(n%2)) cout<< n+4 <<" "<< 4 <<endl;
    else if(n%2) cout<< n+9 <<" "<< 9 <<endl;
}

int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}