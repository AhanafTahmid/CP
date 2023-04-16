#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k;
    cin>>n>>k;
    //long long an=(k+1)/2;
    long long andd=(n+1)/2;
    //odd numbers
    if(andd>=k) cout<<(k*2)-1<<endl;
    //even numbers
    else cout<<(k*2)-(andd*2)<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}