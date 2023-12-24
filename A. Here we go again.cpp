#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if((a>=1 && a<=9) &&  (b>=1 && b<=9))cout<<a*b<<endl;
    else cout<<-1<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}