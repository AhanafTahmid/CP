#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    if(a+b>=x || a+c>=x || b+c>=x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}