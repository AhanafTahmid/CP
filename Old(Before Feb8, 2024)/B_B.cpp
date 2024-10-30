#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if((a+b)%3==0 || a%3==0 || b%3==0) cout<<"Possible";
    else cout<<"Impossible";
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}