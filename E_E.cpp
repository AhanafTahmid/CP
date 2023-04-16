#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int val = 3*(a/3);
    if(a==val) cout<<a*b+c*(a/3)-c<<endl;
    else cout<<a*b+c*(a/3)<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}