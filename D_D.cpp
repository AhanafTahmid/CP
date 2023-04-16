#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    if(b+b<a) cout<<a-(b+b);
    else cout<<0<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}