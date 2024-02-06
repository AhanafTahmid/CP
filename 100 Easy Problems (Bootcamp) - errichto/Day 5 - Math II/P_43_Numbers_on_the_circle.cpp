#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    long long n, ans = 1;
    cin>> n;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    cout<< ans <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}